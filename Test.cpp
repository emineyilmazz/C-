 /*
    * Test
    * Yazýlan kodlarýn test edildiði dosyadýr.
    * Üçüncü Proje
    * 06.01.2023
    * emine yilmaz  emine.yilmaz@stu.fsm.edu.tr
*/


#include <iostream>
#include <string>
#include "Address.h"
#include "Customer.h"
#include "Movie.h"
#include "Store.h"

using namespace std;

int main(){
	Customer *customer1 = new Customer("John Marson", 24, true, new Address("aaaa", "ssss"), 300.50);
	Customer *customer2 = new Customer("Geralt", 15, false, new Address("aaaa", "ssss"), 80.50);
	Customer *customer3 = new Customer("Carol", 30, true, new Address("aaaa", "sssss"), 170.50);

	Movie *movie1 = new Movie("LOTR", 16, true, 50, "10.12.1998");
	Movie *movie2 = new Movie("Harry Potter", 9, false, 99.99, "10.12.1998");
	Movie *movie3 = new Movie("Ben Efsaneyim", 16, true, 20, "10.12.1998");
	Movie *movie4 = new Movie("Narnia Gunlukleri", 9, false, 10, "10.12.1998");

	Store *store = new Store("Market");
	store->AddMovie(movie1);
	store->AddMovie(movie1);
	store->AddMovie(movie2);
	store->AddMovie(movie2);
	store->AddMovie(movie3);
	store->AddMovie(movie3);
	store->AddMovie(movie4);
	store->AddMovie(movie4);
	
	store->PrintCurrentMovies();

	store->PrintMovieCount();

	store->RentMovie(customer1, movie2);
	store->RentMovie(customer2, movie2);
	store->RentMovie(customer3, movie2);
	store->RentMovie(customer1, movie1);
	store->RentMovie(customer2, movie1);
	store->RentMovie(customer3, movie1);
	store->RentMovie(customer1, movie1);
	
	store->PrintMovieCount();
	
	store->RentMovie(customer1, movie3);
	store->RentMovie(customer1, movie4);
	
	store->RentMovie(customer3, movie3);
	store->RentMovie(customer3, movie4);
	
	store->ReturnMovie(customer3, movie3);
	store->ReturnMovie(customer3, movie4);
	
	store->ReturnMovie(customer1, movie2);
	store->ReturnMovie(customer1, movie1);
	
	store->ReturnMovie(customer2, movie3);
	store->ReturnMovie(customer2, movie1);
	
	store->PrintCurrentMovies();

	store->PrintMovieCount();
	store->PrintRevenue();
	return 0;
}
