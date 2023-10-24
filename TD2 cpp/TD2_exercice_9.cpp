#include <iostream>
using namespace std;

// Classe de base Animal
class Animal {
protected:
    string nom;
    int age;

public:
    void set_value(string _nom, int _age) {
        nom = _nom;
        age = _age;
    }
};

// Sous-classe Zebra
class Zebra : public Animal {
public:
    void set_value(string _nom, int _age, string lieuOrigine) {
        nom = _nom;
        age = _age;
        cout << "Zebra : " << nom << " a " << age << " ans. Lieu d'origine : " << lieuOrigine << endl;
    }
};

// Sous-classe Dolphin
class Dolphin : public Animal {
public:
    void set_value(string _nom, int _age, string lieuOrigine) {
        nom = _nom;
        age = _age;
        cout << "Dolphin : " << nom << " a " << age << " ans. Lieu d'origine : " << lieuOrigine << endl;
    }
};

int main() {
    Zebra zebra;
    Dolphin dolphin;

    zebra.set_value("Ziggy", 5, "Savane");
    dolphin.set_value("Flipper", 10, "Océan Atlantique");

    return 0;
}
