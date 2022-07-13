#include <iostream>

using namespace std;


int factorialRecursivo(int numero){
    
    if (numero < 0){
        return 0;
    }else if (numero == 0){
        return 1;
    }else if (numero > 1)
    {
        return numero * factorialRecursivo(numero - 1);
    }
    

    
}

int main()
{

    cout << "Factorial: " << factorialRecursivo(5) << endl;
    

}
