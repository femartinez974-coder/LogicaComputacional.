#include <iostream>
using namespace std;

int main() {
    
    int n1, n2, n3;
    cout<<"ingrese tres numeros enteros en orden de mayor a menor: "<<endl;
    cin>>n1>>n2>>n3;
    if(n1>n2 and n2>n3 and n1>n3){
        cout<<"Los numeros estan organizados de mayor a menor."<<endl;
    }
    else {
        cout<<"Los numeros no estan organizados de mayor a menor"<<endl;
    }
}
