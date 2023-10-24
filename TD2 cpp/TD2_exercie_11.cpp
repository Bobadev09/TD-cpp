#include <iostream>
#include <cmath>
using namespace std;

class Vecteur3d {
private:
    float x;
    float y;
    float z;

public:
    // Constructeur avec des valeurs par défaut (0)
    Vecteur3d(float _x = 0, float _y = 0, float _z = 0) : x(_x), y(_y), z(_z) {}

    // Fonction d'affichage des 3 composantes du vecteur
    void afficher() {
        cout << "(" << x << ", " << y << ", " << z << ")" << endl;
    }

    // Fonction pour obtenir la somme de deux vecteurs
    Vecteur3d somme(const Vecteur3d& autre) {
        return Vecteur3d(x + autre.x, y + autre.y, z + autre.z);
    }

    // Fonction pour obtenir le produit scalaire de deux vecteurs
    float produitScalaire(const Vecteur3d& autre) {
        return x * autre.x + y * autre.y + z * autre.z;
    }

    // Fonction pour savoir si deux vecteurs ont les mêmes composantes
    bool coincide(const Vecteur3d& autre) {
        return (x == autre.x && y == autre.y && z == autre.z);
    }

    // Fonction pour obtenir la norme du vecteur
    float norme() {
        return sqrt(x * x + y * y + z * z);
    }

    // Fonction pour obtenir le vecteur ayant la plus grande norme parmi deux vecteurs
    static Vecteur3d normax(const Vecteur3d& v1, const Vecteur3d& v2) {
        if (v1.norme() >= v2.norme()) {
            return v1;
        } else {
            return v2;
        }
    }
};

int main() {
    Vecteur3d v1(1, 2, 3);
    Vecteur3d v2(4, 5, 6);

    // Affichage des vecteurs
    cout << "Vecteur v1 : ";
    v1.afficher();
    cout << "Vecteur v2 : ";
    v2.afficher();

    // Somme de deux vecteurs
    Vecteur3d somme = v1.somme(v2);
    cout << "Somme de v1 et v2 : ";
    somme.afficher();

    // Produit scalaire de deux vecteurs
    float produit = v1.produitScalaire(v2);
    cout << "Produit scalaire de v1 et v2 : " << produit << endl;

    // Vérification si les vecteurs ont les mêmes composantes
    bool memeComposantes = v1.coincide(v2);
    cout << "V1 et v2 ont les mêmes composantes : " << (memeComposantes ? "Oui" : "Non") << endl;

    // Norme d'un vecteur
    float normeV1 = v1.norme();
    cout << "Norme de v1 : " << normeV1 << endl;

    // Vecteur avec la plus grande norme
    Vecteur3d vecteurMax = Vecteur3d::normax(v1, v2);
    cout << "Vecteur avec la plus grande norme : ";
    vecteurMax.afficher();

    return 0;
}
