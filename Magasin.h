#pragma once
#include<iostream>
#include<vector>
#include "Produit.h"
#include "Client.h"
#include "Order"

class Magasin{
public:
	Magasin(std::vector<Produit>produits,std::vector<Client>clients,std::vector<Order>orders);
	void produit() const;
	void client() const;
	void order() const;

	void add_produit() const;
	void add_client() const;
	void add_ordre() const;

	void display_prods() const;
	void find_prod(std::string nom) const;
	void maj_qte(std::string nom);

	void display_clts() const;
	void find_clt(std::string nom) const;
	void add

private:
	std::vector<Produit> _produits;
	std::vector<Client> _clients;
	std::vector<Order>_orders;

};
void add_panier(Produit P) const;
void del_panier(Produit P) const;
void update_panier(Produit P) const;