#include <iostream>
using namespace std;

// Fonction pour incrémenter la valeur d'une variable par adresse
void incrementer(int *variable) {
    (*variable)++;
}

// Fonction pour échanger les contenus de deux variables par adresse
void permuter(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Fonction pour échanger les contenus de deux variables par référence
void permuter(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5;
    int y = 10;

    cout << "Avant d'appeler les fonctions : x = " << x << ", y = " << y << endl;

    // Utilisation de la fonction incrementer par adresse
    incrementer(&x);
    cout << "Après incrementer(&x) : x = " << x << endl;

    // Utilisation de la fonction permuter par adresse
    permuter(&x, &y);
    cout << "Après permuter(&x, &y) : x = " << x << ", y = " << y << endl;

    // Réinitialisation des valeurs
    x = 5;
    y = 10;

    // Utilisation de la fonction permuter par référence
    permuter(x, y);
    cout << "Après permuter(x, y) : x = " << x << ", y = " << y << endl;

    return 0;
}
