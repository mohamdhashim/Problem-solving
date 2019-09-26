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

    vector<int>test;
    for(int i=0;i<q;i++)
    {
        test.clear();

        int arr2[31];
        copy(begin(arr),end(arr),begin(arr2));

        n=s[i];
        while(n>0)
        {
            test.push_back(int(log2(n)));
            n-=1<<test[test.size()-1];
        }

        int mine = 0;

            while(!test.empty())
            {
                if(test[test.size()-1]<0)
                {
                    mine=-1;
                    break;
                }
                if(arr2[test[test.size()-1]]>0)
                {
                    arr2[test[test.size()-1]]--;
                    test.pop_back();
                    mine++;

                }else
                {
                    int temp = test[test.size()-1];
                    test.pop_back();

                    test.push_back(temp-1);
                    test.push_back(temp-1);
                }

            }
            cout<<mine<<endl;
        }


    return 0;
}
