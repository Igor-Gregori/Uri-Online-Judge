#include <iostream>

using namespace std;

int num0;
int num1;
int num2;
int num3;
int num4;
int num5;
int num6;
int num7;
int num8;
int num9;

typedef long int li;

li tam(li n);

int main ()
{
    li a, b, d, i, j, res;

    while(cin>>a>>b)
    {
        if((a == 0) && (b == 0))
            return 0;

        num0 = 0;
        num1 = 0;
        num2 = 0;
        num3 = 0;
        num4 = 0;
        num5 = 0;
        num6 = 0;
        num7 = 0;
        num8 = 0;
        num9 = 0;

        for(i = a; i<=b; i++)
        {
            d = 1;
            for(j = 0; j<tam(i); j++)
            {
                res = ((int)(i/d))%10;
                d*=10;

                if(res == 0)
                    num0++;
                else if(res == 1)
                    num1++;
                else if(res == 2)
                    num2++;
                else if(res == 3)
                    num3++;
                else if(res == 4)
                    num4++;
                else if(res == 5)
                    num5++;
                else if(res == 6)
                    num6++;
                else if(res == 7)
                    num7++;
                else if(res == 8)
                    num8++;
                else if(res == 9)
                    num9++;
            }
        }

        cout<<num0<<" "<<num1<<" "<<num2<<" "<<num3<<" "<<num4<<" "<<num5<<" "<<num6<<" "<<num7<<" "<<num8<<" "<<num9<<endl;
    }


    return 0;
}

li tam(li n)
{
    if(n < 10)
    {
        return 1;
    }
    else if(n < 100)
    {
        return 2;
    }
    else if(n < 1000)
    {
        return 3;
    }
    else if(n < 10000)
    {
        return 4;
    }
    else if(n < 100000)
    {
        return 5;
    }
    else if(n < 1000000)
    {
        return 6;
    }
    else if(n < 10000000)
    {
        return 7;
    }
    else if(n < 100000000)
    {
        return 8;
    }
    else if(n < 1000000000)
    {
        return 9;
    }
    else
    {
        return 0;
    }
}
