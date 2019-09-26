#include <iostream>
#include <vector>
#include <set>
#include <math.h>
#include <bits/stdc++.h>
#include <cstring>
#include <string>
#include <bits/stdc++.h>
#include <cmath>
#include <stack>

using namespace std;




int main()
{
    int n,q,coin;
    cin>>n>>q;// 2^5 = 2^4 + 2^4;

    int arr[31];
    memset(arr,0,sizeof arr);

    for(int i=0;i<n;i++)
    {
        cin>>coin;
        arr[int(log2(coin))]++;
    }


    int s[q];
    for(int i=0;i<q;i++)
        cin>>s[i];

    int test[31];

    for(int i=0;i<q;i++)
    {
        int sum = 0,num;
        memset(test,0,sizeof test);

        n=s[i];
        while(n>0)
        {
            num = int(log2(n));
            test[num]++;
            n-=1<<num;
        }

        for(int j=30;j>0;j--)
        {
            if(arr[j]>=test[j])
            {
                sum+=test[j];
            }else
            {
                sum+=arr[j];
                test[j-1]+=(test[j]-arr[j])*2;
            }
        }
        if(arr[0]>=test[0])
        {
            sum+=test[0];
        }else
        {
            sum=-1;
        }

            cout<<sum<<endl;
        }


    return 0;
}
