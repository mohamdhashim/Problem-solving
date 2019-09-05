//backtracing
#include <iostream>
#include <vector>
#include <set>
#include <math.h>
#include <bits/stdc++.h>
#include <cstring>
#include <string>

using namespace std;

vector <int> lst;
vector <int> sol; //current solution in solve(func);

vector<string> sol_set;//the set of all solution found;

int n,t;
void solve(int i,int curr)
{
    if(curr==t)
    {
        string s="";
        for(int j=0;j<sol.size();j++)
        {
            s+=to_string(sol[j]);
            s+="+";
        }

        s=s.substr(0,s.size()-1);

        for(int i=0;i<sol_set.size();i++)//to check if this sol exist or not;
            if(s==sol_set[i])
                return;

        sol_set.push_back(s);

        return;
    }


    if(i==n)
        return;

    if(curr+lst[i]<=t)//to add current index if <=t to curr;
    {

        sol.push_back(lst[i]);
        solve(i+1,curr+lst[i]);
        sol.pop_back();

    }

    solve(i+1,curr);//skip this index


}

int main()
{
    int x;
    while(cin>>t>>n&&n!=0)
    {
        sol_set.clear();
        lst.clear();

        for(int i=0;i<n;i++)
        {
            cin>>x;
            lst.push_back(x);
        }

        solve(0,0);
        printf("Sums of %d:\n",t);

        if(sol_set.empty())
        {
            cout<<"NONE\n";
            continue;
        }


        for(int i=0;i<sol_set.size();i++)
            cout<<sol_set[i]<<endl;



    }

    return 0;
}
