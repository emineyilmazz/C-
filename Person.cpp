/*
    * Person.cpp
    * Metotlar�n i�inin dolduruldu�u, constructor metodunun oldu�u yerdir.
    * ���nc� Proje
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

