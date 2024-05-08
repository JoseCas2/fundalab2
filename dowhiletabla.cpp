/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    char opcion, variable = 'x';
    do{
        cout << "Menu" << "\n";
        cout << "A carne asada" << "\n";
        cout << "B carne asada" << "\n";
        cout << "C carne asada" << "\n";
        cout << "D carne asada" << "\n";
        cout << "E carne asada" << "\n";
        cout << "Seleccione una opcion" << "\n";
        cin >> opcion;
        cout << "opcion seleccionada " << opcion << "\n";
        
        //instrucciones;
    }while(opcion!=variable);
    
    return 0;
}
