#pragma once
#include <string>

class Personne {
public:
	Personne(std::string p_nom, std::string p_prenom, int p_age, float p_taille);
	Personne(const Personne& p_PersonneACopier);
	Personne(const Personne&& p_rvalue);
	~Personne();
	Personne& operator=(const Personne& p_objetAAfeecter);
	Personne& operator=(Personne&& p_objetAAfeecter);

	std::string getNom();
	std::string getPrenom();
	int getAge();
	float getTaille();

	std::string setNom(std::string p_nom);
	std::string setPrenom(std::string p_prenom);
	int setAge(int p_age);
	float setTaille(float p_taille);

	void afficher();
	void anniversaire();
	void grandir(float p_taille);

private:
	std::string m_nom;
	std::string m_prenom;
	int m_age;
	float m_taille;

};

