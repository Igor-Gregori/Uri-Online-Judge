#include <iostream>

using namespace std;

int valid(int n) {
    if(n >= 0 && n<= 9)
        return n;
    return 0;
}

int main() {
    string a = "0000000000", b = "0000000000";
    int vet[10][2] = {{0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}, {0, 0}};

    int cont_carry, rest;

    while(true) {
        a = "0000000000";
        b = "0000000000";

        cin>>a>>b;
        if(a == "0" && b == "0")
            return 0;

        for(int i=0; i<10; i++) {
            vet[i][0] = valid(a[a.length()-1-i] - '0');
            vet[i][1] = valid(b[b.length()-1-i] - '0');
        }

        cont_carry = 0;
        rest = 0;

        for(int i=0; i<10; i++) {
            if((vet[i][0] + vet[i][1] + rest) >= 10) {
                rest = 0;

                cont_carry++;
                rest++;
            } else {
                rest = 0;
            }
        }

        if(cont_carry > 0){
            if(cont_carry == 1)
                cout<<cont_carry<<" carry operation."<<endl;
            else
                cout<<cont_carry<<" carry operations."<<endl;
        }
        else
            cout<<"No carry operation."<<endl;
    }

    return 0;
}
