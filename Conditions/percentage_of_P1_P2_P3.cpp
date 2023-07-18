#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int count;
    cout << "Enter count : ";
    cin >> count;
    int number;
    float p1 = 0.00;
    float p2 = 0.00;
    float p3 = 0.00;
    float percentage_p1, percentage_p2, percentage_p3;
    for (int i = 1; i <= count; i++)
    {
        cout << "Enter number " << i << " : ";
        cin >> number;
        if (number % 2 == 0)
        {
            p1 = p1 + 1;
        }
        if (number % 3 == 0)
        {
            p2 = p2 + 1;
        }
        if (number % 4 == 0)
        {
            p3 = p3 + 1;
        }
    }
    percentage_p1 = (p1 / count) * 100;
    percentage_p2 = (p2 / count) * 100;
    percentage_p3 = (p3 / count) * 100;
    cout << fixed << setprecision(2) << "\nPercentage of P1 is : " << percentage_p1 << "%" << endl;
    cout << fixed << setprecision(2) << "\nPercentage of P2 is : " << percentage_p2 << "%" << endl;
    cout << fixed << setprecision(2) << "\nPercentage of P3 is : " << percentage_p3 << "%" << endl;
    return 0;
}
