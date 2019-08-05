    #include <iostream>
    #include <string>
    #include <math.h>
    #include <algorithm>
    #include <stdio.h>
    #include <fstream>
    #include <vector>
    using namespace std;
     
     
    int main()
    {
        int n,m,sum=0;
        cin>>n>>m;
     
        while(max(m,n)>=2&&min(m,n)>0)
        {
            sum++;
            if(m>n)
            {
                m-=2;
                n-=1;
            }else
            {
                n-=2;
                m-=1;
            }
        }
     
        cout<<sum;
    }
