#include <iostream>
using namespace std;

int main(){

    cout<<"coweee"<<endl;
    int i=1;
    int multiplicacion=1;
    int numero;
    cout<<"ingresa un numero entero"<<endl;
    cin>>numero;

    for(i=1; i<=10; i++){
        multiplicacion=i*numero;
        cout<<numero<<" * "<<i<<"="<<multiplicacion<<endl;
    }

    return 0;
}