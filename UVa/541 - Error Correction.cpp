#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <stdio.h>
using namespace std;
 
int main()
{
    int n;
    while(cin>>n,n){
 
        int x[n][n];
        int sum=0;//sum for each row or column
        int countr=0,countc=0;//count how many rows and columns sum don't even
        int r,c;//in case changing bit x[r][c]
 
        for(int i=0;i<n;i++){
            sum=0;
            for(int j=0;j<n;j++){
                cin>>x[i][j];
                sum+=x[i][j];
            }
 
            if(sum%2!=0) {countr++; r=i;}
 
        }
 
        if(countr>1){cout<<"Corrupt\n"; continue;}
 
        for(int j=0;j<n;j++){
            sum=0;
            for(int i=0;i<n;i++){
                sum+=x[i][j];
            }
 
        if(sum%2!=0) {countc++; c=j; }
 
        }
        if(countc>1){
                cout<<"Corrupt\n"; continue;
        }else if(countc==0&countr==0){
                cout<<"OK\n"; continue;
        }else{printf("Change bit (%d,%d)\n",r+1,c+1);}
    }
    return 0;
}
