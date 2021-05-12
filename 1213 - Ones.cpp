#include <iostream>

using namespace std;

typedef long long int lli;

int main()
{
    lli n, l, c;

    while(cin>>n){
        l = 1;
        c = 1;

        while(l%n != 0){
            l = (10 * l + 1) % n;
            c++;
        }
        
        cout<<c<<endl;
    }
    return 0;
}
