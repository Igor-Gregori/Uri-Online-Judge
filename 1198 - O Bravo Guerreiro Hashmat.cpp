#include <iostream>

using namespace std;

typedef long long int lli;

int main()
{
    lli oa, oi, aux;
    while(cin>>oa>>oi){
        aux = oi - oa;
        if(aux < 0)
            cout<<-1*aux<<endl;
        else
            cout<<aux<<endl;
    }

    return 0;
}
