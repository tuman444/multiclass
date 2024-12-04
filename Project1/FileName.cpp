#include <iostream>
#include <iomanip>
#include <string>
#include <windows.h>
#include <vector>
#include<fstream>
#include <algorithm>
#include<map>
using namespace std;





class Student
{
public:
	Student(string fio) //конструктор с одним полем 
	{
		this->fio = fio; // доступ через аргумент
	}
	Student(string fio, int age) //конструктор с 2 полями
	{
		this->fio = fio;

		if (age >= 14 && age <= 35) {
			this->age = age;
		}
		else
		{
			this->age = 0;
		}
	}
	void vivod()
	{
		cout << fio << " " << age << endl;
	}

protected:
	string fio;
	int age;
};
class Praktika : public Student
{
public:
	Praktika(string fio, int age, string company, string kurator, int mark) : Student(fio)
	{

		this->company = company; this->kurator = kurator;
		if (mark >= 1 && mark <= 5) { this->mark = mark; }

	}
	void show() { cout << fio << " " << age << " " << company << " " << kurator << " " << mark << endl; }

private:
	string company;
	string kurator;
	int mark;
};

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Praktika ivan("Антонцев Иван Константинович", 15 , "Yandex", "Иванов Андрей", 5);

	ivan.show();


}