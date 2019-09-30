#include <iostream>
#include <vector>

using namespace std;

int n,m,sum=0,result=0;
vector <int> sol,tracks,test;

void max_fit(int i,int curr_sum)
{
    if(i==m)
    {

        if(result<=curr_sum)
        {
            sol.clear();
            result = curr_sum;

            for(int j=0;j<test.size();j++)
            {
                sol.push_back(test[j]);

            }
        }

        return ;
    }


    max_fit(i+1,curr_sum);

    if(curr_sum+tracks[i]<=n)
    {
        curr_sum+=tracks[i];
        test.push_back(tracks[i]);

        max_fit(i+1,curr_sum);


        if(!test.empty())
            test.pop_back();
    }
}



int main()
{

    while(cin>>n>>m)
    {
        result=0;
        sol.clear();
        tracks.clear();
        test.clear();


        int x;
        for(int i=0;i<m;i++)
        {
            cin>>x;
            tracks.push_back(x);
        }

        max_fit(0,0);
        for(int i=0;i<sol.size();i++)
            cout<<sol[i]<<" ";

        printf("sum:%d\n",result);
    }
    
    return 0;
}
