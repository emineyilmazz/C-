/*
    * Make File
    * C++ dosyalarını,  g++ komutu kullanarak derletmeyi sağlar.
    * Üçüncü Proje
    * 06.01.2023
    * emine yilmaz  emine.yilmaz@stu.fsm.edu.tr
*/

all: Test.cpp Address.cpp Person.cpp Customer.cpp Movie.cpp Store.cpp
	g++ Test.cpp Address.cpp Person.cpp Customer.cpp Movie.cpp Store.cpp -o main