#include <iostream>
#include <string>
#include <set>
#include <vector>

//reading time : 6
//thinking time: 5
//coding time  : 16
//debug time   : 8


using namespace std;


bool isprime(int n )
{
    if(n==2)
        return 1;
    if(n<2||n%2==0)
        return 0;

    for(int i=3;i*i<=n;i+=2)
        if(n%i==0)
            return 0;

    return 1;
}

bool almostprime(int n)
{
    vector <int> primes ;
    for(int j=2;j<=3000;j++){
        if(isprime(j))
            primes.push_back(j);
    }


    int count=0;
    for(int i=0;i<primes.size();i++)
    {
        if(primes[i]>n)
            break;

        if(n%primes[i]==0)
        {
            count++;
        }
    }


    if(count==2)
        return 1;


    return 0;
}


int main()
{

    int n,count=0;
    cin>>n;

    for(int i=1;i<=n;i++)
        if(almostprime(i))
            count++;

    cout<<count;



    return 0;
}
