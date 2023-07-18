#include <iostream>
using namespace std;
int main()
{
    int array[5][5] = {{1, 2, 3, 4, 5},
                       {6, 7, 8, 9, 10},
                       {11, 12, 13, 14, 15},
                       {16, 17, 18, 19, 20},
                       {21, 22, 23, 24, 25}};
    // int array[3][3] = {{1, 2, 3,},
    //                    {4, 5, 6},
    //                    {7, 8, 9}};

    // In Vector we can find size of row and Col like this..
    // cout<<"Row "<<number.size()<<" Col "<<number[0].size();
    // cout<<"Row "<<number.size()<<" Col "<<number[0].size();
    // int endRow = number.size() - 1;
    // int endCol = number[0].size() - 1;

    int startRow = 0;
    int endRow = 5 - 1;
    int startCol = 0;
    int endCol = 5 - 1;
    while (startCol <= endCol)
    {
        for (int i = endRow; i >= startRow; i--)
        {
            cout << array[i][startCol] << " ";
        }
        startCol++;
    }
}