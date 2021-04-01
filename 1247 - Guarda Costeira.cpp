#include <iostream>
#include <math.h>

using namespace std;
int main()
{
    float d, vf, vg;
    while(cin>>d>>vf>>vg)
        ((sqrt(d*d + 144))/vg <= (12/vf)) ? cout<<"S"<<endl : cout<<"N"<<endl;
    return 0;
}
