//level 5/10;

#include <iostream>
#include <string.h>
#include <math.h>
#include <algorithm>
#include <stdio.h>
#include <fstream>
using namespace std;

int p,q,r,s,t,u;

float solve_it(float x)
{
    float sol = p*exp(-x)+q*sin(x)+r*cos(x)+s*tan(x)+t*x*x+u;

    return sol;
}

float find_sol()
{
    float mine=1,optimalX; //mine to find closest solution to 0; optimalX is the closest solution to 0
    float sol;
    for(float i = 0;i<=10000;i++)
    {
        sol = fabs(solve_it(i/10000));

        if(sol<mine)
        {
            mine = sol;
            optimalX = i;


        }


    }
    return optimalX/10000.0;
}
int main()
{
    while (scanf("%d %d %d %d %d %d",&p,&q,&r,&s,&t,&u)!=EOF)
    {

        //if both solve_it(1) & solve_it(0) same sign so 0 !∈ solve_it([0:1]) see the picture under the solution;
        if(solve_it(0)*solve_it(1)>0)
            cout<<"No solution\n";
        else
            printf("%.4lf\n",find_sol());
    }
}
//picture link: https://www.dropbox.com/s/o41jo3difl55bse/Screenshot%20from%202019-08-01%2005-44-22.png?dl=0 
