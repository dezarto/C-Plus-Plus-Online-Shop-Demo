#include "Book.h"
#include "Product.h"

// book default constructor
Book::Book()
{
	publisher = "";
	ISBN = 0;
	dimensions = "";
	bookWeight = 0.f;
}
// book parameter constructor
Book::Book(string _publisher, int _ISBN, string _dimensions, float _bookWeight, string _writer, string _productName, string _language, string _genre, string _category, int _stock, double _price, int _productCode, int _catalogNumber)
	:Product(_productName, _language, _genre, _category, _stock, _price, _productCode, _catalogNumber)
{
	writer = _writer;
	publisher = _publisher;
	ISBN = _ISBN;
	dimensions = _dimensions;
	bookWeight = _bookWeight;
}
// book destructor
Book::~Book()
{
}
// calculate book discount function
float Book::calculateDiscount(float _price)
{
	return _price - (_price * 0.12);
}
// book display function
void Book::display()
{
	Product::display();
}
// Operator overloading, prints book extra information to the screen
ostream& operator<<(ostream& output, Book& obj)
{
	output << "\n\tExtra detail:\n\tPublisher: " << obj.publisher << " -Dimensions: " << obj.dimensions << " -Weight: " << obj.bookWeight << " -The book ISBN: " << obj.ISBN << endl;
	
	return output;
}
