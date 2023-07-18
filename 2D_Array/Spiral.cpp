#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<vector<int>> number;
    number = {{1, 2, 3, 4, 5},
              {6, 7, 8, 9, 10},
              {11, 12, 13, 14, 15},
              {16, 17, 18, 19, 20},
              {21, 22, 23, 24, 25}};
    // cout<<"Row "<<number.size()<<" Col "<<number[0].size();
    int startRow = 0;
    int endRow = number.size() - 1;
    int startCol = 0;
    int endCol = number[0].size() - 1;

    while (startRow <= endRow && startCol <= endCol)
    {
        for (int i = startCol; i <= endCol; i++)
        {
            cout << number[startRow][i] << " ";
        }
        startRow++;
        for (int i = startRow; i <= endRow; i++)
        {
            cout << number[i][endCol] << " ";
        }
        endCol--;
        for (int i = endCol; i >= startCol; i--)
        {
            cout << number[endRow][i] << " ";
        }
        endRow--;
        for (int i = endRow; i >= startRow; i--)
        {
            cout << number[i][startCol] << " ";
        }
        startCol++;
    }
    return 0;
}
