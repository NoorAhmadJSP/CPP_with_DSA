#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string pasta[5] = {"Mild", "Medium", "Sweet", "Hot", "Zesty"};
    int sold[5];
    int total_sales = 0;
    int highest, lowest;
    string highest_product, lowest_product;
    for (int j = 0; j < 5; j++)
    {
        cout << "How many " << pasta[j] << " sold : ";
        cin >> sold[j];
    }
    cout << endl;
    highest = sold[0];
    lowest = sold[0];
    highest_product = pasta[0];
    lowest_product = pasta[0];
    for (int i = 0; i < 5; i++)
    {
        cout << "Sales of " << pasta[i] << " is : " << sold[i] << endl;
        total_sales = total_sales + sold[i];

        if (highest < sold[i])
        {
            highest = sold[i];           
            highest_product = pasta[i];
            
        }
        if (lowest > sold[i])
        {
            lowest = sold[i];            
            lowest_product = pasta[i];
           
        }
    }
    cout << "\nTotal sales is : " << total_sales << endl;
    cout << "Highest selling product is : " << highest_product << endl;
    cout << "Lowest selling product is : " << lowest_product << endl;

    return 0;
}