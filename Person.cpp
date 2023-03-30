/*
    * Person.cpp
    * Metotların içinin doldurulduğu, constructor metodunun olduğu yerdir.
    * Üçüncü Proje
    * 06.01.2023
    * emine yilmaz  emine.yilmaz@stu.fsm.edu.tr
*/

#include "Person.h"

class Address;

Person::Person(string name, int age, bool isAdult, Address *address){
	this->Name = name;
	this->age = age;
	this->isAdult = isAdult;
	this->address = address;
}

