#include <stdio.h>
#include <iostream>
#include <vector>
#include <mem.h>
#include <algorithm>

using namespace std;

int martian[50001];
bool arr[50001];
int message(int n)
{

    if(arr[n]||martian[n]==0)
        return 0;

    arr[n]=1;

    return 1+message(martian[n-1]);

}
int main()
{
    int t,n,x,y;
    cin>>t;

    for(int test=0;test<t;test++)
    {
        cin>>n;
        memset(martian,0,sizeof martian);

        vector<int> input;
        for(int i=0;i<n;i++)
        {
            cin>>x>>y;
            input.push_back(x);
            martian[x]=y;
        }
        int sol=0,max_sol=0;
        for(int i=0;i<n;i++)
        {

            memset(arr,0,sizeof arr);

            int temp=message(input[i]);

            if(temp>max_sol)
            {
                max_sol=temp;
                sol=input[i];
            }
        }
        printf("Case %d: %d\n",test+1,sol);
    }
    return 0;
}
