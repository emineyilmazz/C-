/*
    * Customer.cpp
    * Metotlarýn içinin doldurulduðu, constructor metodunun olduðu yerdir.
    * Üçüncü Proje
    * 06.01.2023
    * emine yilmaz  emine.yilmaz@stu.fsm.edu.tr
*/

#include "Customer.h"

Customer::Customer(string name, int age, bool isAdult, Address* address, float balance) : Person(name, age, isAdult, address){
	this->balance = balance;
	this->rentAmount = 0;
}

