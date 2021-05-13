#include <iostream>
#include <math.h>

using namespace std;

int tam_n(int n){
    if(n <= 10)
        return 1;
    else if(n <= 100)
        return 2;
    else if(n <= 1000)
        return 3;
    else if(n <= 10000)
        return 4;
    else if(n <= 100000)
        return 5;
    else if(n <= 1000000)
        return 6;
}

bool is_primo(int n){
    if(n <= 1)
        return false;

    int div = 0;

    for(int i=2; i<=sqrt(n); i++)
        if(n%i == 0)
            div++;

    return div==0;
}

bool super_primo(int n){
    int tam = tam_n(n);
    int aux = 1;

    for(int i=0;i<tam;i++){
        if(!is_primo((n/aux)%10))
            return false;
        aux*=10;
    }
    return true;
}

int main(){
    int n;
    while(cin>>n){
        if(is_primo(n))
            if(super_primo(n))
                cout<<"Super"<<endl;
            else
                cout<<"Primo"<<endl;
        else
            cout<<"Nada"<<endl;
    }
    return 0;
}
