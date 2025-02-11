#include <iostream>
using namespace std;

int main(){

    int i=1;
    int multiplicacion=1;
    int numero;
    /*
    for(i=1; i<=10; i++){
        numero=4;
        multiplicacion=i*numero;
        cout<<numero<<" * "<<i<<"="<<multiplicacion<<endl;

    }
    cout<<endl;
    for(i=1; i<=10; i++){
        numero=6;
        multiplicacion=i*numero;
        cout<<numero<<" * "<<i<<"="<<multiplicacion<<endl;
    }

     */
    int factorial;
    cout<<"ingrese el numero del que desea el factorial: "<<endl;
    cin>>factorial;
    int multiplicacionFactorial=1;
    int resultado=0;

    for (int j = factorial; j=1 ; --j) {
        multiplicacionFactorial=i*factorial;
        resultado=+multiplicacionFactorial;
    }

    cout<<"el resultado es: "<<resultado;
    return 0;
}