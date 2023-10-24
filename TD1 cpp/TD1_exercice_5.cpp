/*Quels résultats fournira ce programme :*/
#include <iostream>
using namespace std ;
main() {
int n=10, p=5, q=10, r ;
r = n == (p = q) ;
cout << "A : n = " << n << " p = " << p << " q = " << q << " r = "
<< r << "\n" ;
n = p = q = 5 ;
n += p += q ;
cout << "B : n = " << n << " p = " << p << " q = " << q << "\n" ;
q = n < p ? n++ : p++ ;
cout << "C : n = " << n << " p = " << p << " q = " << q << "\n" ;
q = n > p ? n++ : p++ ;
cout << "D : n = " << n << " p = " << p << " q = " << q << "\n" ;
}/*

Reponses :
A : n = 10, p = 10, q = 10, r = 1
B : n = 15, p = 10, q = 5
C : n = 25, p = 20, q = 25
D : n = 26, p = 20, q = 20*/