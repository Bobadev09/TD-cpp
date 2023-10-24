#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 2) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n;

    cout << "Entrez la valeur de n : ";
    cin >> n;

    if (n <= 0) {
        cout << "La valeur de n doit être superieure à zero." << endl;
    } else {
        int resultat = fibonacci(n);
        cout << "La " << n << "eme valeur de la suite de Fibonacci est : " << resultat << endl;
    }

    return 0;
}
