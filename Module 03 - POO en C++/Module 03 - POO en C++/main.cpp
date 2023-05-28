#include <iostream>
#include "Personne.h"
#include <string>

int main()
{
	//Erreur vue que ya pas de par default
	//Personne perso1 = new Personne();

	Personne perso2 ("Grondin", "Charles", 29, 5.9);
	perso2.afficher();

	Personne perso3 (perso2);
	perso3.afficher();
}

