#include"Magasin.h"

Magasin::Magasin(std::vector<Produit>produits, std::vector<Client>clients, std::vector<Order>orders){
	_produits = produits;
	_clients = clients;
	_orders = orders;
}


void Magasin::produit() const{
	return _produits;
}

void Magasin::client() const{
	return _clients;
}

void Magasin::order() const{
	return _orders;
}

void Magasin::add_produit(Produit P) const{
	_produits.push.back(P);
}

void Magasin::add_client(Client C) const{
	_clients.push.back(C);
}

void Magasin::add_order(Order O) const{
	_orders.push.back(O);
}


void Magasin::display_prods() const{
	for(auto i=0, i<=_produits.size(), i++){
		std::cout << _produits(i) << std::endl;
	}
}

void Magasin::find_prod(std::string nom) const{
	for(auto i = 0, i <= _produits.size(), i++){
		if(_produits.nom(i) == nom){
			std::cout << _produits(i) << std::endl;
		}
	}
}

void Magasin::maj_qte(std::string nom){
	for(auto i = 0, i<=_produits.size(), i++){
		if(_produits.nom(i) == nom){
			_produits(i).update_qte(int qte);
		}
	}
}

void Magasin::display_clts() const{
	for(auto j=0, j <=_clients.size(), j++){
		std::cout << _clients(i) << std::endl;
	}
}

void Magasin::find_clt(std::string nom) const{
	for(auto j=0, j <=_clients.size(), j++){
		if(_clients.nom(i) == nom || _clients.id == nom){
			std::cout << _clients(i) << std::endl;
		}
	}
}

void Magasin::add_panier(Produit P) const{
	panier.push.back(P);
}

void Magasin::del_panier(Produit P) const{
	panier.erase(P);
}