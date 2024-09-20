//Metodod de insercin directa
#include <iostream>
using namespace std;

int insercion(int A[100],int n);
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