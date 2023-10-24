#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Afficher l'en-tete de la table
    cout << setw(4) << "I";
    for (int i = 1; i <= 10; i++) {
        cout << setw(4) << i;
    }
    cout << endl;

    // Afficher la ligne de separation
    cout << setw(2) << "I" << " " << setfill('-') << setw(38) << "-" << setfill(' ') << endl;

    // Afficher la table de multiplication
    for (int i = 1; i <= 10; i++) {
        cout << setw(2) << i << " |";
        for (int j = 1; j <= 10; j++) {
            cout << setw(4) << i * j;
        }
        cout << endl;
    }

    return 0;
}

