#include <iostream>
using namespace std;

int shellsort(int A[100],int n);

int main(){
    int num, shell,Arr[100];   
    cout<<"Ingrese la cantidad de elementos: ";cin>>num;
    cout<<"Introduce los elementos del arreglo: "<<endl;
    for(int i=0;i<num;i++){
        cin>>Arr[i];
    } 
    //Arreglo ordenado usando la funcion de shellsort
    shellsort(Arr,num);
    cout<<"Arreglo ordenado: ";
    for(int i=0;i<num;i++){
        cout<<Arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}

//Funcion shellsort
int shellsort(int A[100], int n){
    for(int k=n/2; k>0; k/=2){
        for(int i=k; i<n; i++){
            int aux = A[i];
            int j;
            for(j=i; j>=k && A[j-k]>aux; j-=k){
                A[j] = A[j-k];
            }
            A[j] = aux;
        }
    }
    return 0;
}
