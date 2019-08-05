    /*************************************************************
    # by        : mohamd abda alazez hashim                      #
    # problem   : B. Vanya and Lanterns                          #
    # Time(min) : reading : 5||thinking : 10||coding : 10        #
    # level     : 2/10                                           #
    *************************************************************/
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
       int n,l;
       double maxi=0;
       cin>>n>>l;
     
       double arr[n];
       for(int i=0;i<n;i++)
            cin>>arr[i];
     
       sort(arr,arr+n);
     
       for(int i=0;i<n-1;i++)
            maxi=max(maxi,abs(arr[i]-arr[i+1]));
     
     
        maxi = max(max(arr[0],maxi/2.0),max(l-arr[n-1],maxi/2.0));
     
        printf("%0.10lf",maxi);
     
    }
