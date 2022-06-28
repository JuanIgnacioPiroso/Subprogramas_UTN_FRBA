#include <iostream>

using namespace std;

void moduloNumero(float numero){

    if (numero < 0){
        numero = numero * -1;
    }

    cout << "Modulo: " << numero << endl;

}

int main()
{

   moduloNumero(-100);

}
