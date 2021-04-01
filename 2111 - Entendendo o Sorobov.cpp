#include <iostream>

using namespace std;

typedef long int li;

li mtz[9][7];

void setColumn(int col, int value);

int main()
{
    li n, aux;
    while(cin>>n)
    {
        aux = 1;

        for(int i=0; i<9; i++)
        {
            setColumn(i, (n/aux)%10);
            aux *= 10;
        }

        for(int j=0; j<7; j++)
        {
            for(int k=8; k>-1; k--)
            {
                cout<<mtz[k][j];
            }
            if(j==1)
                cout<<endl<<"---------";
            cout<<endl;
        }
        cout<<endl;
    }

    return 0;
}

void setColumn(int col, int value)
{
    if(value == 0)
    {
        mtz[col][0] = 1;
        mtz[col][1] = 0;
        mtz[col][2] = 0;
        mtz[col][3] = 1;
        mtz[col][4] = 1;
        mtz[col][5] = 1;
        mtz[col][6] = 1;
    }
    else if(value == 1)
    {
        mtz[col][0] = 1;
        mtz[col][1] = 0;
        mtz[col][2] = 1;
        mtz[col][3] = 0;
        mtz[col][4] = 1;
        mtz[col][5] = 1;
        mtz[col][6] = 1;
    }
    else if(value == 2)
    {
        mtz[col][0] = 1;
        mtz[col][1] = 0;
        mtz[col][2] = 1;
        mtz[col][3] = 1;
        mtz[col][4] = 0;
        mtz[col][5] = 1;
        mtz[col][6] = 1;
    }
    else if(value == 3)
    {
        mtz[col][0] = 1;
        mtz[col][1] = 0;
        mtz[col][2] = 1;
        mtz[col][3] = 1;
        mtz[col][4] = 1;
        mtz[col][5] = 0;
        mtz[col][6] = 1;
    }
    else if(value == 4)
    {
        mtz[col][0] = 1;
        mtz[col][1] = 0;
        mtz[col][2] = 1;
        mtz[col][3] = 1;
        mtz[col][4] = 1;
        mtz[col][5] = 1;
        mtz[col][6] = 0;
    }
    else if(value == 5)
    {
        mtz[col][0] = 0;
        mtz[col][1] = 1;
        mtz[col][2] = 0;
        mtz[col][3] = 1;
        mtz[col][4] = 1;
        mtz[col][5] = 1;
        mtz[col][6] = 1;
    }
    else if(value == 6)
    {
        mtz[col][0] = 0;
        mtz[col][1] = 1;
        mtz[col][2] = 1;
        mtz[col][3] = 0;
        mtz[col][4] = 1;
        mtz[col][5] = 1;
        mtz[col][6] = 1;
    }
    else if(value == 7)
    {
        mtz[col][0] = 0;
        mtz[col][1] = 1;
        mtz[col][2] = 1;
        mtz[col][3] = 1;
        mtz[col][4] = 0;
        mtz[col][5] = 1;
        mtz[col][6] = 1;
    }
    else if(value == 8)
    {
        mtz[col][0] = 0;
        mtz[col][1] = 1;
        mtz[col][2] = 1;
        mtz[col][3] = 1;
        mtz[col][4] = 1;
        mtz[col][5] = 0;
        mtz[col][6] = 1;
    }
    else if(value == 9)
    {
        mtz[col][0] = 0;
        mtz[col][1] = 1;
        mtz[col][2] = 1;
        mtz[col][3] = 1;
        mtz[col][4] = 1;
        mtz[col][5] = 1;
        mtz[col][6] = 0;
    }
}
