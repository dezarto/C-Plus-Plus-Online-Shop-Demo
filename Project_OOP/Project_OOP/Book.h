#pragma once
#include<iostream>
#include "Product.h"
#include "Cart.h"
#include "Movie.h"
#include "Music.h"

using namespace std;

class Book : public Product
{
private:
	string publisher;     // storage book publisher
	int ISBN;            // storage book ISBN 
	string dimensions;  // storage book dimensions
	float bookWeight;  // storage book weight
	string writer;    // storage book writer
public:
	// book default constructor
	Book();
	// book parameter constructor
	Book(string, int, string, float, string, string, string, string, string, int, double, int, int);
	// book destructor
	~Book();
	// calculate book discount function
	float calculateDiscount(float);
	// Operator overloading, prints book extra information to the screen
	friend ostream& operator<<(ostream& output, Book& obj);  
	// book display function
	void display();
};

