#include <iostream>

using namespace std;

void mayorNumero(int numero1, int numero2, int mayor){
    
    if (numero1 > numero2){
        mayor = numero1;
    }
    else{
        mayor = numero2;
    }
    
    cout << "El mayor numero es: " << mayor << endl;
    
}


int main()
{

 mayorNumero(10, 20, 0);

}
