#include <iostream>

using namespace std;

float moduloNumero(float numero){

    if (numero < 0){
        numero = numero * -1;
    }

    return numero;

}

int main()
{

    cout << "Modulo: " << moduloNumero(-100) << endl;

}
