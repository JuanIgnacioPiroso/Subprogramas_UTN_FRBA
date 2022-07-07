#include <iostream>

using namespace std;


int factorialRecursivo(int numero){
    
    if (numero == 1){
        return 1;
    }
    
    return numero * factorialRecursivo(numero - 1);
    
}

int main()
{

    cout << "Factorial: " << factorialRecursivo(5) << endl;
    

}
