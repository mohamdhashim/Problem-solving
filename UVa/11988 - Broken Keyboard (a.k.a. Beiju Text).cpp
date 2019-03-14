#include<iostream>
#include<queue>
#include<set>
#include<stdlib.h>
#include<vector>
#include<bits/stdc++.h>
#include<ctype.h>
#include<stdio.h>
#include<deque>
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    deque <string> line;
    string input;
 
    while(cin >> input && !cin.eof()){
    bool pos=0;  //pos for position 0=front and 1=back;
    string s="";
    for(int i=0;i<input.size();i++){
 
        if((input[i]=='[')&&(i!=input.size()-1)){
            if(pos==0)
                line.push_front(s);
            else
                line.push_back(s);
            s="";
            pos=0;
        }else if((input[i]==']')&&(i!=input.size()-1)){
            if(pos==0)
                line.push_front(s);
            else
                line.push_back(s);
            s="";
            pos=1;
        }else if(input[i]!='['&&input[i]!='[') s+=input[i];
 
    }
 
    if(pos==0)
        line.push_front(s);
    else
        line.push_back(s);
    for(int i=0;i<line.size();i++)
        cout<<line[i];
    cout<<"\n";
    line.clear();
    cin.ignore();
    }
    return 0;
}
