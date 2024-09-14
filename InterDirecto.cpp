#include<iostream>
using namespace std;

//Funcion que recorre el arreglo de Derecha a Izquierda
void interDirDer(int[] ,int);

//Funcion que recorre el arreglo de Izquierda a Derecha

//Funcion de intercambio por señal 

//Funcion de intercambio bidireccional que recorre el arreglo usando las 3 fnciones anteriores 

int main(){
    int num;   
    cout<<"Ingrese el numero de elementos ( son 4, lista predeterminada): ";
    cin>>num;  

    //definir un arreglo de 4 elementos 
    int Arr[]={25,10,20,6};

    //imprimir arreglo original (predeterminado)
    cout<<"Arreglo original: ";
    for(int i=0;i<num;i++){
        cout<<Arr[i]<<"\t";
    }
    cout<<"\n";
    interDirDer(Arr,num);
    cout<<"Arreglo ordenado: ";
    for(int i=0;i<num;i++){
        cout<<Arr[i]<<"\t";
    }

    return 0;
}

void interDirDer(int A[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(A[j]>A[j+1]){
                int aux;
                aux=A[j];
                A[j]=A[j+1];
                A[j+1]=aux;
            }
        }
    }
}