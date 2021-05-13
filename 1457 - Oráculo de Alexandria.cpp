#include <iostream>
#include <vector>

typedef long long int lli;

using namespace std;

lli nfat(string str){
    vector<int> vet;
    for(lli i=0; i<str.length();i++){
        if(str[i] != '!')
            vet.push_back(str[i] - '0');
        else
            break;
    }

    lli res = 0;
    int sizeVet = vet.size();
    int mult = 1;

    for(lli i=0; i<sizeVet; i++){
        res += vet[sizeVet - 1 - i] * mult;
        mult *= 10;
    }
    return res;
}

lli kfat(string str){
    lli cont = 0;
    for(lli i=1;i<str.length();i++)
        if(str[i] == '!')
            cont++;
    return cont;
}

int main()
{

    int t;
    lli n, k, res;
    string str;

    cin>>t;
    while(t--){
        cin>>str;
        n = nfat(str);
        k = kfat(str);
        res = n;
        for(lli i=1; true; i++){
            if(i*k >= n)
                break;
            res*=(n-i*k);
        }

        cout<<res<<endl;
    }
    return 0;
}
