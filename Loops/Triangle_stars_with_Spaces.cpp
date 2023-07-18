#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
 /* Triangle Pattern with for loop
     * * * *
       * * *
         * *
           *
    for (int i = 1; i <= n; i++)
    {
        for (int j = i - 1; j >=1; j--)
        {
            cout << " ";
        }
        for (int k = i; k <= n; k++)
        {
            cout << "*";
        }
        cout << endl;
    }   
    */

    /* Triangle Print with For Loop
        * * * *
        * * *
        * *
        *

        for (int i = 1; i <= n; i++)
        {
          for (int j = i; j <=n; j++)
          {
            cout<<"* ";
          }
          cout<<endl;

        }
        */

    /*      Triangle Star print with For loop

     *
    **
   ***
  ****
     for(int i= 1; i<=n; i++)
     {
         for(int j=n-i; j>=1; j--)
         {
             cout<<" ";
         }
         for(int k=1; k<=i;k++)
         {
             cout<<"*";
         }
         cout<<endl;
     }
     */

    /*      Stars Print  with While loop

        *
       **
      ***
     ****
        int i = 1;
        while (i <= n)
        {
            int j = 1;
            int space = n - i;
            while (space)
            {
                cout << " ";
                space--;
            }
            while (j <= i)
            {
                cout << "*";
                j++;
            }
            cout << endl;
            i++;
        }
        */
}