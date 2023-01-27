#include<iostream>
#include "Produit.h"

int main(){
	Produit P("XBox","Console rivale à PS",6,150.6);
	Produit P1("acer aspire E5","Ordinateur de Gaming",10,500);
	P.display();
	std::cout << P << std::endl;
	P.update_qte(10);
	std::cout << P1.nom() << std::endl;

	return 0;

}