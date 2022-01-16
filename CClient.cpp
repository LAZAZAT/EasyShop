#include <iostream>

class client {
private :
	int Pan; //Panier du client 
	std::string Pre;//Prenom du client
	std::string Nom;//Nom du client
protected :
	int UID;
public :
	client (int UID,std::string Pre,std::string Nom,int Pan) {
		this-> UID = UID;
		this-> Pre = Pre;
		this-> Nom = Nom;
		this-> Pan = Pan;
	}
	client () {
		std::cout << "Client Constructor" << std::endl;
	}
	//~client () {
	//	std::cout << "Client destructor" << std::endl;
	//}
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
	void display () {
		std::cout << "\nUnique ID :\t" << UID << std::endl;
		std::cout << "Prenom : \t" << Pre << std::endl;
		std::cout << "Nom : \t\t" << Nom << std::endl;
		std::cout << "Quantity : \t" << Pan << std:: endl;
	}
};

class Order : public client{
    private :
        int product;//table
        bool orderstatus;
    public :
        Order (int UID,int Pro,bool Com) {
			//std::cout << "Order constructor" << std::endl;
            this-> UID = UID;
            this-> product = product;
            this-> orderstatus = orderstatus; 
        }
		//~Order () {
		//	std::cout << "Order destructor" << std::endl;
		//}
        void display() {
            std::cout << "Unique ID :" << UID << std::endl;
            std::cout << "Products :" << product << std::endl;
            std::cout << "Commade status :" << orderstatus << std::endl;
    }
};