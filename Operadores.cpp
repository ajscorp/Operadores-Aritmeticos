#include <iostream>
#include<string>
using namespace std;

int main()
{
    //DECLARAR EL IDIOMA
    setlocale(LC_ALL, "spanish");

    //DECLARAR VARIABLES
    string nro1 = "0", nro2 = "0";
    int NR1, NR2;
    float suma, division, multiplicacion, resta;

    //TITULO
    cout << "suma, resta, multiplicación, división, residuo entre 2 números\n" << endl;

    //INGRESO DE DATOS
    do
    {        
        if (stoi(nro1) <= 0)
        {
            cout << "\nIngrese el primer numero: \t";
            cin >> nro1;
            for (int i = 0; i < nro1.length(); i++)
            {
                if (isdigit(nro1[i]) == false)
                {
                    nro1 = "0";
                    cout << "\nERROR: se tiene que ingresar un numero\n";
                    system("pause");
                    break;
                }
            }
        }
    } while (stoi(nro1) <= 0);
    do
    {

        if (stoi(nro2) <= 0)
        {
            cout << "\nIngrese el segundo numero: \t";
            cin >> nro2;
            for (int i = 0; i < nro2.length(); i++)
            {
                if (isdigit(nro2[i]) == false)
                {
                    nro2 = "0";
                    cout << "\nERROR: se tiene que ingresar un numero\n";
                    system("pause");
                    break;
                }
            }
        }
    } while (stoi(nro2) <= 0);           

    NR1 = stoi(nro1);
    NR2 = stoi(nro2);
    //PROCESO DE DATOS
    suma = NR1 + NR2;
    multiplicacion = NR1 * NR2;
    if (NR1 < NR2)
    {
        resta = NR2 - NR1;
        division = NR2 / NR1;
    }
    else
    {
        resta = NR1 - NR2;
        division = NR1 / NR2;
    }

    //SALIDA DE DATOS
    cout << "\n\nLa suma es: \t\t\t\t" << suma << endl;
    cout << "La resta es: \t\t\t\t" << resta << endl;
    cout << "La multiplicacion es: \t\t\t" << multiplicacion << endl;
    cout << "La division es: \t\t\t" << division << endl;
    return 0;
}