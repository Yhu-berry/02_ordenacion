//Metodod de insercin directa
#include <iostream>
using namespace std;

//Funcion de insercion directa
int insercion(int A[100],int n);

//Funcion de insercion binaria
int insercionBin(int A[100],int n);

int main(){
    int num,Arr[100],aux;
    cout << "Ingrese el numero de elementos: ";
    cin >> num;
    cout << "Ingrese los elementos: ";
    for(int i=0; i<num; i++)
        cin >> Arr[i];
    
    //Arreglo ordenado usando la fucion insercion
    insercion(Arr, num);
    cout << "Arreglo ordenado con metodo de insercion directa: ";
    for(int i=0; i<num; i++)
        cout << Arr[i] << " ";
    cout << endl;
    return 0;
}

//Insercion directa
int insercion(int A[100],int n){
        int i, j, aux;
    for(i=1; i<n; i++){
        aux = A[i];
        j = i-1;
        while(j>=0 && A[j]>aux){
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = aux;
    }
    return 0;
}

int insercionbin(int A[100],int n){
    for(int i=1; i<n; i++){
        int aux,izq,der,med;
        aux=A[i];
        izq=0;
        der=i+1;
        while(izq<der){
            med=int((izq+der)/2);
            if(aux<A[med])
                der=med;
            else
                izq=med+1;
        }
        int j=i-1;
        while(j>=izq){
            A[j+1]=A[j];
            j--;
        }
        A[izq]=aux;
    }
}