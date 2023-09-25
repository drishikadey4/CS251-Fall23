#include "functions.h"
#include <set>
#include<iostream>
using namespace std;

int main()
{
    int N;
    cin>>N;

    int count =0;
    while(N>0)
    {
        N = N/2;
        count++;
    }
    cout<<"loop ran: "<<count<<" times"<<endl;
    return 0;

}

