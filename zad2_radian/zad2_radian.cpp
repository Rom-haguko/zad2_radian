// zad2_radian.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <cmath>
#include <iostream>


using namespace std;
void main()
{
    const double Pi = 3.141592653589793;
    setlocale(LC_ALL, "Rus");
    double radian;
    cout << "Введите радианную меру:\n";
    cin >> radian;
    double degreesZ, degreesZ1;
    degreesZ1 = radian * (180 / Pi);
    degreesZ = radian * (180 / Pi) - floor(radian * (180 / Pi));
    double minute;
    minute = degreesZ * 60;
    double minuteZ;
    minuteZ = minute - floor(minute);
    double sec;
    sec = minuteZ * 60;
    
    
    cout << "Ответ:" << endl;
    cout << "Градусы: " << degreesZ1 << "\nМинуты: " << minute<< "\nСекунды: " << sec << endl;
}











