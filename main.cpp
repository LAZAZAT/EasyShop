#include <iostream>
#include "CProducts.cpp"
#include "CClient.cpp"

int main(){

	Products P1("PS4","Console de jeu de marque Sony",10,249.98);

	/*std::cout << "Test Product getters :\n" << std::endl;

	std::cout << "Product : \t" << P1.gettitle() << std::endl;
	std::cout << "Description : \t" << P1.getdescription() << std::endl;
	std::cout << "Quantity : \t" << P1.getquantity() << std::endl;
	std::cout << "Unit Price :\t" << P1.getunitprice() << " Euros" << std::endl;
	std::cout << "\nThe quantity changed to 5\n" << std::endl;
	P1.setquantity (9);
	std::cout << "Test display product :\n" << std::endl;*/
	P1.display ();

	client C1("Oussama","LAZAZAT",0);

	/*std::cout << "Test client getters :\n" << std::endl;

	std::cout << "Prenom :\t" << C1.getPrenom() << std::endl;
	std::cout << "Nom : \t\t" << C1.getNom() << std::endl;
	std::cout << "Panier : \t" << C1.getPanier() << std::endl;
	C1.setPanier (1);
	std::cout << "\nTest display client :\n" << std::endl;*/
	C1.display ();

	return 0;
}