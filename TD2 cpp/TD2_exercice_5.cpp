#include <iostream>
using namespace std;

int main() {
    int a = 42;  // Déclare un entier a et lui donne la valeur 42
    int &ref_a = a;  // Déclare une référence ref_a vers a
    int *p_a = &a;  // Déclare un pointeur p_a pointant vers a

    // Affiche la valeur de a, la valeur de ref_a, la valeur pointée par p_a
    cout << "a : " << a << ", Adresse de a : " << &a << endl;
    cout << "ref_a : " << ref_a << ", Adresse de ref_a : " << &ref_a << endl;
    cout << "p_a : " << *p_a << ", Adresse pointée par p_a : " << p_a << endl;

    return 0;
}
