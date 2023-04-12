#include <iostream>
using namespace std;

int main()
{
    //DECLARAR EL IDIOMA
    setlocale(LC_ALL, "spanish");

    //DECLARAR VARIABLES
    float nro1, nro2, suma, division, multiplicacion, resta;

    //TITULO
    cout << "suma, resta, multiplicación, división, residuo entre 2 números\n" << endl;
    
    //INGRESO DE DATOS
    cout << "Ingrese el primer numero: \t";
    cin >> nro1;
    cout << "Ingrese el segundo numero: \t";
    cin >> nro2;

    //PROCESO DE DATOS
    suma = nro1 + nro2;
    multiplicacion = nro1 * nro2;
    if (nro1 < nro2)
    {
        resta = nro2 - nro1;
        division = nro2 / nro1;
    }
    else
    {
        resta = nro1 - nro2;
        division = nro1 / nro2;
    }

    //SALIDA DE DATOS
    cout << "\n\nLa suma es: \t\t\t\t" << suma << endl;
    cout << "La resta es: \t\t\t\t" << resta << endl;
    cout << "La multiplicacion es: \t\t" << multiplicacion << endl;
    cout << "La division es: \t\t\t" << division << endl;
    return 0;
}