#include <iostream>
#include "CProducts.cpp"

int main(){

	Products P1("PS4","Console de jeu de marque Sony",10,249.98);

	std::cout << "Test getters :" << std::endl;

	std::cout << "Title : \t" << P1.gettitle() << std::endl;
	std::cout << "Description : \t" << P1.getdescription() << std::endl;
	std::cout << "Quantity : \t" << P1.getquantity() << std::endl;
	std::cout << "Unit Price :\t" << P1.getunitprice() << " Euros" << std::endl;
	std::cout << "\nThe quantity changed to 5\n" << std::endl;
	P1.setquantity (5);
	std::cout << "Test display product :" << std::endl;
	P1.display ();
	return 0;
}