//tags: data sructure
#include <iostream>
#include<queue>
using namespace std;
 
int main()
{
 
    int n ;
    while(cin>>n,n!=0){
 
        queue <int> ex;
        for(int i=1;i<=n;i++){
            ex.push(i);
        }
 
        cout<<"Discarded cards:";
        while (ex.size()>1){
                int move;
                cout<<" "<<ex.front(); if(ex.size()!=2) cout<<",";
                ex.pop();
                move=ex.front();
                ex.pop();
                ex.push(move);
        }
        cout<<"\nRemaining card: "<<ex.front()<<"\n";
    }
 
 
    return 0;
}
