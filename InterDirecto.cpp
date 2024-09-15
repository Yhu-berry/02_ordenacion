#include<iostream>
using namespace std;

//Cantidad maxima de elementos del arreglo
const int cantMaxElem=60;

//Funcion que recorre el arreglo de Derecha a Izquierda
void interDirDer(int[] ,int);

//Funcion que recorre el arreglo de Izquierda a Derecha
void interDirIzq(int[],int);

//Funcion de intercambio por señal 
void interDirCen(int[],int);

//Funcion de intercambio bidireccional que recorre el arreglo usando las 3 fnciones anteriores 
void interDirBi(int[],int);

//Funcion para imprimir el arreglo
void imprimirArreglo(int[],int);
int main(){
    int num;   
    cout<<"Ingrese el numero de elementos (maximo "<<cantMaxElem<<"): ";
    cin>>num;  

    int Arr[cantMaxElem];

    //Ingresar los elementos de la lista
    cout<<"Ingresar los elementos de la lista "<<endl;
    for(int i=0;i<num;i++){
        cin>>Arr[i];
    }

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

    interDirCen(Arr,num);
    cout<<"Arreglo ordenado(Por señal): ";
    imprimirArreglo(Arr,num);

    interDirBi(Arr,num);
    cout<<"Arreglo ordenado(Bidireccional): ";
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

//Por señal
void interDirCen(int A[], int n){
    bool cen=true;
    int i=1;
    while(i<n-1 && cen){
        cen=false;
        for(int j=0;j<n-i;j++){
            if(A[j]>A[j+1]){
                int aux;
                aux=A[j];
                A[j]=A[j+1];
                A[j+1]=aux;
                cen=true;
            }
        }
        i++;
    }
}

//Bidireccional
void interDirBi(int A[],int n){
    int izq=1,der=n-1,k=n-1;
    while(izq<=der){
        //Primera etapa
        for(int i=der;i>=izq;i--){
            if(A[i-1]>A[i]){
                int aux;
                aux=A[i-1];
                A[i-1]=A[i];
                A[i]=aux;
                k=i;
            }
        }
        izq=k+1;

        //Segunda etapa
        for(int i=izq;i<=der;i++){
            if(A[i-1]>A[i]){
                int aux;
                aux=A[i-1];
                A[i-1]=A[i];
                A[i]=aux;
                k=i;
            }
        }
        der=k-1;
    }
}

//Imprimir Arreglo
void imprimirArreglo(int A[],int n){
    for(int i=0; i<n; i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
}