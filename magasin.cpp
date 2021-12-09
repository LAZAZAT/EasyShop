#include <iostream>
#include <vector>
using namespace std;

class Magasin {
public:
	void display();
	string getproduits();
	string getclients();
	string getorder();
	Magasin(string(vector<string> _products), string(vector<string> _clients), string(vector<string> _orders))
		:_products(), _clients(), _orders() {}


private:
	std::vector<string> _products;
	std::vector<string> _clients;
	std::vector<string> _orders;
};

string Magasin::getproduits() {
	return _products;
}
string Magasin::getclients() {
	return _clients;
}
string Magasin::getorder() {
	return _orders;
}
void Magasin::display() {

	cout <<"produits"  << _products << endl;
	cout << "clients" << _clients << endl;
	cout << "commades" << _orders << endl;

}