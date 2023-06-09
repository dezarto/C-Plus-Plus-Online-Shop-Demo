#pragma once
#include<iostream>
#include "Product.h"
#include "Cart.h"

using namespace std;

class Movie : public Product
{
private:
	string directors[2]; //limited to 2 people
	string starring[3]; //limited to 3 people
	string subtitles;  // storage movies subtitles
	string subject;   // storage movies subject
	string maker;    // storage movies maker
	float runTime;  // storage movies runtime
	int yearOfConstruction;  // movies year of construction
public:
	// Movie default constructor
	Movie();
	// Movie parameter constructor
	Movie(string [], string [], string, string, string, float, int, string, string, string, string, int, double, int, int);
	// Movie destructor
	~Movie();
	// calculate movie discount function
	float calculateDiscount(float);
	// Operator overloading, prints movie extra information to the screen
	friend ostream& operator<<(ostream& output, Movie& obj);
	// movie display function
	void display();
};

