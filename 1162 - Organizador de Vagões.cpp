#include <iostream>

using namespace std;
int G_STEP;

void bubbleSort(int *vet, int len);
void bubbleSwap(int *a, int *b);

int main()
{
    int n, l;

    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>l;
        int vet[l];

        for(int j=0; j<l; j++)
            cin>>vet[j];


        G_STEP = 0;
        bubbleSort(&vet[0], l-1);
        cout<<"Optimal train swapping takes "<<G_STEP<<" swaps."<<endl;
    }

    return 0;
}

void bubbleSort(int *vet, int len)
{
    if(len < 1)
        return;

    for(int i=0; i<len; i++)
        if(vet[i] > vet[i+1])
            bubbleSwap(&vet[i], &vet[i+1]);

    bubbleSort(&vet[0], len - 1);
}


void bubbleSwap(int *a, int *b)
{
    G_STEP++;
    int aux = *a;
    *a = *b;
    *b = aux;
}
