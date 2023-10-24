#include <iostream>
using namespace std;

int main() {
    int tableau[10];
    int temp;
    bool echange;

    // Demander à l'utilisateur de saisir 10 entiers
    cout << "Veuillez entrer 10 entiers : " << endl;
    for (int i = 0; i < 10; i++) {
        cin >> tableau[i];
    }

    // Tri à bulles
    do {
        echange = false;
        for (int i = 0; i < 9; i++) {
            if (tableau[i] > tableau[i + 1]) {
                // Échanger les éléments si ils ne sont pas dans le bon ordre
                temp = tableau[i];
                tableau[i] = tableau[i + 1];
                tableau[i + 1] = temp;
                echange = true;
            }
        }
    } while (echange);

    // Afficher le tableau trié
    cout << "Tableau trié par ordre croissant : ";
    for (int i = 0; i < 10; i++) {
        cout << tableau[i] << " ";
    }
    cout << endl;

    return 0;
}
