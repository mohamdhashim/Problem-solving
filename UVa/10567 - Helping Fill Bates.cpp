#include <bits/stdc++.h>
using namespace std;


int main(){

    string s,ss;
    int q,start=-1,end=-1;

    cin>>s>>q;
    
    for(int sol=0;sol<q;sol++)
    {
        int j=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==ss[j]&&j<ss.size())
            {
                if(!j)
                    start=i;

                end=i;
                j++;
            }
        }

        if(j==ss.size())
            printf("Matched %d %d\n",start,end);
        else
            cout<<"Notmatched\n";
    }
	return 0;
}
