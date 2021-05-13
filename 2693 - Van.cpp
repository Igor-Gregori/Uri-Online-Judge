#include <iostream>

using namespace std;

typedef struct{
    string nome;
    char sigla;
    int custo;
}aluno;

bool compare(aluno x, aluno pivo){
    if(x.custo < pivo.custo){
        return true;
    }else if(x.custo == pivo.custo){
        if(x.sigla < pivo.sigla){
            return true;
        }else if(x.sigla == pivo.sigla){
            if(x.nome < pivo.nome){
                return true;
            }else{
                return false;
            }
        }else{
            return false;
        }
    }else{
        return false;
    }
}

void modified_quicksort(aluno arr[], int comeco, int fim){
    aluno aux, pivo;

    int i, j;
    i = comeco;
    j = fim - 1;

    pivo = arr[(comeco + fim)/2];
    while(i <= j){
        while(compare(arr[i], pivo) && i < fim)
            i++;

        while(compare(pivo, arr[j]) && j > comeco)
            j--;

        if(i <= j){
            aux = arr[i];
            arr[i] = arr[j];
            arr[j] = aux;
            i++;
            j--;
        }
    }
    if(j > comeco)
        modified_quicksort(arr, comeco, j+1);
    if(i < fim)
        modified_quicksort(arr, i, fim);
}

int main(){
    int n;
    while(cin>>n){
        aluno arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i].nome>>arr[i].sigla>>arr[i].custo;
        modified_quicksort(arr, 0, n);
        for(int j=0; j<n; j++)
            cout<<arr[j].nome<<endl;
    }
    return 0;
}
