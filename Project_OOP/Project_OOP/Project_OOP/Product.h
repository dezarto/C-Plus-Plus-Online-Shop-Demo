//Base class

#pragma once
#include<iostream>

using namespace std;

class Product
{
private:
	string productName;        // storage product name
	string language;          // storage product language
	string genre;            // storage product genre
	string category;        // storage product category
	int stock;             // storage product stock
	float price;          // storage product price
	int productCode;     // storage product code
	int catalogNumber;  // storage catalog number to understand the product have which category, Book 1, Music 2, Movie 3
public:
	// product default constructor
	Product();
	// product parameter constructor
	Product(string, string, string, string, int, double, int, int);
	// product destructor
	~Product();
	// return product price
	float getPrice();
	// return product stock
	int getStock();
	// return product catalog number
	int getCatalogNumber();
	// return product update stock
	int getUpdateStock();
	// return product update price
	float getUpdatePrice();
	// this function updates the stock
	void setUpdateStock(int);
	// this function updates the price
	void setUpdatePrice(float);
	// pure virtual function, calculate product discound
	virtual float calculateDiscount(float) = 0;
	// cart display function
	virtual void display();
};

