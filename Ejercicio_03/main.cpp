#include <iostream>

using namespace std;

int factorial(int numero){

    int resultado = 1;
    
    for (int i = 1; i <= numero; i++){
        resultado = resultado * i;
    }
    
    return resultado;
    
}

int main()
{

    cout << "Factorial: " << factorial(5) << endl;
    

}
