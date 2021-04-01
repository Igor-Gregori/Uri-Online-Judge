#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>

using namespace std;

class Player
{
public:
    string name;
    int hability;
    int team;

    Player(string pName, int pHability)
    {
        this->name = pName;
        this->hability = pHability;
        this->team = 0;
    }
};

int main()
{
    int n, t, auxT;
    int h;
    string name;
    vector<Player> p;

    cin>>n>>t;
    for(int i=0; i<n; i++)
    {
        cin>>name>>h;
        p.push_back(Player(name, h));
    }

    sort(p.begin(), p.end(), [](const Player& lhs, const Player& rhs)
    {
        return lhs.hability > rhs.hability;
    });

    auxT = 1;
    for(int j=0; j<n; j++)
    {
        p[j].team = auxT;
        auxT++;
        if(auxT > t)
            auxT = 1;
    }

    sort(p.begin(), p.end(), [](const Player& lhs, const Player& rhs)
    {
        int res = strcmp(lhs.name.c_str(), rhs.name.c_str());
        return res < 0;
    });

    for(int k = 1; k<=t; k++)
    {
        cout<<"Time "<<k<<endl;
        for(int l=0; l<n; l++)
        {
            if(p[l].team == k)
            {
                cout<<p[l].name<<endl;
            }
        }
        cout<<endl;
    }

    return 0;
}
