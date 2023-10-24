#include <iostream>
#include <string>
using namespace std;

class Personne {
private:
    string nom;
    string prenom;
    string dateNaissance;

public:
    Personne(string _nom, string _prenom, string _dateNaissance)
        : nom(_nom), prenom(_prenom), dateNaissance(_dateNaissance) {}

    virtual void Afficher() const {
        cout << "Nom : " << nom << endl;
        cout << "Prénom : " << prenom << endl;
        cout << "Date de naissance : " << dateNaissance << endl;
    }
};

class Employe : public Personne {
private:
    double salaire;

public:
    Employe(string _nom, string _prenom, string _dateNaissance, double _salaire)
        : Personne(_nom, _prenom, _dateNaissance), salaire(_salaire) {}

    void Afficher() const override {
        Personne::Afficher();
        cout << "Salaire : " << salaire << " €" << endl;
    }
};

class Chef : public Employe {
private:
    string service;

public:
    Chef(string _nom, string _prenom, string _dateNaissance, double _salaire, string _service)
        : Employe(_nom, _prenom, _dateNaissance, _salaire), service(_service) {}

    void Afficher() const override {
        Employe::Afficher();
        cout << "Service : " << service << endl;
    }
};

class Directeur : public Chef {
private:
    string societe;

public:
    Directeur(string _nom, string _prenom, string _dateNaissance, double _salaire, string _service, string _societe)
        : Chef(_nom, _prenom, _dateNaissance, _salaire, _service), societe(_societe) {}

    void Afficher() const override {
        Chef::Afficher();
        cout << "Société : " << societe << endl;
    }
};

int main() {
    Personne personne("Dupont", "Jean", "01/01/1980");
    Employe employe("Smith", "Alice", "15/05/1990", 45000);
    Chef chef("Brown", "Robert", "10/03/1985", 60000, "Ressources Humaines");
    Directeur directeur("Johnson", "Emily", "20/12/1975", 100000, "Direction Générale", "XYZ Corp");

    personne.Afficher();
    cout << "------------------" << endl;
    employe.Afficher();
    cout << "------------------" << endl;
    chef.Afficher();
    cout << "------------------" << endl;
    directeur.Afficher();

    return 0;
}
