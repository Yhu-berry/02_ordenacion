#include <iostream>
using namespace std;

int shellsort(int A[100],int n);

int main(){
    int num, shell,Arr[100];   
    cout<<"n: ";cin>>num;
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

}
