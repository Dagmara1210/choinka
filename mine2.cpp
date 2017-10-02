
#include <iostream>
#include <windows.h>
using namespace std;


int main(int argc, char*argv[])
{
    int wiersz;

    cin>>wiersz;
    for (int i=1;i<=wiersz; i++)
    {
        for(int j=1 ;j<=(wiersz-i)+15 ;j++)
        {

           cout<<" ";
        }
        for(int d=1 ;d<=(2*i)-1 ;d++)


    cout<<" "<<endl;
    }
    return 0;
}
