#include <iostream>
using namespace std ;
int main() {
    int n = 5, p = 9 ;
    int q ;
    float x ;

    q = n < p;
    cout <<q  << endl; /* on obtine le resultat de 1 */
    q = n == p;
    cout <<q  << endl;/* on obtine le resultat de 0*/
    q = p % n + p > n;
    cout <<q << endl; /* on obtine le resultat de 1*/
    x = p / n;
    cout <<x << endl;/* on obtine le resultat de 1 */
    x = (float) p / n;
    cout <<x << endl;/* on obtine le resultat de 1.8 */
    x = (p + 0.5) / n;
    cout <<x  << endl;/* on obtine le resultat de  1.9*/
    x = (int) (p + 0.5) / n;
    cout <<x << endl; /* on obtine le resultat de  1*/
    q = n * (p > n ? n : p);
    cout <<q << endl; /* on obtine le resultat de 25*/
    q = n * (p < n ? n : p);
    cout <<q << endl; /* on obtine le resultat de 45 */
    return 0;
}
