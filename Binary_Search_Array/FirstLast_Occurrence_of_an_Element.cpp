#include <iostream>
using namespace std;
int first_accourance(int arr[], int size, int key)
{
     int start = 0;
     int end = size - 1;
     int ans;
     int mid = (start + end) / 2;

     while (start <= end)
     {
          if (arr[mid] > key)
          {
               end = mid - 1;
          }
          else if (arr[mid] < key)
          {
               start = mid + 1;
          }
          if (arr[mid] == key)
          {
               ans = mid;
               end = mid - 1;
          }

          mid = (start + end) / 2;
     }
     return ans;
}
int last_accourance(int arr[], int size, int key)
{
     int start = 0;
     int end = size - 1;
     int ans;
     int mid = (start + end) / 2;

     while (start <= end)
     {
          if (arr[mid] == key)
          {
               ans = mid;
               start = mid + 1;
          }
          if (arr[mid] > key)
          {
               end = mid - 1;
          }
          else
          {
               start = mid + 1;
          }
          mid = (start + end) / 2;
     }
     return ans;
}
int main()
{
     int onearr[18] = {3, 4, 5, 6, 7, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 9, 10, 11};
     int firstaccourance = first_accourance(onearr, 18, 8);
     cout << "First accorance of element is : " << firstaccourance << endl;

     int lastaccourance = last_accourance(onearr, 18, 8);
     cout << "last accorance of element is : " << lastaccourance;
     return 0;
}
