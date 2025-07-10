#include<iostream>
using namespace std;
int main(){
    int n,i,max,A[20],posicionMax;
    cout<<"Ingrese la cantidad de elementos: "<<endl;
    cin>>n;
    cout<<"-------------------------------------------------"<<endl;
    cout<<"Agregue los numeros: "<<endl;    
    for (int i=0; i<n ; i++){
        cin>>A[i];
    }
    max=A[0];
    posicionMax=0;
    for(i=1;i<n;i++){
        if(A[i]>max){
            max=A[i];
            posicionMax=i+1;
        }
    }
    cout<<"El mayor elemento del arreglo es: "<<max<<endl;
    cout<<"La posicion del elemento mayor del arreglo es: "<<posicionMax<<endl;
}
