#include <iostream>
#include <vector>
#include <set>
#include <math.h>
#include <bits/stdc++.h>
#include <cstring>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m=0;
    float k;
    cin>>n>>k;

    float arr[n],maxe=0,avg;

    for(int i=0;i<n;i++)
        cin>>arr[i];

    for(int i=0;i<n;i++)
    {
        float sum = 0;
        m=0;
        for(int j=i;j<n;j++)
        {
            m++;
            sum+=arr[j];
            if(m>=k)
            {
                avg = sum/m;
                maxe=max(maxe,avg);
            }
        }
    }



    printf("%.8f",maxe);
    return 0;
}
