//back tracking
#include <iostream>
#include <vector>
#include <set>
#include <math.h>
#include <bits/stdc++.h>
#include <cstring>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int m;
bool found=0;  //check if solution found
vector <pair<int,int>> pieces; //dominos piecs;
pair <int,int> first,last;    //for last piece and first piece;

void find_sol(int curr)
{
    if(m==0)
    {
        if( curr==last.first )
            found=1;

        return ;
    }

    for(int i=0; i<pieces.size(); i++)
    {

        if(pieces[i].first==curr)
        {

            pair<int,int> curr_piece = pieces[i];

            m--;
            pieces.erase(pieces.begin()+i);
            find_sol(curr_piece.second);
            pieces.push_back(curr_piece);
            m++;

        }else if(pieces[i].second==curr)
        {

            pair<int,int> curr_piece = pieces[i];

            m--;
            pieces.erase(pieces.begin()+i);
            find_sol(curr_piece.first);
            pieces.push_back(curr_piece);
            m++;

        }
    }
}
int main(){

    while(cin>>m&&m!=0)
    {
        found = 0;
        pieces.clear();

        int n;
        cin>>n;

        int x,y;

        cin>>x>>y;
        first.first = x;
        first.second = y;

        cin>>x>>y;
        last.first = x;
        last.second = y;

        for(int i=0;i<n;i++)
        {
            cin>>x>>y;
            pieces.push_back({x,y});
        }

        find_sol(first.first);
        find_sol(first.second);

        if(found)
            cout<<"YES\n";
        else
            cout<<"NO\n";

    }
        return 0;
}
