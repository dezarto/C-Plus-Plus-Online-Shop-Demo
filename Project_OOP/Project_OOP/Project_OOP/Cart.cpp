#include "Cart.h"

// template function, this function calculates and updates the total price
template<typename ItemType>
ItemType calculateDiscountTemplate(ItemType _price, ItemType _totalprice) {

	_totalprice += _price;

	return _totalprice;
}
// cart default constructor
Cart::Cart()
{
	size = 0;
	totalPrice = 0;
}
// cart parameter constructor
Cart::Cart(int _size, float _totalPrice)
{
	size = _size;
	totalPrice = _totalPrice;
}
// cart destructor
Cart::~Cart()
{
}
// return number of items size
int Cart::getSize()
{
	return size;
}
// this function, checking if the card is empty
bool Cart::CartIsEmpty()
{
	return size == 0;
}
// this function, adding new products to the card
void Cart::addNewProduct(Product *p)
{
	productList[size] = p;
	size++;
}
// this function, remove items from card
void Cart::removeProduct(int index)
{
	addStock(index); // when you remove an item from the card, it increases the item's stock by 1
	for (int i = index; i < size - 1; i++)
	{
		productList[i] = productList[i + 1];
	}
	size--;  // when you remove a product from the card, it reduces the number of products in the cart by 1
}
// this function, increases the stock of the product deleted from the cart
int Cart::addStock(int index)
{
	int stock;
	//stock is increased and updated
	if (productList[index]->getCatalogNumber() == 1) {
		//Book is 1
		
		stock = productList[index]->getStock();
		stock++;
		
		productList[index]->setUpdateStock(stock);
		return 0;
	}
	else if (productList[index]->getCatalogNumber() == 2) {
		//Music is 2
		stock = productList[index]->getStock();
		stock++;

		productList[index]->setUpdateStock(stock);
		return 0;
	}
	else if (productList[index]->getCatalogNumber() == 3) {
		//Movie is 3
		stock = productList[index]->getStock();
		stock++;

		productList[index]->setUpdateStock(stock);
		return 0;
	}
	else {
		return 0;
	}
}

//int Cart::getCategory(int _index)
//{
//	if (productList[_index]->getCatalogNumber() == 1) {
//		//Book is 1
//		
//		return 1;
//	}
//	else if (productList[_index]->getCatalogNumber() == 2) {
//		//Music is 2
//
//		return 2;
//	}
//	else if (productList[_index]->getCatalogNumber() == 3) {
//		//Movie is 3
//
//		return 3;
//	}
//	else {
//		return 0;
//	}
//}

// Eski yöntem hatıra :)
//float Cart::calculateTotalPrice(float _price, int _index)
//{
//	if (productList[_index]->getCatalogNumber() == 1) {
//		//Book is 1
//
//		totalPrice += _price - (_price * 0.12);
//		
//		return totalPrice;
//	}
//	else if (productList[_index]->getCatalogNumber() == 2) {
//		//Music is 2
//
//		totalPrice += _price - (_price * 0.15);
//
//		return totalPrice;
//	}
//	else if (productList[_index]->getCatalogNumber() == 3) {
//		//Movie is 3
//
//		totalPrice += _price - (_price * 0.05);
//
//		return totalPrice;
//	}
//	else {
//		return totalPrice;
//	}
//	//return totalPrice;
//}

// an example function
bool operator==(Product& obj1, int& obj2)
{
	if (obj1.getCatalogNumber() == obj2) {
		return true;
	}
	else {
		return false;
	}
}
// cart display function
void Cart::display()
{
	// Checks if the card is empty
	if (CartIsEmpty()) {
		cout << "\n\t***********************************" << endl;
		cout << "\tYour cart is empty." << endl;
		cout << "\t***********************************\n" << endl;
	}
	else {
		cout << "\t***********************************" << endl;
		cout << "\tDisplay Cart" << endl;

		totalPrice = 0;

		for (int i = 0; i < size; i++)
		{
			cout << "\n\t*****************" << endl;
			cout << "\tIndex number is: " << i << endl;
			productList[i]->display();
			cout << "\n\tProduct discound price is: " << productList[i]->calculateDiscount(productList[i]->getPrice()) << endl;
			// Sends the discounted price of the product and the total price in each cycle to the template function
			totalPrice = calculateDiscountTemplate(productList[i]->calculateDiscount(productList[i]->getPrice()), totalPrice);
			cout << "\n\t*****************" << endl;
		}

		cout << "\n\tTotal price is: " << totalPrice << endl;
		cout << "\t***********************************" << endl;
	}
}