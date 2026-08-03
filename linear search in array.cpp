#include<iostream>
using namespace std;
int main()
{
    int a;
    int flight_num[8]={10,51,45,67,25,34,25};
    
    cout<<"\nenter the flight number to search:";
    cin>>a;
    for(int i=0;i<=8;i++)
    {
        if(flight_num[i]==a)
        {
            cout<<"\nflight number="<<a<<" found in flight numbers list";
            break;

        }
    
        else

        {
            cout<<"\nflight number="<<a<<" not exist in flight numbers list";
            break;
        }
    }
        
        return 0;

}
