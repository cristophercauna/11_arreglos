#include<iostream>
using namespace std;
int main(){
    int n,suma,i,prom,elementos[20];
    cin>>n;
    suma=0;
    for (i=0;i<n;i++){
        cin>>elementos[i];
        suma=suma+elementos[i];
    }
    prom=suma/n;
    for(i=0;i<n;i++){
        if(elementos[i]>prom){
            cout<<elementos[i];
        }
    }
    return 0;
}