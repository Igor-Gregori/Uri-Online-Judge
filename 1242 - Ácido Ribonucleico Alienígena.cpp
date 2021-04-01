#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool doLig(char a, char b);

int main()
{
    string rnaa;
    vector<char> p;
    int lig, i;

    while(cin>>rnaa)
    {
        lig = 0;
        p.clear();

        for(i=0; i<rnaa.length(); i++)
        {
            if(p.size() > 0)
            {
                if(doLig(p.back(), rnaa[i]))
                {
                    lig++;
                    p.pop_back();
                }
                else
                    p.push_back(rnaa[i]);
            }
            else
                p.push_back(rnaa[i]);
        }
        cout<<lig<<endl;
    }

    return 0;
}

bool doLig(char a, char b)
{
    if((a == 'B') && (b == 'S'))
        return true;
    if((b == 'B') && (a == 'S'))
        return true;
    if((b == 'C') && (a == 'F'))
        return true;
    if((a == 'C') && (b == 'F'))
        return true;
    return false;
}
