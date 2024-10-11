#include "Music.h"

// music default constructor
Music::Music()
{
	artist = "";
	format = "";
	runTime = 0.f;
}
// music parameter constructor
Music::Music(string _artist, string _format, float _runTime, string _productName, string _language, string _genre, string _category, int _stock, double _price, int _productCode, int _catalogNumber)
	:Product(_productName, _language, _genre, _category, _stock, _price, _productCode, _catalogNumber)
{
	artist = _artist;
	format = _format;
	runTime = _runTime;
}
// music destructor
Music::~Music()
{
}
// calculate music discount function
float Music::calculateDiscount(float _price)
{
	return _price - (_price * 0.15);
}
// music display function
void Music::display()
{
	Product::display();
}
// Operator overloading, prints music extra information to the screen
ostream& operator<<(ostream& output, Music& obj)
{
	output << "\n\tExtra detail:\n\tArtist: " << obj.artist << "\tFormat: " << obj.format << "\tRun time: " << obj.runTime << " minutes" << endl;
	
	return output;
}
