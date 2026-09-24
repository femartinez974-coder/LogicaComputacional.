#include <iostream>
using namespace std;
int main(){
    
    float n1, n2, n3;
    cout<<"Digite 3 numeros a evaluar: "<<endl;
    cin>>n1>>n2>>n3;
    if(n1>n2 and n1>n3){
        cout<<"el numero mayor es: "<<n1<<endl;
    }
    else if(n2>n1 and n2>n3){
        cout<<"el numero mayor es: "<<n2<<endl;
    }
    else if(n3>n2 and n3>n1){
        cout<<"el numero mayor es: "<<n3<<endl;
    }
    
}
