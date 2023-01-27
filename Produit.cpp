#include "Produit.h"

Produit::Produit(std::string nom, std::string description, int qte, float pu){
	_nom = nom;
	_description = description;
	_qte = qte;
	_pu = pu;
	_cod_bar = rand();
}

std::string Produit::nom() const{
	return _nom;
}

std::string Produit::description() const{
	return _description;
}

int Produit::qte() const{
	return _qte;
}

float Produit::pu() const{
	return _pu;
}

float Produit::cod_bar() {
	return _cod_bar;
}

void Produit::update_qte(int qte){
	_qte = qte;
}

void Produit::update_pu(float pu){
	_pu = pu;
}

std::ostream& operator << (std::ostream& os, Produit& P){
	std::string to_display = "Nom: " + P.nom() + " \nDescription: " + P.description() + 
	"\nQuantité:" + std::to_string(P.qte()) + ",  prix unitaire: " + std::to_string( P.pu()) + 
	"\nCode de référence: " + std::to_string(P.cod_bar());
	os << to_display ;
	return os;
}

void Produit::display() const{
	std::cout << _nom <<" "<< _description <<" "<< _qte <<" "<< _pu <<" "<< _cod_bar << std::endl;  
}