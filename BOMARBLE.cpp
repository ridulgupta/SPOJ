#include<iostream>
using namespace std;
 
main()
{
    unsigned short int n;
    cin>>n;
    while(n!=0)
    {
        unsigned int x=0;
        for(short int t=1; t<=n; t++)
            x+=3*t+1;
        cout<<x+1<<endl;
        cin>>n;
    }
}
 
