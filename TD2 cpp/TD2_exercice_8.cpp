#include <iostream>
using namespace std;

// Classe pour représenter un nombre complexe
class Complexe {
public:
    Complexe(double re = 0.0, double im = 0.0) : reel(re), imaginaire(im) {}

    // Fonction pour additionner deux nombres complexes
    Complexe addition(const Complexe& autre) const {
        return Complexe(reel + autre.reel, imaginaire + autre.imaginaire);
    }

    // Fonction pour soustraire deux nombres complexes
    Complexe soustraction(const Complexe& autre) const {
        return Complexe(reel - autre.reel, imaginaire - autre.imaginaire);
    }

    // Fonction pour multiplier deux nombres complexes
    Complexe multiplication(const Complexe& autre) const {
        return Complexe(reel * autre.reel - imaginaire * autre.imaginaire, reel * autre.imaginaire + imaginaire * autre.reel);
    }

    // Fonction pour diviser deux nombres complexes
    Complexe division(const Complexe& autre) const {
        double denominateur = autre.reel * autre.reel + autre.imaginaire * autre.imaginaire;
        return Complexe((reel * autre.reel + imaginaire * autre.imaginaire) / denominateur, (imaginaire * autre.reel - reel * autre.imaginaire) / denominateur);
    }

    // Fonction pour afficher un nombre complexe
    void afficher() const {
        cout << "(" << reel << " + " << imaginaire << "i)";
    }

    // Fonction pour vérifier l'égalité de deux nombres complexes
    bool egal(const Complexe& autre) const {
        return (reel == autre.reel && imaginaire == autre.imaginaire);
    }

private:
    double reel;
    double imaginaire;
};

int main() {
    double re1, im1, re2, im2;
    
    cout << "Entrez la partie réelle du premier nombre complexe : ";
    cin >> re1;
    cout << "Entrez la partie imaginaire du premier nombre complexe : ";
    cin >> im1;

    cout << "Entrez la partie réelle du deuxième nombre complexe : ";
    cin >> re2;
    cout << "Entrez la partie imaginaire du deuxième nombre complexe : ";
    cin >> im2;

    Complexe nombre1(re1, im1);
    Complexe nombre2(re2, im2);

    int choix;
    cout << "Choisissez une opération :\n";
    cout << "1. Égalité\n";
    cout << "2. Addition\n";
    cout << "3. Soustraction\n";
    cout << "4. Multiplication\n";
    cout << "5. Division\n";
    cout << "Entrez le numéro de l'opération : ";
    cin >> choix;

    switch (choix) {
        case 1:
            if (nombre1.egal(nombre2)) {
                cout << "Les nombres complexes sont égaux." << endl;
            } else {
                cout << "Les nombres complexes ne sont pas égaux." << endl;
            }
            break;
        case 2:
            (nombre1.addition(nombre2)).afficher();
            cout << endl;
            break;
        case 3:
            (nombre1.soustraction(nombre2)).afficher();
            cout << endl;
            break;
        case 4:
            (nombre1.multiplication(nombre2)).afficher();
            cout << endl;
            break;
        case 5:
            (nombre1.division(nombre2)).afficher();
            cout << endl;
            break;
        default:
            cout << "Opération non valide." << endl;
    }

    return 0;
}
