#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    /* Complex Triangle
    1234554321
    1234**4321
    123****321
    12******21
    1********1
    
for (int i = 1; i <= n; i++)
{
    for (int j = 1; j <= n - i +1; j++)
    {
       cout<<j;
    }
    for (int k = 1; k < i; k++)
    {
        cout<<"**";
    }
    for (int m = n - i +1; m >= 1 ; m--)
    {
        cout<<m;
    }
    cout<<endl; 
}
*/

     /*  Triangle of Numbers
      1
    1 2 1
  1 2 3 2 1  
1 2 3 4 3 2 1
    for (int i = 1; i <= n; i++)
    {
       for (int j = n-i; j > 0; j--)
       {
           cout<<" ";
       }
       for (int k = 1; k <= i; k++)
       {
          cout<<k;
       }
       
       for (int l = i; l > 1; l--)
       {
            cout<<l-1;
       }
       cout<<endl;
       
    }
    */
    

    /* Triangle of Numbers
     1
    23
   456
 78910

    int count= 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j < n; j++)
        {
            cout<<" ";
        }
        for (int k = 1; k <=i; k++)
        {
            cout<<count;
            count++;
        }
        cout<<endl;      
    }
    */
    

    /* Triangle of Number
    1234
     234
      34
       4

    for (int i = 1; i <= n; i++)
    {
        for (int j = i - 1; j > 0; j--)
        {
            cout<<" ";
        }
        for (int k = i; k <= n; k++)
        {
            cout<<k;
        }
        cout<<endl; 
    }
    */

    /* Triangle of Numbers
        1
       22
      333
     4444

    for (int i = 1; i <= n; i++)
    {
        for (int j = n - i; j >0 ; j--)
        {
           cout<<" ";
        }
        for (int k = 1; k <=i; k++)
        {
           cout<<i;
        }
        cout<<endl;
    }
    */

    /* Triangle of Numbers
    1111
     222
      33
       4

    for (int i = 1; i <= n; i++)
    {
        for (int j = i - 1; j > 0  ; j--)
        {
            cout<<" ";
        }
        for (int k = i; k <= n; k++)
        {
           cout<<i;
        }
        cout<<endl;
    }
    */
    
}