#pragma once
#include<iostream>
#include "Product.h"

using namespace std;

class Music : public Product
{
private:
	string artist;      // storage music storage artist
	string format;     // storage music format
	float runTime;    // storage music run time
public:
	// music default constructor
	Music();
	// music parameter constructor
	Music(string, string, float, string, string, string, string, int, double, int, int);
	// music destructor
	~Music();
	// calculate music discount function
	float calculateDiscount(float);
	// Operator overloading, prints music extra information to the screen
	friend ostream& operator<<(ostream& output, Music& obj);
	// music display function
	void display();
};

