#include <iostream>

using namespace std;

main (){
    int x,y;
    cout<<"Ingrese el primer numero: "<<endl;
    cin>>x;
    cout<<"Ingrese el segundo numero: "<<endl;
    cin>>y;

    if (x>y){
        cout<<"El primer nugit push -u origin mainmero es mayor que el segundo"<<endl;
    }
    else if (x<y){
        cout<<"El segundo numero es mayor que el primero"<<endl;
    }
    else{
        cout<<"Los numeros son iguales";
    }
    system("pause");
    return 0;
}