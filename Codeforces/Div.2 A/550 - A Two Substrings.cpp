#include <iostream>
#include <vector>
#include <set>
#include <math.h>
#include <bits/stdc++.h>
#include <cstring>
#include <string>
 
using namespace std;
 
int main()
{
    string s;
    cin>>s;
 
    int pos[2] = {0,0}; //check position of AB or BA
 
    for(int i=0;i<s.size()-1;i++)
    {
        if(s[i]=='A' && s[i+1]=='B')
        {
            pos[0]=i;
            pos[1]=i+1;
 
            for(int j=0;j<s.size()-1;j++)
            {
                if(s[j]=='B' && s[j+1]=='A' && j+1!=pos[0] && j!=pos[1])
                {
                    cout<<"YES";
                    return 0;
                }
            }
            break;
        }
    }
 
    pos[0]=0;
    pos[1]=0;
 
    for(int i=0;i<s.size()-1;i++)
    {
        if(s[i]=='B' && s[i+1]=='A')
        {
            pos[0]=i;
            pos[1]=i+1;
 
            for(int j=0;j<s.size()-1;j++)
            {
                if(s[j]=='A' && s[j+1]=='B' && j+1!=pos[0] && j!=pos[1])
                {
                    cout<<"YES";
                    return 0;
                }
            }
            break;
        }
    }
    cout<<"NO";
 
 
    return 0;
}
