#include <iostream>
using namespace std;
int main() {
    //creando el menu de opciones
    int opcion;
    do {
        cout << "====================MENU====================" << endl;
        cout << "OPCION 1.MOSTRAR LAS TABLAS DE MULTIPLICAR DEL NUMERO 4 Y NUMERO 6" << endl;
        cout << "OPCION 2.CALCULAR EL FACTORIAL DE UN NUMERO" << endl;
        cout << "OPCION 3.CREAR UNA SERIE FIBONACCI" << endl;
        cout << "OPCION 4.CALCULAR SI UN NUMERO ES PRIMO O NO" << endl;
        cout << "OPCION 5.CALCULAR SI UN NUMERO ES PAR O NO" << endl;
        cout << "OPCION 6.GENERAR UNA TABLA DE MULTIPLICAR" << endl;
        cout << "OPCION 7.SALIR" << endl;
        cout << "SELECCIONE UNA OPCION: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                if (opcion==1) {
                    cout << "HAS SELECCIONADO LA OPCION NUMERO 1" << endl;
                    int tabladel4 = 4;
                    int tabladel6 = 6;
                    int multiplicacion, numero, a = 1;
                    cout << "TABLA DEL 4" << endl;
                    do {
                        multiplicacion = tabladel4 * a;
                        cout << tabladel4 << " x " << a << " = " << multiplicacion << endl;
                        a++;
                    } while (a <= 10);
                    int b = 1;
                    cout << "TABLA DEL 6" << endl;
                    do {
                        multiplicacion = tabladel6 * b;
                        cout << tabladel6 << " x " << b << " = " << multiplicacion << endl;
                        b++;
                    } while (b <= 10);
                }else {
                    break;
                }
            case 2:
                if (opcion==2) {
                    cout << "HAS SELECCIONADO LA OPCION NUMERO 2" << endl;
                    int n, i;
                    int factorial;

                    cout << "INGRESE UN NUMERO: " << endl;
                    cin >> n;
                    factorial = 1;
                    for (i = 1; i <= n; i++)
                        factorial = factorial * i;
                    cout << endl << "el factorial de " << n << " es = " << factorial << endl;
                }else {
                    break;
                }
            case 3:
                if (opcion==3) {
                    cout << "HAS SELECCIONADO LA OPCION NUMERO 3" << endl;
                    int N, t1 = 0, t2 = 1, nexTerm = 0;
                    cout << "INGRESE EL NUMERO DE TERMINOS: ";
                    cin >> N;
                    cout << "SERIE FIBONACHI ";
                    for (int i = 1; i <= N; i++) {
                        if (i == 1) {
                            cout << t1 << " , " << endl;
                            continue;
                        }
                        if (i == 2) {
                            cout << t1 << " , " << endl;
                            continue;
                        }
                        nexTerm = t1 + t2;
                        t1 = t2;
                        t2 = nexTerm;

                        cout << nexTerm << " , " << endl;

                    }

                }else {
                    break;
                }
            case 4:
                if (opcion==4) {
                    int n, i;
                    cout << "HAS SELECCIONADO LA OPCION NUMERO 4" << endl;
                    cout << "INGRESA UN NUMERO Y TE DIRE SI ES PRIMO O NO: ";
                    cin >> n;
                    if(n==1)  //si se lee un 1, se imprime directamente que no es primo
                    {
                        cout <<n<<" No es un numero primo" << endl;
                    }
                    else
                    {
                        i=2;          //i es el divisor
                        while(n%i!=0) //mientras el número sea divisible por el divisor
                        {
                            i++;      //siguiente divisor
                        }
                        //cuando sale del while, si el divisor es el propio número
                        //entonces el número es primo
                        if(i==n)
                            cout <<n<<" es un numero Primo" << endl;
                        else
                            cout <<n<<" No es un numero primo" << endl;
                    }
                }else {
                    break;
                }
            case 5:
                if(opcion==5) {
                    int n2;
                    cout << "HAS SELECCIONADO LA OPCION NUMERO 5" << endl;
                    cout << "INGRESE UN NUMERO: ";
                    cin >> n2;
                    if (n2 % 2 == 0) {
                        cout << n2 << " ES UN NUMERO PAR" << endl;
                    } else {
                        cout << n2 << " NO ES UN NUMERO PAR" << endl;
                    }
                }else {
                    break;
                }
            case 6:
                if (opcion==6) {
                    cout << "HAS SELECCIONADO LA OPCION NUMERO 6" << endl;
                    int Multi, numero1, aa=1;

                    cout << "INGRESE EL NUMERO DE LA TABLA QUE DESEA: ";
                    cin >> numero1;
                    cout << "LA TABLA DEL " << numero1 << " ES" << endl;
                    do {
                        Multi = numero1 * aa;
                        cout << numero1 << " * " << aa << " = " << Multi << endl;
                        aa++;
                    } while (aa <= 10);
                }else {
                    break;
                }
            case 7:
                if(opcion==7) {
                    cout << "SALIENDO DEL PROGRAMA" << endl;
                }else {
                    break;
                }
            default:
                cout << "LA OPCION QUE HA SELECCIONADO NO ES VALIDA,PORFAVOR SELECCIONE UNA OPCION VALIDA"
                     << endl;
                break;
        }
    }
    while (opcion != 7);
    return 0;
}