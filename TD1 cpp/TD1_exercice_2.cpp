#include <iostream>
using namespace std ;
int main() {
    char c = '\x05' ;
int n = 5 ;
long p = 1000 ;
float x = 1.25 ;
double z = 5.5 ;

    cout <<n + c + p << endl;/* on obtine le resultat de 1010 */
    cout <<2 * x + c << endl;/* on obtine le resultat de 7.5*/
    cout <<(char) n + c << endl;/* on obtine le resultat de 10 */
    cout <<(float) z + n / 2<< endl; /* on obtine le resultat de 7.5 */
    return 0;
}
