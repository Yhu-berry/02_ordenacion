#include<iostream>
using namespace std;

//Funcion que recorre el arreglo de Derecha a Izquierda
void interDirDer(int[] ,int);

//Funcion que recorre el arreglo de Izquierda a Derecha
void interDirIzq(int[],int);

//Funcion de intercambio por señal 

//Funcion de intercambio bidireccional que recorre el arreglo usando las 3 fnciones anteriores 

//Funcion para imprimir el arreglo
void imprimirArreglo(int[],int);
int main(){
    int num;   
    cout<<"Ingrese el numero de elementos ( son 4, lista predeterminada): ";
    cin>>num;  

    //definir un arreglo de 4 elementos 
    int Arr[]={25,10,20,6};

    //imprimir arreglo original (predeterminado)
    cout<<"Arreglo original: ";
    imprimirArreglo(Arr,num);
    cout<<endl;
    interDirDer(Arr,num);
    cout<<"Arreglo ordenado(Derecha a Izquierda): ";
    imprimirArreglo(Arr,num);

    interDirIzq(Arr,num);
    cout<<"Arreglo ordenado(Izquierda a Derecha): ";
    imprimirArreglo(Arr,num);

    return 0;
}

//Derecha
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

//Izquierda
void interDirIzq(int A[],int n){
    for(int i=1; i<n;i++){
        for(int j=n-1;j>=i;j--){
            if(A[j]<A[j-1]){
                int aux;
                aux=A[j];
                A[j]=A[j-1];
                A[j-1]=aux;
            }
        }
    }
}

//Imprimir Arreglo
void imprimirArreglo(int A[],int n){
    for(int i=0; i<n; i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
}