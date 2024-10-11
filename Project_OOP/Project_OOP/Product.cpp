#include "Product.h"

// product default constructor
Product::Product()
{
	productName = "";
	language = "";
	genre = "";
	category = "";
	stock = 0;
	price = 0;
	productCode = 0;
}
// product parameter constructor
Product::Product(string _productName, string _language, string _genre, string _category, int _stock, double _price, int _productCode, int _catalogNumber)
{
	productName = _productName;
	language = _language;
	genre = _genre;
	category = _category;
	stock = _stock;
	price = _price;
	productCode = _productCode;
	catalogNumber = _catalogNumber;
}
// product destructor
Product::~Product()
{
}
// return product price
float Product::getPrice()
{
	return price;
}
// return product stock
int Product::getStock()
{
	return stock;
}
// return product catalog number
int Product::getCatalogNumber()
{
	return catalogNumber;
}
// return product update stock
int Product::getUpdateStock()
{
	return stock;
}
// return product update price
float Product::getUpdatePrice()
{
	return price;
}
// this function updates the stock
void Product::setUpdateStock(int _stock)
{
	stock = _stock;
}
// this function updates the price
void Product::setUpdatePrice(float _price)
{
	price = _price;
}
// cart display function
void Product::display()
{
	cout << "\n\tProduct name:" << productName << endl;
	cout << "\tLanguage: " << language << endl;
	cout << "\tGenre: " << genre << endl;
	cout << "\tCategory: " << category << endl;
	cout << "\tProduct code: " << productCode << endl;
	cout << "\n\tStock: " << stock << endl;
	cout << "\tPrice: " << price << endl << endl;;
}
