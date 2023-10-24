#include <iostream>
using namespace std ;
int main() {
    char c = '\x01' ;
    short int p = 10 ;
cout << p + 3 << endl;/* on obtine le resultat de 13  */
cout << c + 1<< endl ;/* on obtine le resultat de 2 */
cout << p + c<< endl ;/* on obtine le resultat de 11*/
cout << 3 * p + 5 * c<< endl ;/*on obtine le resultat de 35*/
    return 0;
}