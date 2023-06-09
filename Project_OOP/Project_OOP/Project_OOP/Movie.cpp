#include "Movie.h"

// Movie default constructor
Movie::Movie()
{
	for (int i = 0; i < 2; i++)
	{
		directors[i] = "";
	}
	for (int i = 0; i < 3; i++)
	{
		starring[i] = "";
	}

	subtitles = "";
	subject = "";
	maker = "";
	runTime = 0.f;
	yearOfConstruction = 0;
}
// Movie parameter constructor
Movie::Movie(string _directors[], string _starring[], string _subtitles, string _subject, string _maker, float _runTime, int _yearOfConstruction, string _productName, string _language, string _genre, string _category, int _stock, double _price, int _productCode, int _catalogNumber)
	:Product(_productName, _language, _genre, _category, _stock, _price, _productCode, _catalogNumber)
{
	
	for (int i = 0; i < 2; i++)
	{
		directors[i] = _directors[i];
	}
	for (int i = 0; i < 3; i++)
	{
		starring[i] = _starring[i];
	}

	subtitles = _subtitles;
	subject = _subject;
	maker = _maker;
	runTime = _runTime;
	yearOfConstruction = _yearOfConstruction;
}
// Movie destructor
Movie::~Movie()
{
}
// calculate movie discount function
float Movie::calculateDiscount(float _price)
{
	return _price - (_price * 0.05);
}
// movie display function
void Movie::display()
{
	Product::display();

	for (int i = 0; i < 2; i++)
	{
		// checks if the directors array is full
		if (directors[i] == "") {

		}
		else
			cout << "\t-Directors " << i + 1 << " is: " << directors[i] << " ";
	}
	
	for (int i = 0; i < 3; i++)
	{
		// checks if the starring array is full
		if (starring[i] == "") {

		}
		else
			cout << "\t-Starring " << i + 1 << " is: " << starring[i] << " ";
	}
}
// Operator overloading, prints movie extra information to the screen
ostream& operator<<(ostream& output, Movie& obj)
{
	output << "\n\tExtra detail:\n\tSubtitles: " << obj.subtitles <<"\tSubject: " << obj.subject << "\tMaker: " << obj.maker << "\tRun Time: " << obj.runTime << " minutes" << "\tYear Of Construction: " << obj.yearOfConstruction << endl;
	
	return output;
}