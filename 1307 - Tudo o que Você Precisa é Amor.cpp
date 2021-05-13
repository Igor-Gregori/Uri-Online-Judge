#include <iostream>

using namespace std;

int mdc(int a, int b){
    if(b==0)
        return a;
    else
        return mdc(b, a%b);
}

int binary_decimal(string n)
{
    string num = n;
    int dec_value = 0;

    int base = 1;

    int len = num.length();
    for (int i = len - 1; i >= 0; i--) {
        if (num[i] == '1')
            dec_value += base;
        base = base * 2;
    }

    return dec_value;
}

int main(){

    int n, aux;
    string s1, s2;

    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>s1>>s2;

        aux = mdc(binary_decimal(s1), binary_decimal(s2));
        if(aux > 1)
            cout<<"Pair #"<<i<<": All you need is love!"<<endl;
        else
            cout<<"Pair #"<<i<<": Love is not all you need!"<<endl;
    }
    return 0;
}
