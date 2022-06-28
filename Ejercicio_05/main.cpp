#include <iostream>
#include <math.h>

using namespace std;

float raicesPolinomio(float a, float b, float c){
    
    float x1, x2;
    float discriminante = b*b - 4*a*c;
    
    if (discriminante < 0){
        cout << "No tiene raices reales" << endl;
    }
    else if (discriminante == 0){
        x1 = -b/(2*a);
        cout << "Tiene una raiz real: " << x1 << endl;
    }
    else{
        x1 = (-b + sqrt(discriminante))/(2*a);
        x2 = (-b - sqrt(discriminante))/(2*a);
        cout << "Tiene dos raices reales: " << x1 << " y " << x2 << endl;
    }
    
    return 0;
    
}

int main()
{

    raicesPolinomio(1, -6, 5);
    


}
