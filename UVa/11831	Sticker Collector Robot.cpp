/*************************************************************
# by        : mohamd abda alazez hashim                      #
# problem   : 11831	Sticker Collector Robot uva              #
# Time(min) : reading : 10||thinking : 10||coding : 40       #
# level     : 4/10                                           #
*************************************************************/
//graph impelementation
#include <stdio.h>
#include <iostream>

using namespace std;


string dirs="NLSO";

char show_me_direction(char step,char curr)
{
    int i=0;
    for(i;i<4;i++)
        if(dirs[i]==curr)
            break;

    if(step == 'D')
        if(i==3)
            return dirs[0];
        else
            return dirs[i+1];
    else
        if(i==0)
            return dirs[3];
        else
            return dirs[i-1];
}



bool sticker(char a)
{
    return a=='*';
}

int main()
{
    int n,m,s;
    while(cin>>n>>m>>s&&n!=0&&m!=0&s!=0)
    {
        char area[n][m];
        int x,y;//x,y for robot position

        for(int i=0;i<n;i++)
        {

            for(int j=0;j<m;j++)
            {
                cin>>area[i][j];
                if(area[i][j]=='N'||area[i][j]=='O'||area[i][j]=='S'||area[i][j]=='L')
                    x=i,y=j;
            }
        }

        char mov;
        int count=0;

        for(int i=0;i<s;i++)
        {

            cin>>mov;
            if(mov=='F')
            {
                if(area[x][y]=='N')
                {
                    if(x!=0&&area[x-1][y]!='#')
                    {
                        area[x][y]='.';
                        x=x-1;
                        count+=sticker(area[x][y]);
                        area[x][y]='N';

                    }
                }
                else if(area[x][y]=='L')
                {

                    if(y!=m-1&area[x][y+1]!='#')
                    {
                        area[x][y]='.';
                        y=y+1;
                        count+=sticker(area[x][y]);
                        area[x][y]='L';

                    }
                }
                else if(area[x][y]=='S')
                {
                    if(x!=n-1&&area[x+1][y]!='#')
                    {
                        area[x][y]='.';
                        x=x+1;
                        count+=sticker(area[x][y]);
                        area[x][y]='S';

                    }
                }
                else
                {
                    if(y!=0&&area[x][y-1]!='#')
                    {
                        area[x][y]='.';
                        y=y-1;
                        count+=sticker(area[x][y]);
                        area[x][y]='O';
                    }
                }
            }
            else
            { area[x][y]=show_me_direction(mov,area[x][y]);}
        }
        cout<<count<<endl;

    }
    return 0;
}
