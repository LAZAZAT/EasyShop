#include <iostream>

class Products {
private :
	std::string Ttl;//title :titre du produit
	std::string Desc;//Description :Description du produit
	int Qtity;//Quantity : Quantité disponible
	float UPrc;//Unit Price : prix Unitaire
public :

	Products (std::string Ttl,std::string Desc,int Qtity,float UPrc) {
		std::cout <<"Product Constructor Called"<< std::endl;
		this-> Ttl = Ttl;
		this-> Desc = Desc;
		this-> Qtity = Qtity;
		this-> UPrc = UPrc;
	};
	std::string gettitle (){
		return Ttl;
	}
	std::string getdescription (){
		return Desc;
	}
	int getquantity () {
		return Qtity;
	}
	float getunitprice () {
		return UPrc;
	}
	void setquantity (int Qtity) {
		this-> Qtity = Qtity;
	}
	void display  () {
		std::cout << "Product : \t" << Ttl << std::endl;
		std::cout << "Description : \t" << Desc << std::endl;
		std::cout << "Quantity : \t" << Qtity << std:: endl;
		std::cout << "Unit Price : \t" << UPrc << " Euros" << std::endl;
	}
};