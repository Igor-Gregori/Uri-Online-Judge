#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, i, j;

    while(true)
    {
        cin>>n;
        if(n==0)
            return 0;

        unsigned long long vet[n];
        for(i=0; i<n; i++)
            cin>>vet[i];

        sort(vet, vet + n);

        for(j=0; j<n; j+=2)
        {
            if(vet[j] != vet[j+1])
                break;
        }
        cout<<vet[j]<<endl;
    }

    return 0;
}
