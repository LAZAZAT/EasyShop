#include <iostream>

class client {
private :
	std::string Pre;//Prenom du client
	std::string Nom;//Nom du client
	int Pan; //Panier du client 
public :

	client (std::string Pre,std::string Nom,int Pan) {
		//std::cout <<"\nClient Constructor Called\n"<< std::endl;
		this-> Pre = Pre;
		this-> Nom = Nom;
		this-> Pan = Pan;
	};
	std::string getPrenom (){
		return Pre;
	}
	std::string getNom (){
		return Nom;
	}
	int getPanier () {
		return Pan;
	}
	void setPanier (int Pan) {
		this-> Pan = Pan;
	}
	void display  () {
		std::cout << "\nPrenom : \t" << Pre << std::endl;
		std::cout << "Nom : \t\t" << Nom << std::endl;
		std::cout << "Quantity : \t" << Pan << std:: endl;
	}
};