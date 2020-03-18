/*Задание 2, Хабибуллин Илнур Ильдарович 05-901
Создать класс Triangle, разработав следующие элементы класса: Поля: int a, b, c;
Конструктор, позволяющий создать экземпляр класса с заданными длинами сторон.
Методы, позволяющие: вывести длины сторон треугольника на экран; рассчитать периметр
треугольника; рассчитать площадь треугольника. Свойства: позволяющее получить-
установить длины сторон треугольника (доступное для чтения и записи); позволяющее
установить, существует ли треугольник с данными длинами сторон (доступное только для*/

#include "pch.h"
#include <iostream>
using namespace std;
class Triangle
{
private:
	int a, b, c;
public:
	Triangle(int AB, int BC, int AC)
	{
		a = AB;
		b = BC;
		c = AC;
	}
			int getAB() 
			{
				return a;
			}
			int getBC()
			{ 
				return b; 
			}
			int getAC() 
			{ 
				return c; 
			}
			void SetAB(int AB)
			{
				a = AB;
			}
			void SetBC(int BC) 
			{
				b = BC;
			}
			void setAC(int AC) 
			{
				c = AC;
			}
	void print() 
	{
		cout << "AB=" <<a<<"\n" <<"BC=" <<b<<"\n"  <<"AC=" <<c<<"\n" ;

	}
	void Perimeter() 
	{
		cout <<"Периметр="<< a+b+c<<"\n";
	}
	void Area() 
	{
		int p = (a + b + c) / 2;
		cout<<"Площадь=" << sqrt(p*(p - a)*(p - c)*(p - b)) <<"\n";
	}
	void isExist()
	{
			if (a + b > c && a + c > b && b + c > a)
				cout <<"Triangle exist" ;
			else
				cout << "Triangle not exist";
	}

};

int main()
{
	Triangle ABC(13, 12,5 );
	setlocale(LC_ALL, "ru");
	ABC.print();
	ABC.Perimeter();
	ABC.Area();
	ABC.isExist();
	return 0;
}
