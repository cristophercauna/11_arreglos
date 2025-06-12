#include<iostream>
using namespace std;
int main(){
    int n,suma,i,prom,elementos[20];
    cin>>n;
    cout<<"Ingrese la cantidad de elementos: "<<endl;
    suma=0;
    for (i=0;i<n;i++){
        cin>>elementos[i];
        suma=suma+elementos[i];
    }
    prom=suma/n;
    cout<<"El promedio de los elementos es: "<<prom<<endl;
    for(i=0;i<n;i++){
        if(elementos[i]>prom){
            cout<<elementos[i];
        }
    }
    return 0;
}