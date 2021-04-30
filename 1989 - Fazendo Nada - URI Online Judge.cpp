#include <iostream>

using namespace std;

typedef long long unsigned int lli;

int main() {
    lli n=0, m=0, aux = 0, i=0;
    lli res = 0;

    while(true){
        cin>>n>>m;
        if((n == -1) && (m == -1))
            break;
        res = 0;
        for(i=0; i<n; i++){
            cin>>aux;
            res += (aux * m) * (n-i);
        }
        cout<<res<<endl;
    }

    return 0;
}
