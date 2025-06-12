#include<iostream>
using namespace std;
int main(){
    int i,aux,n,A[20];
    cin>>n;
    for(i=0;i<n;i++){
        cin>>A[i];
    }
    for(i=0;i< int (n/2); i++){
        aux=A[i];
        A[i]=A[n-i-1];
        A[n-i-1]=aux;
    }
    for(i=0; i<n; i++){
        cout<<A[i];
    }
    return 0;
}