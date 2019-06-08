#include <iostream>

using namespace std;

int main()
{
    int a,n,count=0;
    cin>>n>>a;
    int x[n];
    for(int i=0;i<n;i++){
        cin>>x[i];
    }

    int m=a-1;
    if(a>n/2){
        for(int i=0;i<a;i++){
            if((m+i)<n){
                if(x[m-i]==x[m+i]){
                    if(x[m-i]==1){
                            if(i==0){count++;}
                            else{count=count+2;}
                    }
                }
            }else if(x[m-i]==1){
            count++;
            }
        }
    }else{
    for(int i=0;i+m<n;i++){
        if((m-i)>=0){
            if(x[m-i]==x[m+i]){
                 if(x[m-i]==1){
                            if(i==0){count++;}
                            else{count=count+2;}
                    }
            }
        }else if(x[m+i]==1){
        count++;
        }
    }
    }
    cout<<count;
    return 0;
}
