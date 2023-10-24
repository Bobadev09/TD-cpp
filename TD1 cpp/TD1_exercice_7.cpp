#include <iostream>
using namespace std ;
main() {
int n ;
cin >> n ;
switch (n) {
case 0 : cout << "Nul\n" ;
case 1 :
case 2 : cout << "Petit\n" ; break ;
case 3 :
case 4 :
case 5 : cout << "Moyen\n" ;
default : cout << "Grand\n" ;
}
}
/*Quels résultats affiche-t-il lorsqu’on lui fournit en donnée :
a. 0
b. 1
c. 4
d. 10
e. -5*/

/*Reponse : 
a. 0 : Le programme affiche "Nul", "Petit", puis "Grand".
b. 1 : Le programme affiche "Petit" puis "Grand".
c. 4 : Le programme affiche "Moyen" puis "Grand".
d. 10 : Le programme affiche "Grand" en utilisant le bloc default.
e. -5 : Le programme affiche "Grand" en utilisant le bloc default.*/