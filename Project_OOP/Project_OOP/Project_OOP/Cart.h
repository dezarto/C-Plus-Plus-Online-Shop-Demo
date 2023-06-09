#pragma once
#include<iostream>
#include "Product.h"

using namespace std;

class Cart
{
private:
	Product *productList[5];   // list of type product
	int size;                 // number of items in the cart
	float totalPrice;        // storing the total cart price
public:
	// cart default constructor
	Cart();
	// cart parameter constructor
	Cart(int, float);
	// cart destructor
	~Cart();
	// return number of items size
	int getSize();
	// this function, checking if the card is empty
	bool CartIsEmpty();
	// this function, adding new products to the card
	void addNewProduct(Product*);
	// this function, remove items from card
	void removeProduct(int);
	// this function, increases the stock of the product deleted from the cart
	int addStock(int);
	// an example function
	friend bool operator==(Product& obj1, int& obj2);
	// cart display function
	void display();
};