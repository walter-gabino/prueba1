#include <iostream>
using namespace std;


    long long factorial(int n) {
        if (n == 0 || n == 1) {
            return 1;
        } else {
            return n * factorial(n - 1);
        }
    }
int main() {
    int i = 1;
    int multiplicacion = 1;
    int numero;
//tabla de multiplicar del 4
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



    //pedir un numero y calcular su factorial
        int num;
        cout<< "ingresa un numero: ";
        cin>> num;

        if (num < 0) {
            cout << "no se puede calcular el factorial de un numero negativo." << endl;
        } else {
            cout << "el factorial de " <<num << " es: " <<factorial(num)<< endl;
        }


    return 0;
}