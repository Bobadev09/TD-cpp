#include <iostream>

  void fonction ()
{
    static int nombre_appel = 0;
    nombre_appel++;
    cout<<"Nombre total d'appel "<< nombre_appel<<endl;
}

using namespace std;
int main() {
fonction ();
fonction ();

}