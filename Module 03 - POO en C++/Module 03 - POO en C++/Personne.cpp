#include <iostream>
#include "Personne.h"
#include <string>


Personne::Personne(std::string p_nom, std::string p_prenom, int p_age, float p_taille)
{
	this->setNom(p_nom);
	this->setPrenom(p_prenom);
	this->setAge(p_age);
	this->setTaille(p_taille);
	std::cout << "Ctor par initialisation" << std::endl;
}

Personne::Personne(const Personne& p_PersonneACopier)
{
	this->setNom(p_PersonneACopier.m_nom);
	this->setPrenom(p_PersonneACopier.m_prenom);
	this->setAge(p_PersonneACopier.m_age);
	this->setTaille(p_PersonneACopier.m_taille);
	std::cout << "Ctor par Copie" << std::endl;
}

Personne::Personne(const Personne&& p_rvalue)
{
	this->setNom(p_rvalue.m_nom);
	this->setPrenom(p_rvalue.m_prenom);
	this->setAge(p_rvalue.m_age);
	this->setTaille(p_rvalue.m_taille);
	std::cout << "Ctor par Deplacement" << std::endl;
}

Personne::~Personne() {}

std::string Personne::getNom() { return this->m_nom; }
std::string Personne::getPrenom() { return this->m_prenom; }
int Personne::getAge() { return this->m_age; }
float Personne::getTaille() { return this->m_taille; }

std::string Personne::setNom(std::string p_nom)
{
	if (p_nom == "")
	{
		throw std::invalid_argument("Le nom ne peut pas etre vide !");
	}
	this->m_nom = p_nom;
};

std::string Personne::setPrenom(std::string p_prenom)
{
	if (p_prenom == "")
	{
		throw std::invalid_argument("Le prenom ne peut pas etre vide !");
	}
	this->m_prenom = p_prenom;
};

int Personne::setAge(int p_age)
{
	if (p_age < 0 || p_age > 110)
	{
		throw std::invalid_argument("L'age ne peut pas etre < 0 et > 110  !");
	}
	this->m_age = p_age;
};

float Personne::setTaille(float p_taille)
{
	if (p_taille < 0)
	{
		throw std::invalid_argument("La taille ne peut pas etre < 0 !");
	}
	this->m_taille = p_taille;
};


void Personne::afficher()
{
	std::cout << "Methode afficher appeler" << std::endl;
	std::cout << this->getPrenom() << " " << this->getNom() << "Age: " << this->getAge() << std::endl;
}

void Personne::anniversaire() 
{
	std::cout << "Methode anniversaire appeler" << std::endl;
	this->m_age++;
}

void Personne::grandir(float p_taille) 
{
	std::cout << "Methode grandir appeler" << std::endl;
	this->m_taille += p_taille;
}

