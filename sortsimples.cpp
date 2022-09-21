#include <iostream>
using namespace std;
// Le números inteiros e coloca em ordem crescente, depois exibe como foram escritos

int main (){
    int numeros [3];

    cin >> numeros[0] >> numeros[1] >> numeros[2];


    if (numeros[2]>numeros[1] && numeros[2]<numeros[0])
    {
        cout << numeros[1] << endl << numeros[2] << endl << numeros[0] << endl;

    }
    if (numeros[2]>numeros[0] && numeros[2]<numeros[1] )
    {
        cout << numeros[0] << endl << numeros[2] << endl << numeros[1] << endl;

    }
    if (numeros[1]>numeros[0] && numeros[1]<numeros[2])
    {
        cout << numeros[0] << endl << numeros[1] << endl << numeros[2] << endl;
    
    }
    if (numeros[0]>numeros[1] && numeros[0]<numeros[2])
    {
        cout << numeros[1] << endl << numeros[0] << endl << numeros[2] << endl;
    }
    if (numeros[0]>numeros[2] && numeros[0]<numeros[1])
    {
        cout << numeros[2] << endl << numeros[0] << endl << numeros[1] << endl;
    }
    if (numeros[1]>numeros[2] && numeros[1]<numeros[0])
    {
        cout << numeros[2] << endl << numeros[1] << endl << numeros[0] << endl;
    }
    

    cout << endl << numeros[0] << endl << numeros[1] << endl << numeros[2] << endl;
}