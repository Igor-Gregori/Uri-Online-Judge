#include <iostream>
#include <math.h>

using namespace std;

typedef long long unsigned int llu;

int main()
{
    int c;
    llu n;

    cin>>c;
    while(c--)
    {
        cin>>n;
        cout<<(llu)((-1 + sqrt(1 + 8 * n))/2)<<endl;
    }

    return 0;
}
