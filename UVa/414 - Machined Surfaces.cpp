#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
 
int main()
{
 
string s;
int n,space=0,sum=0;
 
while(cin>>n,n){
    cin.ignore();
    int min=25;
    vector<int>x(n);
    for(int i=0;i<n;i++){
        getline(cin,s);
        for(int j=0;j<s.size();j++){
            if(s[j]==' '){space++;}
        }
        if(min>space)min=space;
        x[i]=space;
        space=0;
    }
    for(int i=0;i<n;i++){
        sum+=(x[i]-min);
    }
    cout<<sum<<"\n";
    sum=0;
}
    return 0;
}
