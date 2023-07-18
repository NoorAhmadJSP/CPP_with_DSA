#include <iostream>
#include <limits.h>
using namespace std;
int power(int a, int b){
    int ans = 1;
    for(int i= 1; i<=b; i++){
        ans = ans * a;   
    }
    return ans;
}
int update(int a){
    a-= 5;
    return a;
}
int main()
{
    int arr[100];
    for (int i = 0; i < 10; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    // int a= 15;
    // update(a);
    // cout<<a;


    // int a, b;
    // cout<<"Enter Number with Power :";
    // cin>>a>>b;
    // int ans= power(a,b);
    // cout<<ans;
    
    return 0;


// Question 10:
//      int amount;
//   cin>>amount;
//   int Rs100 , Rs50 , Rs20 , Rs1;

//   switch(1)
//   {
//       case 1: Rs100=amount/100;
//               amount=amount%100;
//               cout<<"No of 100 Rupee ="<<Rs100<<endl;
              
         
//       case 2: Rs50=amount/50;
//               amount=amount%50;
//               cout<<"No of 50 Rupee ="<<Rs50<<endl;
              

//       case 3: Rs20=amount/20;
//               amount=amount%20;
//               cout<<"No of 20 Rupee ="<<Rs20<<endl;
               

//       case 4: Rs1=amount/1;
//               amount=amount%1;
//               cout<<"No of 1 Rupee ="<<Rs1<<endl; 
          
//            }

// Question 9:
    // int sum = 0;
    // while (n != 0)
    // {
    //     int reminder = n % 2;
    //    sum = ((sum * 10) + reminder);
    //    n = n/2;
      
    
    // Question 8:
    // int modulus;
    // int sum = 0;
    // while (n>0)
    // {
    //     modulus = n%10;
    //     if ((sum> INT_MAX/10) || (sum<INT_MIN/10))
    //     {
    //         cout<< 0;
    //         return 0;
    //     }

    //     sum= (sum*10)+modulus;
    //     n= n/10;
    // }
    // cout<<sum;

    // Question 1:
    // int a = 1;
    // int b = a++;
    // int c = ++a;
    // cout << b<<endl;
    // cout << c;

    // Question 2:
    // int number = 3;
    // cout << (25 * (++number));

    // Question 3:
    // int a = 1;
    // int b = 2;
    // if (a-- > 0 && ++b > 2)
    // {
    //     cout << "Stage1 - Inside If "<<endl;
    // }
    // else
    // {
    //     cout << "Stage2 - Inside else ";
    // }
    // cout << a << " " << b << endl;

    // Question 4:
    // int a, b = 1;
    // a = 10;
    // if (++a)
    // {
    //     cout << b;
    // }
    // else
    // {
    //     cout << ++b;
    // }

    // Question 5:
    // for (int i = 0; i <=5; i++)
    // {
    //   cout<<i<<" ";
    //   i++;
    // }

    // Question 6:
    // for (int i = 0; i <=5; i--)
    // {
    //   cout<<i<<" ";
    //   i++;
    // }

    // Question 7:
    // for (int i = 0; i <= 15; i += 2)
    // {
    //     cout << i << " ";
    //     if (i & 1)
    //     {
    //         continue;
    //     }
    //     i++;
    // }

    // for (int i=0; i < 5; i++)
    // {
    //    for (int j = i; j <= 5; j++)
    //    {
    //     cout<<i<<" "<<j<<endl;
    //    }

    // }
}