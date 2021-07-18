#include<iostream>
using namespace std;

int pay( int hour )
{
    if( hour <= 3 )
    {
        return hour*30;
    }
    else
    {
        return 3*30 + (hour-3)*20;
    }
}

int main()
{
    int n;

    while( cin >> n )
    {
        cout << pay(n) << endl;
    }

    return 0;
}