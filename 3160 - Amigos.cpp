#include <iostream>
#include <string>
#include <vector>
#include <cstring>

using namespace std;


int main()
{
    vector <string> vetAmigos;
    vector <string> vetNovosAmigos;
    string res = "";
    int lastSpace = 0;

    string linhaAmigos;
    getline(cin, linhaAmigos);
    linhaAmigos.append(" ");

    for(int i=0; i<linhaAmigos.length(); i++)
    {
        if(linhaAmigos[i] == ' ')
        {
            vetAmigos.push_back(linhaAmigos.substr(lastSpace, i - lastSpace));
            lastSpace = i+1;
        }
    }

    lastSpace = 0;

    string linhaNovosAmigos;
    getline(cin, linhaNovosAmigos);
    linhaNovosAmigos.append(" ");

    for(int j=0; j<linhaNovosAmigos.length(); j++)
    {
        if(linhaNovosAmigos[j] == ' ')
        {
            vetNovosAmigos.push_back(linhaNovosAmigos.substr(lastSpace, j - lastSpace));
            lastSpace = j+1;
        }
    }

    string amigoIndicado;
    cin>>amigoIndicado;

    if(amigoIndicado == "nao")
    {
        for(int k=0; k<vetAmigos.size(); k++)
        {
            res.append(vetAmigos[k] + " ");
        }
        for(int l=0; l<vetNovosAmigos.size(); l++)
        {
            res.append(vetNovosAmigos[l] + " ");
        }
    }
    else
    {
        for(int k=0; k<vetAmigos.size(); k++)
        {
            if(vetAmigos[k] == amigoIndicado)
            {
                for(int l=0; l<vetNovosAmigos.size(); l++)
                {
                    res.append(vetNovosAmigos[l] + " ");
                }
            }
            res.append(vetAmigos[k] + " ");
        }
    }

    res.pop_back();
    cout<<res<<endl;

    return 0;
}
