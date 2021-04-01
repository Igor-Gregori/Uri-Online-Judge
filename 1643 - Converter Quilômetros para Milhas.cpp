#include <iostream>
int vetFib[23];
int vetPos[23];

using namespace std;

int fp(int x, int np = 0);

int main()
{
    vetFib[0] = 1;
    vetFib[1] = 1;
    vetFib[2] = 2;
    vetFib[3] = 3;
    vetFib[4] = 5;
    vetFib[5] = 8;
    vetFib[6] = 13;
    vetFib[7] = 21;
    vetFib[8] = 34;
    vetFib[9] = 55;
    vetFib[10] = 89;
    vetFib[11] = 144;
    vetFib[12] = 233;
    vetFib[13] = 377;
    vetFib[14] = 610;
    vetFib[15] = 987;
    vetFib[16] = 1597;
    vetFib[17] = 2584;
    vetFib[18] = 4181;
    vetFib[19] = 6765;
    vetFib[20] = 10946;
    vetFib[21] = 17711;
    vetFib[22] = 28657;

    int t, x, resp;

    cin>>t;
    while(t--)
    {
        resp = 0;
        cin>>x;
        for(int k = 0; k < 23; k++)
            vetPos[k] = 0;
        fp(x);
        for(int i = 0; i<23; i++)
        {
            if(vetPos[i] != 0)
                resp = resp + vetFib[vetPos[i]-1];
            else
                break;
        }
        cout<<resp<<endl;
    }
    return 0;
}

int fp(int x, int np)
{
    if(x == 0)
        return 0;
    for(int i = 0; i<23; i++)
    {
        if(vetFib[i]>x)
        {
            vetPos[np] = i-1;
            fp(x-vetFib[i-1], np+1);
            break;
        }
        else if(vetFib[i] == x)
        {
            vetPos[np] = i;
            return 0;
        }
    }
    return 0;
}
