
#include<iostream>
#include "Book.h"
#include "Cart.h"
#include "Movie.h"
#include "Music.h"
#include "Product.h"

using namespace std;

int main() {
	// defines an object of type cart
	Cart cart;
	// some names are defined of type string and int
	string magicTouch;
	int entered, enteredcustomer, enteredbook,
		enterAddBookIntex, BookEnterIndexMoreDetail, enteredMovie,
		MovieEnterIndexMoreDetail, enteredMusic, MusicEnterIndexMoreDetail,
		enterAddMovieIntex, enterAddMusicIntex, enteredAdmin, updateNumber,
		AdminUpdatePrice, AdminUpdateStock, AdminUpdateCost, AdminUpdateStockSS,
		removeProduct, removeProductIndex, _a;
	// It is defined to arrays so that empty ones cannot be printed while printing to the screen.
	// directors maximum limit 2
	string arrDirector0[2] = { "Lana Wachowski", "Lilly Wachowski" };
	string arrDirector1[2] = { "Christopher Nolan" };
	string arrDirector2[2] = { "Robert Zemeckis" };
	string arrDirector3[2] = { "Christopher Nolan" };
	string arrDirector4[2] = { "Frank Darabont" };
	// starring maximum limit 3
	string arrStarring0[3] = { "Keanu Reeves","Laurence Fishburne","Carrie-Anne Moss" };
	string arrStarring1[3] = { "Leonardo DiCaprio", "Joseph Gordon-Levitt","Elliot Page" };
	string arrStarring2[3] = { "Gary Sinise","Robin Wright","Tom Hanks" };
	string arrStarring3[3] = { "Jessica Chastain","Anne Hathaway","Matthew McConaughey" };
	string arrStarring4[3] = { "Bob Gunton","Morgan Freeman" };
	// 5 parameter constructors are defined in movie arry type
	Movie movie[5] = { Movie(arrDirector0, arrStarring0, "Turkish", "NULL", "Joel Silver", 2.16, 1999, "productName", "English", "Movie", "category", 10,10,125478,3),
					  Movie(arrDirector1, arrStarring1,"Turkish","NULL","Christopher Nolan", 2.28, 2010, "productName", "English", "Movie", "category", 10,10,125478,3),
					  Movie(arrDirector2, arrStarring2,"Turkish","NULL","Eric Roth", 2.22, 1994, "productName", "English", "Movie", "category", 10,10,125478,3),
					  Movie(arrDirector3, arrStarring3,"Turkish","NULL","Christopher Nolan", 2.49, 2014, "productName", "English", "Movie", "category", 10,10,125478,3),
					  Movie(arrDirector4, arrStarring4,"Turkish","NULL","Niki Marvin", 2.22, 1994, "productName", "English", "Movie", "category", 10,10,125478,3)
	};
	// 5 parameter constructors are defined in book arry type
	Book books[5] = {
		Book("Signet Classic (January 1, 1961)", 9780451524935, "4.19x0.85x7.5 inches", 7.2, "George Orwell", "1984","English","NULL","Book",0,139.42, 451524934, 1),
		Book("Penguin Books (1 June 1982)", 6059702651, "11.1x1.5x18.1 inches", 7.5, "Victor Hugo", "Les Miserables","English","NULL","Book",24,366.24, 140444300, 1),
		Book("Penguin Classics; Updated and REV ed. edition (May 27, 2003)", 141439602, "5.09x0.92x7.76 inches", 13.1, "Charles Dickens", "A Tale of Two Cities (Penguin Classics)","English","NULL","Book",8,44.90, 9780141439600, 1),
		Book("Indigo Kitap - Edebiyat Dizisi", 9786059144902, "13x20 inches", 7.5, "Lev Nikolayeviç Tolstoy", "İnsan Neyle Yasar?","Turkish","NULL","Book",8,12, 9786059144902, 1),
		Book("Turkuvaz Kitap", 984115261651, "12,5x20,5 inches", 11.3, "Fyodor Mihayloviç Dostoyevski", "Suc ve Ceza","Turkish","NULL","Book", 4, 84, 6548445315, 1)
	};
	// 5 parameter constructors are defined in music arry type
	Music music[5] = {
		Music("Ed Sheeran", "Pop", 4,"Shape of You","English","NULL","Music",20, 25, 11111111, 2),
		Music("The Weeknd", "Pop", 4,"Blinding Lights","English","NULL","Music", 18, 35, 11111111, 2),
		Music("Ed Sheeran", "Pop", 4.39,"Perfect","English","NULL","Music", 14, 21, 11111111, 2),
		Music("Imagine Dragons", "Pop", 3.36,"Believer","English","NULL","Music", 12, 28, 11111111, 2),
		Music("TONES AND I", "Pop", 3.56,"Dance Monkey","English","NULL","Music", 35, 19, 11111111, 2)
	};
	
	Music* musicPtr[5];    // pointer array of music type
	Book* bookPtr[5];     // pointer array of book type
	Movie* moviePtr[5];  // pointer array of movie type
	// addresses are pointed to parameterized constructors
	for (int i = 0; i < 5; i++)
	{
		bookPtr[i] = &books[i];
	}

	for (int i = 0; i < 5; i++)
	{
		moviePtr[i] = &movie[i];
	}

	for (int i = 0; i < 5; i++)
	{
		musicPtr[i] = &music[i];
	}
	
	do  // do while is used to provide a continuous loop
	{
		

		cout << "\n\n\n\t***********************************" << endl;
		cout << "\t** Welcome to Flare online shop. **" << endl;
		cout << "\t***********************************" << endl;
		cout << "\n\tAdmin: *\n\tCustomer: C\n\tExit: E\n\n\tPlease do the magic touch. \n\tIf you do not understand this, \n\tyou can continue by pressing enter: ";
		cin >> magicTouch;
		
		// customer sign in character "C"
		if (magicTouch == "C") {
			
			
			cout << endl << endl;
			cout << "\t***********************************" << endl;
			cout << "\t****** Welcome customer MENU ******" << endl;
			cout << "\t***********************************" << endl;
		
			do  // do while is used to provide a continuous loop
			{
				cout << "\t What would you like to do?" << endl << endl;
				cout << "\t1. View Cart" << endl;
				cout << "\t2. Select Category" << endl;
				cout << "\t3. Exit\n" << endl;
				cout << "\tEnter a number: ";
				cin >> entered;
				// Exception Handling, this is just an example and it can work if you want this function
				/*try
				{
					if (entered < 0 || entered > 3) {
						throw entered;
					}
				}
				catch (int entered)
				{
					cout << "The entered value must be between 1 and 3. You tried to entered: " << entered << endl;
				}*/

				switch (entered)
				{
				case 1:
					do  // do while is used to provide a continuous loop
					{

					
						cout << "\t***********************************" << endl;
						cout << "\t************ Your Cart ************" << endl;
						cout << "\t***********************************\n\n" << endl;

						cart.display();  // prints the cart to the screen

						cout << "\n\t1. Remove product?" << endl;
						cout << "\n\t2. <- Go back\n" << endl;
						cout << "\tEnter a number: ";
						cin >> removeProduct;

						switch (removeProduct)
						{
						case 1:
							cout << "\n\t1. Which one do you want remove?: ";
							cin >> removeProductIndex;
							// sends the entered value to the remove product function
							cart.removeProduct(removeProductIndex);
							break;
						case 2:
							break;
						default:
							cout << "\n\tYou entered an invalid value.\n" << endl;
							break;
						}
					} while (removeProduct != 2);  // If the entered value is 2, the menu goes back
					break;
				case 2:
					do  // do while is used to provide a continuous loop
					{
						cout << "\n\t***********************************" << endl;
						cout << "\tWhich category do you want ?" << endl;
						cout << "\n\t1. Book" << endl;
						cout << "\t2. Movie" << endl;
						cout << "\t3. Music" << endl;
						cout << "\t4. <- Go back\n" << endl;
						cout << "\tEnter a number: ";
						cin >> enteredcustomer;
						cout << "\t*****************" << endl;
						switch (enteredcustomer)
						{
						case 1:
							do  // do while is used to provide a continuous loop
							{
								cout << "\n\t***********************************" << endl;
								cout << "\t**********   Book List   **********" << endl;
								cout << "\t***********************************" << endl;
								// this loop prints the books to the screen
								for (int i = 0; i < 5; i++)
								{
									cout << "\n\t*************";
									cout << "\n\tBook index: " << i + 1 << endl;
									cout << "\t*************";
									books[i].display();
									cout << "\t******************\n";
								}
								cout << "\n\t***********************************" << endl;
								do  // do while is used to provide a continuous loop
								{
									cout << "\n\tWhat do you want to do?" << endl;
									cout << "\n\t1. Add cart" << endl;
									cout << "\t2. More detail" << endl;
									cout << "\t3. <- Go back" << endl;
									cout << "\tEnter a number: ";
									cin >> enteredbook;
									switch (enteredbook)
									{
									case 1:
										cout << "\n\tWhich one do you want to add?" << endl;
										cout << "\tEnter a index number: ";
										cin >> enterAddBookIntex;
										// _a stores the stock number
										_a = books[enterAddBookIntex - 1].getStock();
										// This selection checks the occupancy and stock of the cart
										if (books[enterAddBookIntex - 1].getStock() == 0 || cart.getSize() == 5) {
											if (books[enterAddBookIntex - 1].getStock() == 0) {
												cout << "\n\tSorry, not enough stock.\n" << endl;
											}
											else
												cout << "\n\tYour cart is full.\n" << endl;
										}
										else {
											_a--;  // reduces stock by 1
											// replaces the stock with the new _a value
											books[enterAddBookIntex - 1].setUpdateStock((_a));
											// values are passed to the function to calculate the discounted price of the book
											books->calculateDiscount(books[enterAddBookIntex - 1].getPrice());
											// used to add the selected book to the cart
											cart.addNewProduct(bookPtr[enterAddBookIntex - 1]);
										}
										break;
									case 2:
										cout << "\n\tWhich one do you want to more detail?" << endl;
										cout << "\tEnter a number: ";
										cin >> BookEnterIndexMoreDetail;

										cout << "\n\tMore detailed book index: " << BookEnterIndexMoreDetail << endl << endl;
										cout << books[BookEnterIndexMoreDetail - 1];
										// prints the product to be detailed on the screen
										books[BookEnterIndexMoreDetail - 1].display();
										break;
									case 3:
										break;
									default:
										cout << "\n\tInvalid value.\n" << endl;
										break;
									}
								} while (enteredbook != 3); // If the entered value is 3, the menu goes back
								break;
							} while (enteredbook != 3); // If the entered value is 3, the menu goes back
							break;
						case 2:
							do  // do while is used to provide a continuous loop
							{
								cout << "\n\t***********************************" << endl;
								cout << "\t**********   Movie List  **********" << endl;
								cout << "\t***********************************" << endl;
								// this loop prints the movies to the screen
								for (int i = 0; i < 5; i++)
								{
									cout << "\n\t*************";
									cout << "\n\tMovie index: " << i + 1 << endl;
									cout << "\t*************";
									movie[i].display();
									cout << "\n\t******************\n";
								}
								cout << "\n\t***********************************" << endl;
								do  // do while is used to provide a continuous loop
								{
									cout << "\n\tWhat do you want to do?" << endl;
									cout << "\n\t1. Add cart" << endl;
									cout << "\t2. More detail" << endl;
									cout << "\t3. <- Go back" << endl;
									cout << "\tEnter a number: ";
									cin >> enteredMovie;
									switch (enteredMovie)
									{
									case 1:
										cout << "\n\tWhich one do you want to add?" << endl;
										cout << "\tEnter a index number: ";
										cin >> enterAddMovieIntex;
										// _a stores the stock number
										_a = movie[enterAddMovieIntex - 1].getStock();
										// This selection checks the occupancy and stock of the cart
										if (movie[enterAddMovieIntex - 1].getStock() == 0 || cart.getSize() == 5) {
											if (books[enterAddBookIntex].getStock() == 0) {
												cout << "\n\tSorry, not enough stock.\n" << endl;
											}
											else
												cout << "\n\tYour cart is full.\n" << endl;
										}
										else {
											_a--;  // reduces stock by 1
											// replaces the stock with the new _a value
											movie[enterAddMovieIntex - 1].setUpdateStock(_a);
											// used to add the selected movie to the cart
											cart.addNewProduct(moviePtr[enterAddMovieIntex - 1]);
										}
										break;
									case 2:
										cout << "\n\tWhich one do you want to more detail?" << endl;
										cout << "\tEnter a number: ";
										cin >> MovieEnterIndexMoreDetail;

										cout << "\n\tMore detailed movie index: " << MovieEnterIndexMoreDetail << endl << endl;
										cout << movie[MovieEnterIndexMoreDetail - 1];
										// prints the product to be detailed on the screen
										movie[MovieEnterIndexMoreDetail - 1].display();
										break;
									case 3:
										break;
									default:
										cout << "\n\tYou entered an invalid value.\n" << endl;
										break;
									}
								} while (enteredMovie != 3); // If the entered value is 3, the menu goes back
								break;
							} while (enteredMovie != 3); // If the entered value is 3, the menu goes back
							break;
						case 3:
							do  // do while is used to provide a continuous loop
							{
								cout << "\n\t***********************************" << endl;
								cout << "\t**********   Music List  **********" << endl;
								cout << "\t***********************************" << endl;
								// this loop prints the music to the screen
								for (int i = 0; i < 5; i++)
								{
									cout << "\n\t*************";
									cout << "\n\tMusic index: " << i + 1 << endl;
									cout << "\t*************";
									music[i].display();
									cout << "\t******************\n";
								}
								cout << "\n\t***********************************" << endl;
								do  // do while is used to provide a continuous loop
								{
									cout << "\n\tWhat do you want to do?" << endl;
									cout << "\n\t1. Add cart" << endl;
									cout << "\t2. More detail" << endl;
									cout << "\t3. <- Go back" << endl;
									cout << "\tEnter a number: ";
									cin >> enteredMusic;
									switch (enteredMusic)
									{
									case 1:
										cout << "\n\tWhich one do you want to add?" << endl;
										cout << "\tEnter a index number: ";
										cin >> enterAddMusicIntex;
										// _a stores the stock number
										_a = music[enterAddMusicIntex - 1].getStock();
										// This selection checks the occupancy and stock of the cart
										if (music[enterAddMusicIntex - 1].getStock() == 0 || cart.getSize() == 5) {
											if (books[enterAddBookIntex - 1].getStock() == 0) {
												cout << "\n\tSorry, not enough stock.\n" << endl;
											}
											else
												cout << "\n\tYour cart is full.\n" << endl;
										}
										else {
											_a--;  // reduces stock by 1
											// replaces the stock with the new _a value
											music[enterAddMusicIntex - 1].setUpdateStock(_a);
											// used to add the selected music to the cart
											cart.addNewProduct(musicPtr[enterAddMusicIntex - 1]);
										}
										break;
									case 2:
										cout << "\n\tWhich one do you want to more detail?" << endl;
										cout << "\tEnter a number: ";
										cin >> MusicEnterIndexMoreDetail;

										cout << "\n\tMore detailed music index: " << MusicEnterIndexMoreDetail << endl << endl;
										cout << music[MusicEnterIndexMoreDetail - 1];
										// prints the product to be detailed on the screen
										music[MusicEnterIndexMoreDetail - 1].display();
										break;
									case 3:
										break;
									default:
										cout << "\n\tYou entered an invalid value.\n" << endl;
										break;
									}
								} while (enteredMusic != 3); // If the entered value is 3, the menu goes back
								break;
							} while (enteredMusic != 3); // If the entered value is 3, the menu goes back
							break;
						case 4:
							break;
						default:
							cout << "\n\tYou entered an invalid value.\n" << endl;
							break;
						}
					} while (enteredcustomer != 4); // If the entered value is 4, the menu goes back
					break;
				case 3:
					cout << "\n\n" << endl;
					cout << "\t***********************************" << endl;
					cout << "\t**\t See you soon :)\t **" << endl;
					cout << "\t**\t flareshop.com  \t **" << endl;
					cout << "\t***********************************\n" << endl;
				
					cout << "\t\t   *****       *****" << "\n\t\t *********   ********* " << "\n\t\t*********** *********** " << "\n\t\t*********************** " << "\n\t\t*********************** " << "\n\t\t ********************* " << "\n\t\t  ******************* " << "\n\t\t   *****************" << "\n\t\t    *************** " << "\n\t\t      *********** " << "\n\t\t        ******* " << "\n\t\t          *** " << "\n\t\t           *" << endl;
					break;
				default:
					cout << "\n\tYou entered an invalid value.\n" << endl;
					break;
				}
			} while (entered != 3); // If the entered value is 3, the menu goes back
		}
		else if (magicTouch == "*") {
			cout << endl << endl;
			cout << "\t***********************************" << endl;
			cout << "\t******* Welcome Admin MENU ********" << endl;
			cout << "\t***********************************" << endl << endl;

			do  // do while is used to provide a continuous loop
			{
				cout << "\n\t What would you like to do?" << endl << endl;
				cout << "\t1. Update product information" << endl;
				cout << "\t2. Exit\n" << endl;
				cout << "\tEnter a number: ";
				cin >> enteredAdmin;
		
				switch (enteredAdmin)
				{
				case 1:
					do  // do while is used to provide a continuous loop
					{
						cout << "\t***********************************" << endl;
						cout << "\tWhich category product do you want to update ?" << endl;
						cout << "\n\t1. Book" << endl;
						cout << "\t2. Movie" << endl;
						cout << "\t3. Music" << endl;
						cout << "\t4. <- Go back\n" << endl;
						cout << "\tEnter a number: ";
						cin >> updateNumber;
						switch (updateNumber)
						{
						case 1:
							do  // do while is used to provide a continuous loop
							{
								cout << "\n\t***********************************" << endl;
								cout << "\t**********   Book List   **********" << endl;
								cout << "\t***********************************" << endl;
								// this loop prints the books to the screen
								for (int i = 0; i < 5; i++)
								{
									cout << "\n\tBook index: " << i << endl;
									books[i].display();
								}
								cout << "\n\t***********************************" << endl;
								do  // do while is used to provide a continuous loop
								{
									cout << "\n\tWhat do you want to do?" << endl;
									cout << "\n\t1. Update price" << endl;
									cout << "\t2. Update stock" << endl;
									cout << "\t3. <- Go back" << endl;
									cout << "\tEnter a number: ";
									cin >> enteredbook;
									switch (enteredbook)
									{
									case 1:
										cout << "\n\tWhich one do you want to update price?" << endl;
										cout << "\tEnter a number: ";
										cin >> AdminUpdatePrice;
										cout << "\n\tHow much does it cost?" << endl;
										cout << "\tEnter a number: ";
										cin >> AdminUpdateCost;
										// sends value to function to update product price
										books[AdminUpdatePrice].setUpdatePrice(AdminUpdateCost);
										//books[AdminUpdatePrice].display();  // prints the product to the screen after the update
										break;
									case 2:
										cout << "\n\tWhich one do you want to update stock?" << endl;
										cout << "\tEnter a number: ";
										cin >> AdminUpdateStock;
										cout << "\n\tHow much does it stock?" << endl;
										cout << "\tEnter a number: ";
										cin >> AdminUpdateStockSS;
										// sends value to function to update product quantity
										books[AdminUpdateStock].setUpdateStock(AdminUpdateStockSS);
										break;
									case 3:
										break;
									default:
										cout << "\n\tYou entered an invalid value.\n" << endl;
										break;
									}
								} while (enteredbook != 3); // If the entered value is 3, the menu goes back
								break;
							} while (enteredbook != 3); // If the entered value is 3, the menu goes back
							break;
						case 2:
							do  // do while is used to provide a continuous loop
							{
								cout << "\n\t***********************************" << endl;
								cout << "\t**********   Movie List  **********" << endl;
								cout << "\t***********************************" << endl;
								// this loop prints the movies to the screen
								for (int i = 0; i < 5; i++)
								{
									cout << "\n\tMovie index: " << i << endl;
									movie[i].display();
								}
								cout << "\n\t***********************************" << endl;
								do  // do while is used to provide a continuous loop
								{
									cout << "\n\tWhat do you want to do?" << endl;
									cout << "\n\t1. Update price" << endl;
									cout << "\t2. Update stock" << endl;
									cout << "\t3. <- Go back" << endl;
									cout << "\tEnter a number: ";
									cin >> enteredbook;
									switch (enteredbook)
									{
									case 1:
										cout << "\n\tWhich one do you want to update price?" << endl;
										cout << "\tEnter a number: ";
										cin >> AdminUpdatePrice;
										cout << "\n\tHow much does it cost?" << endl;
										cout << "\tEnter a number: ";
										cin >> AdminUpdateCost;
										// sends value to function to update product price
										movie[AdminUpdatePrice].setUpdatePrice(AdminUpdateCost);
										//movie[AdminUpdatePrice].display();  // prints the product to the screen after the update
										break;
									case 2:
										cout << "\n\tWhich one do you want to update stock?" << endl;
										cout << "\tEnter a number: ";
										cin >> AdminUpdateStock;
										cout << "\n\tHow much does it stock?" << endl;
										cout << "\tEnter a number: ";
										cin >> AdminUpdateStockSS;
										// sends value to function to update product quantity
										movie[AdminUpdateStock].setUpdateStock(AdminUpdateStockSS);
										break;
									case 3:
										break;
									default:
										cout << "\n\tInvalid value.\n" << endl;
										break;
									}
								} while (enteredbook != 3); // If the entered value is 3, the menu goes back
								break;
							} while (enteredMovie != 3); // If the entered value is 3, the menu goes back
							break;
						case 3:
							do  // do while is used to provide a continuous loop
							{
								cout << "\n\t***********************************" << endl;
								cout << "\t**********   Music List  **********" << endl;
								cout << "\t***********************************" << endl;
								// this loop prints the musics to the screen
								for (int i = 0; i < 5; i++)
								{
									cout << "\n\tMusic index: " << i << endl;
									music[i].display();
								}
								cout << "\n\t***********************************" << endl;
								do  // do while is used to provide a continuous loop
								{
									cout << "\n\tWhat do you want to do?" << endl;
									cout << "\n\t1. Update price" << endl;
									cout << "\t2. Update stock" << endl;
									cout << "\t3. <- Go back" << endl;
									cout << "\tEnter a number: ";
									cin >> enteredbook;
									switch (enteredbook)
									{
									case 1:
										cout << "\n\tWhich one do you want to update price?" << endl;
										cout << "\tEnter a number: ";
										cin >> AdminUpdatePrice;
										cout << "\n\tHow much does it cost?" << endl;
										cout << "\tEnter a number: ";
										cin >> AdminUpdateCost;
										// sends value to function to update product price
										music[AdminUpdatePrice].setUpdatePrice(AdminUpdateCost);
										//music[AdminUpdatePrice].display();  // prints the product to the screen after the update
										break;
									case 2:
										cout << "\n\tWhich one do you want to update stock?" << endl;
										cout << "\tEnter a number: ";
										cin >> AdminUpdateStock;
										cout << "\n\tHow much does it stock?" << endl;
										cout << "\tEnter a number: ";
										cin >> AdminUpdateStockSS;
										// sends value to function to update product quantity
										music[AdminUpdateStock].setUpdateStock(AdminUpdateStockSS);
										break;
									case 3:
										break;
									default:
										cout << "\n\tYou entered an invalid value.\n" << endl;
										break;
									}
								} while (enteredbook != 3); // If the entered value is 3, the menu goes back
								break;
							} while (enteredMusic != 3); // If the entered value is 3, the menu goes back
							break;
						case 4:
							break;
						default:
							cout << "\n\tYou entered an invalid value.\n" << endl;
							break;
						}
					} while (updateNumber != 4); // If the entered value is 4, the menu goes back
					break;
				case 2:
					cout << "\n" << "\n\t*       *       *       *" << "\n\t**     ***     ***     **" << "\n\t***   *****   *****   ***" << "\n\t**** ******* ******* ****" << "\n\t*************************" << "\n\t*************************" << "\n\t**See you soon my owner**" << "\n\t*************************" << endl;
					break;
				default:
					cout << "\n\tYou entered an invalid value.\n" << endl;
					break;
				}
			} while (enteredAdmin != 2); // If the entered value is 2, the menu goes back
		}
		else if (magicTouch == "E") {
			cout << "\n\t***********************************" << endl;
			cout << "\tLogging out of the app, see you..." << endl;
			cout << "\t***********************************" << endl;
		}
		else {
			cout << "\n\tChrist no, I could not understand you. Try again!" << endl;
		}
	} while (magicTouch != "E"); // If the entered value is E, the menu goes close
	cout << endl << endl << endl;

	return 0;
}