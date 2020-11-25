#include <iostream>

using namespace std;

int main()
{
    int x;
    cin>>x;
    int firstEvenFibonaci = 0;
    int secondEvenFibonaci = 2;
    cout<<firstEvenFibonaci<<" "<<secondEvenFibonaci;
    int nfibo=2;
    while(nfibo<x){
        nfibo=4*secondEvenFibonaci + firstEvenFibonaci;
        firstEvenFibonaci = secondEvenFibonaci;
        secondEvenFibonaci = nfibo;
        if(nfibo<=x) cout<<" "<<nfibo;
    }

    return 0;
}
