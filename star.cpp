#include <iostream> 
#include <string> 
using namespace std; 
  
int main() 
{ 
    int n; 
    int i,j,k;
  
    cout << "請輸入任一數"; 
    cin >> n ; 
    for( i=1 ; i<= n ; i=i+1 )
    {
        for( j=1 ; j<=(n-i) ; j=j+1 )
        {
            cout<<" ";
        }
        for( k=1 ; k<=((2*i)-1) ; k=k+1 )
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0; 
}