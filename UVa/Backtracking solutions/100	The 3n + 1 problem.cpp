//back tracking sol
#include <iostream>
#include <vector>
#include <math.h>
#include <set>
#include <stdio.h>
#include <string.h>

using namespace std;
int count = 0;

int cycle(int n)
{

    if (n==1)
        return 1;

    if(n%2!=0)
        return cycle(3*n+1)+1;
    else
        return cycle(n/2)+1;
}
int main()
{

    int i,j;
    while(cin>>i>>j)
    {
        int maxe=0;

        for(int ie=min(i,j);ie<=max(i,j);ie++)
            maxe = max(maxe,cycle(ie));

        printf("%d %d %d\n",i,j,maxe);

    }

    return 0;
}
