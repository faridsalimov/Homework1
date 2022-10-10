#include <iostream>

using namespace std;

// ====================================================| HOMEWORK 1 |==================================================== //

// Task 1:

//class Fraction {
//private:
//public:
//	int numerator; // suret
//	int denominator; // mexrec
//
//	Fraction(int num, int don) { 
//		numerator = num; 
//		denominator = don; 
//	}
//
//	Fraction Multiply(const Fraction& other) {
//		int num = this->numerator * other.numerator;
//		int den = this->denominator * other.denominator;
//		return Fraction(num, den);
//	}
//
//	Fraction Add(const Fraction& other) {
//		int num = this->numerator + other.numerator;
//		int den = this->denominator + other.denominator;
//		return Fraction(num, den);
//	}
//
//	Fraction Minus(const Fraction& other) {
//		int num = this->numerator - other.numerator;
//		int den = this->denominator - other.denominator;
//		return Fraction(num, den);
//	}
//
//	Fraction Divide(const Fraction& other) {
//		int num = this->numerator / other.numerator;
//		int den = this->denominator / other.denominator;
//		return Fraction(num, den);
//	}
//
//	int Simplify(const Fraction& other) {
//		// -
//	}
//};
//
//void main() {
//	Fraction f(2, 7);
//	Fraction frac(4, 7);
//
//	Fraction result = f.Multiply(frac);
//	//Fraction result = f.Add(frac);
//	//Fraction result = f.Minus(frac);
//	//Fraction result = f.Divide(frac);
//
//	cout << result.numerator << " / " << result.denominator << endl;
//}


//Task 2:
//Point class yazilsin
//x, y fieldleri olsun ve her bir field uchun getter setterler yazilsin.
//constructor parametric, default
//Print method - u yazilsin

//class Point {
//	int x;
//	int y;
//
//public:
//	int GetX() { return x; }
//	int GetY() { return y; }
//
//	void SetX(int arg) { x = arg; }
//	void SetY(int arg) { y = arg; }
//
//	Point() { x = 0; y = 0; }
//	Point(int x, int y) { 
//		this->x = x;
//		this->y = y;
//	}
//
//	void Print() {
//		cout << "X: " << x << endl;
//		cout << "Y: " << y << endl;
//	}
//};
//
//void main() {
//	Point p1;
//	Point p2(1, 5);
//
//	p1.Print();
//	p2.Print();
//}


// ====================================================| HOMEWORK 2 |==================================================== //

// Task 1:

//class Counter {
//public:
//	int currentData;
//	int min;
//	int max;
//
//	Counter(int argMin, int argMax) {
//		min = argMin;
//		max = argMax;
//		currentData = min;
//	}
//
//	void SetCurrent(int x) { currentData = x < max ? x : min; }
//	int GetCurrent() { return currentData; }
//
//	void Increment() { SetCurrent(currentData + 1); }
//};
//
//void main() {
//	Counter c(0, 100);
//	while (true)
//	{
//		c.Increment();
//		cout << c.GetCurrent() << endl;
//	}
//}


// Task 2
// Tələbələr qrupunu əks etdirən class təyin edin.
// Student : name, surname, age, group_no, speciality, city
// Print method - u yazilsin.

//class Student {
//public:
//	char* name = nullptr;
//	char* surname = nullptr;
//	int age = 0;
//	int group_no = 0;
//	char* speciality = nullptr;
//	char* city;
//
//	void SetName(const char* str) {
//		delete[] name;
//		name = new char[strlen(str) + 1];
//		strcpy_s(name, strlen(str) + 1, str);
//	}
//
//	void SetSurname(const char* str) {
//		delete[] surname;
//		surname = new char[strlen(str) + 1];
//		strcpy_s(surname, strlen(str) + 1, str);
//	}
//
//	void SetAge(int value) { age = 18 < value ? value : 18; }
//	void SetGroupNo(int value) { group_no = 0 < value ? value : 0; }
//
//	void SetSpeciality(const char* str) {
//		delete[] speciality;
//		speciality = new char[strlen(str) + 1];
//		strcpy_s(speciality, strlen(str) + 1, str);
//	}
//
//	void SetCity(const char* str) {
//		delete[] city;
//		city = new char[strlen(str) + 1];
//		strcpy_s(city, strlen(str) + 1, str);
//	}
//
//	Student() {};
//
//	Student(const char* name, const char* sn, int age, int group_no, const char* speciality, const char* city) {
//		SetName(name);
//		SetSurname(sn);
//		SetAge(age);
//		SetGroupNo(group_no);
//		SetSpeciality(speciality);
//		SetCity(city);
//	}
//
//	Student(const Student& student) {
//		SetName(student.name);
//		SetSurname(student.surname);
//		SetAge(student.age);
//		SetGroupNo(student.group_no);
//		SetSpeciality(student.speciality);
//		SetCity(student.city);
//	}
//
//	void Print() {
//		cout << "==============================" << endl;
//		cout << "Name: " << name << endl;
//		cout << "Surname: " << surname << endl;
//		cout << "Age: " << age << endl;
//		cout << "Group NO: " << group_no << endl;
//		cout << "Speciality: " << speciality << endl;
//		cout << "City: " << city << endl;
//	}
//
//	~Student() {
//		delete[] name;
//		delete[] surname;
//		delete[] city;
//		delete[] speciality;
//	}
//};
//
//void main() {
//	Student st1("Ferid", "Selimov", 20, 1224, "Software Engineer", "Baku");
//	st1.Print();
//
//	Student st2("Rinat", "Qedimov", 19, 1285, "Hardware Engineer", "Gence");
//	st2.Print();
//
//	Student st3("Fuad", "Selimov", 15, -1, "N/A", "Xirdalan");
//	st3.Print();
//}