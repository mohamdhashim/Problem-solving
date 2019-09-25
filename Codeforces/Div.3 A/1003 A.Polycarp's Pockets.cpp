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
    int n,nums[100]; //nums: counter array for numbers from 1:100
    cin>>n;
    int coin;

    memset(nums,0,sizeof nums);

    for(int i=0;i<n;i++)
    {
        cin>>coin;
        nums[coin-1]++;
    }


    int max_coin=0;
    for(int i=0;i<100;i++)
        max_coin = max(max_coin,nums[i]);

    cout<<max_coin;
}
