#include <iostream>
using namespace std ;
main() {
int n=0 ;
do {
if (n%2==0) {
cout << n << " est pair\n" ;
n += 3 ;
continue ;
}
if (n%3==0) {
cout << n << " est multiple de 3\n" ;
n += 5 ;
}
if (n%5==0) {
cout << n << " est multiple de 5\n" ;
break ;
}
n += 1 ;
} while (1) ;
}
/*Combien de fois la boucle do-while s’exécute ?*/


/* Reponse : 
La boucle do-while s'est exécutée 9 fois avant de se terminer.*/