/*  a : formalisme tableau */

#include <iostream>
using namespace std;

int main() {
    int tableau[10];

    cout << "Veuillez entrer 10 nombres entiers :" << endl;

    for (int i = 0; i < 10; i++) {
        cout << "Nombre " << i + 1 << " : ";
        cin >> tableau[i];
    }

    int plus_grand = tableau[0];
    int plus_petit = tableau[0];

    for (int i = 1; i < 10; i++) {
        if (tableau[i] > plus_grand) {
            plus_grand = tableau[i];
        }
        if (tableau[i] < plus_petit) {
            plus_petit = tableau[i];
        }
    }

    cout << "Le plus grand nombre est : " << plus_grand << endl;
    cout << "Le plus petit nombre est : " << plus_petit << endl;

    return 0;
}

/*  B : formalisme pointeur  */

#include <iostream>
using namespace std;

int main() {
    int tableau[10];

    cout << "Veuillez entrer 10 nombres entiers :" << endl;

    for (int i = 0; i < 10; i++) {
        cout << "Nombre " << i + 1 << " : ";
        cin >> tableau[i];
    }

    int *ptr_plus_grand = tableau; // Initialiser avec le premier élément
    int *ptr_plus_petit = tableau; // Initialiser avec le premier élément

    for (int i = 1; i < 10; i++) {
        if (tableau[i] > *ptr_plus_grand) {
            ptr_plus_grand = &tableau[i];
        }
        if (tableau[i] < *ptr_plus_petit) {
            ptr_plus_petit = &tableau[i];
        }
    }

    cout << "Le plus grand nombre est : " << *ptr_plus_grand << endl;
    cout << "Le plus petit nombre est : " << *ptr_plus_petit << endl;

    return 0;
}

