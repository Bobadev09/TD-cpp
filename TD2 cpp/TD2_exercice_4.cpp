#include <iostream>
using namespace std;

int main() {
    int taille;
    
    // Demander la taille du tableau à l'utilisateur
    cout << "Entrez la taille du tableau : ";
    cin >> taille;

    // Allouer dynamiquement de la mémoire pour le premier tableau
    int *premierTableau = new int[taille];

    // Lire les nombres et les stocker dans le premier tableau
    for (int i = 0; i < taille; i++) {
        cout << "Entrez un nombre entier : ";
        cin >> premierTableau[i];
    }

    // Créer dynamiquement un nouveau tableau pour les carrés
    int *tableauCarres = new int[taille];

    // Calculer les carrés des nombres du premier tableau
    for (int i = 0; i < taille; i++) {
        tableauCarres[i] = premierTableau[i] * premierTableau[i];
    }

    // Afficher les carrés
    cout << "Carrés des nombres du premier tableau : ";
    for (int i = 0; i < taille; i++) {
        cout << tableauCarres[i] << " ";
    }
    cout << endl;

    // Supprimer le premier tableau
    delete[] premierTableau;

    // Supprimer le deuxième tableau
    delete[] tableauCarres;

    return 0;
}
