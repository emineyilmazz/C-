/*
    * Store.cpp
    * film kiralama, ekleme, silme iade edildiði ve kazancýn yazdýrýldýðý yerdir.
    * Üçüncü Proje
    * 06.01.2023
    * emine yilmaz  emine.yilmaz@stu.fsm.edu.tr
*/

#include "Store.h"

Store::Store(string storeName){
	this->storeName = storeName;
	this->movieCount = 0;
	this->revenue = 0;
}

void Store::AddMovie(Movie *movie){
	MovieStock *movieStock = FindMovieStock(movie);
	
	if(movieStock == 0){
		this->moviesStock.push_back(new MovieStock(movie));
	}
	else{
		movieStock->count++;
	}
	
	this->movieCount++;
}

void Store::RemoveMovie(Movie *movie){
	MovieStock *movieStock = FindMovieStock(movie);
	
	if(movieStock != 0){
		movieStock->count--;
	}
	
	this->movieCount--;
}

void Store::RentMovie(Customer *customer, Movie *movie){
	MovieStock *movieStock = FindMovieStock(movie);
	if(movie->isForAdult && !customer->isAdult){
		cout << "Musteri film ozelligini karsilayamadigindan kiralama yapilamaz." << endl;
		return;
	}
	
	if(movie->ageLimit > customer->age){
		cout << "Musterinin yasý yetmediginden kiralama yapilamaz." << endl;
		return;
	}
	
	if(movie->price > customer->balance){
		cout << "Musterinin bakiyesi yetmediginden kiralama yapilamaz." << endl;
		return;
	}
	
	if(movieStock->count > 0){
		this->revenue += movie->price;
		customer->rentAmount++;
		movieStock->count--;
		AddCustomer(customer);
		this->movieCount--;
		cout << movie->title << " filmi " << customer->Name << " musterisine kiralandi." << endl;
		return;
	}else{
		cout << "Film tukendigi icin kiralama yapilamaz." << endl;
	}
}

void Store::ReturnMovie(Customer *customer, Movie *movie){
	MovieStock *movieStock = FindMovieStock(movie);
	
	if(movieStock == 0){
		cout << "Bu film magazada satilmiyor." << endl;
	}
	else{
		movieStock->count++;
		this->movieCount++;
		cout << movie->title << " iade edildi." << endl;
	}
}

void Store::AddCustomer(Customer *customer){
	for(Customer* c : this->customers){
		if(customer == c){
			return;
		}	
	}
	
	this->customers.push_back(customer);
}

void Store::PrintCurrentMovies(){
	for(MovieStock* movieStock : this->moviesStock){
		cout << "Title: " << movieStock->movie->title << "   count: " << movieStock->count << endl;
	}
}

MovieStock* Store::FindMovieStock(Movie *movie){
	for(MovieStock* movieStock : this->moviesStock){
		if(movieStock->movie->title == movie->title){
			return movieStock;
		}	
	}
	
	return 0;
}

void Store::PrintMovieCount(){
	cout << "MovieCount: " << this->movieCount << endl;
}

void Store::PrintRevenue(){
	cout << "Revenue: " << this->revenue << endl;
}


//----------------------------------


MovieStock::MovieStock(Movie *movie){
	this->movie = movie;
	this->count = 1;
}

