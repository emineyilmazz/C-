/*
    * Movie.cpp
    * Metotların içinin doldurulduğu, constructor metodunun olduğu yerdir.
    * Üçüncü Proje
    * 06.01.2023
    * emine yilmaz  emine.yilmaz@stu.fsm.edu.tr
*/

#include "Movie.h"

Movie::Movie(string title, int ageLimit, bool isForAdult, float price, string outDate){
	this->title = title;
	this->ageLimit = ageLimit;
	this->isForAdult = isForAdult;
	this->price = price;
	this->outDate = outDate;
}

