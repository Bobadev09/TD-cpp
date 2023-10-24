#include <iostream>
using namespace std ;

bool multiple_2(int nombre)
{
    if(nombre%2 == 0)
    {
        cout<<"ce nombre est multiple de 2 "<<endl;
        return true;
    }
    return false;

}


 bool multiple_3 (int nombre )
{
    if(nombre%3 == 0)
    {
        cout<<"ce nombre est multiple de 3 "<<endl;
        return  true ;
    }
    return  false ;

}
int main() {
int nombre ;
    cout<<"entrez un nombre :"<<endl;
    cin>>nombre;
    if(multiple_2(nombre) && multiple_3(nombre))
    {
        cout<<"ce nombre est multiple de 6"<<endl;
    }}
