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
     int a,b,x; // a=0 && b=1
     cin>>a>>b>>x;



     bool big = a<b,turn;

     if(big)
        turn = 1;
     else
        turn = 0;

     int sum=a+b;

     for(int i=0;i<sum;i++)
     {
        if(x==0)
        {
            turn=!turn;

            while(a!=0&&b!=0)
            {
                cout<<turn;
                if(turn)
                    b--;
                else
                    a--;
            }


            turn = !turn;
            for(int j=0;j<a+b;j++)
                cout<<turn;

            return 0;

        }

        cout<<turn;
        turn = !turn;
        x--;


        if(turn)
            a--;
        else
            b--;
     }
}
