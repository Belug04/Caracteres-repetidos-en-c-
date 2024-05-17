#include <iostream>

using namespace std;
/// Crear un programa que cuente la cantidad de caracteres repetidos que hay en una cadena de texto.
int main()
{
    char cadena[] = "aabbcde";
    int contador = 0;

    for(char *puntero = cadena; puntero[0] != '\0';++puntero)
    {
        char actual = puntero[0];
        char *puntero2= puntero + 1;
        while(puntero2[0] != '\0')
        {
            if(puntero2[0] == actual)
            {
                ++contador;
                puntero2[0] = '#';
            }
            ++puntero2;
        }
    }
    cout<<"La cantidad de caracteres repetidos: "<< contador <<endl;

    return 0;
}
