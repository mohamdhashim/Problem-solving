//bitwise
//permutations

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n,m;
    while(cin>>n)
    {
        int sum=0,max_sum=0;
        vector<int> curr,sol;

        cin>>m;

        int arr[m];

        for(int i=0;i<m;i++)
            cin>>arr[i];


        for(int i=0;i<(1<<m);i++)
        {
            for(int j=0;j<m;j++)
            {
                if((i>>j)&1)
                {
                    if(sum+arr[j]>n)
                        break;

                    sum+=arr[j];
                    curr.push_back(arr[j]);

                }
            }

            if(sum>max_sum&&sum<=n)
            {
                max_sum=sum;
                sol.clear();

                sol=curr;

            }

            curr.clear();
            sum=0;

        }


       for(int i=0;i<sol.size();i++)
            cout<<sol[i]<<" ";

        printf("sum:%d\n",max_sum);
    }
    return 0;
}
