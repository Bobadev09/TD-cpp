#include <iostream>
using namespace std;

int main() {
    int hauteur;

    cout << "Combien de lignes ?:  ";
    cin >> hauteur;

    if (hauteur <= 0) {
        cout << "La hauteur doit etre superieure a zero." << endl;
    } else {
        for (int i = 0; i < hauteur; i++) {
            
            for (int espace = 0; espace < hauteur - i - 1; espace++) {
                cout << " ";
            }

             s
            for (int etoile = 0; etoile < 2 * i + 1; etoile++) {
                cout << "*";
            }

            cout << endl;  
        }
    }

    return 0;
}
