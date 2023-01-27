#pragma once
#include<iostream>
#include<string>
#include<vector>

class Produit{
public:
	Produit (std::string nom, std::string description, int qte, float pu);
	std::string nom() const;
	std::string description() const;
	int qte() const;
	float pu() const;
	float cod_bar();
	void display() const;
	void update_qte(int qte);
	void update_pu(float pu);

private:
	std::string _nom;
	std::string _description;
	int _qte;
	float _pu;
	float _cod_bar;
	std::vector<float>code_bar;

};

std::ostream& operator << (std::ostream& os, Produit& P);
