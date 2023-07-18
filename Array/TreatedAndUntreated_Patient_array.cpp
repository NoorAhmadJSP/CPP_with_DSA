#include <iostream>
using namespace std;
main()
{
    int doctor = 7;
    int days;
    cout << "Enter Days : ";
    cin >> days;
    int patients[days];
    int treated_count = 0;
    int untreated_cout = 0;
    int treated;
    int untreated;
    for (int i = 0; i < days; i++)
    {
        cout << "Enter Patients day " << i + 1<<" : ";
        cin >> patients[i];
    }
    for (int i = 1; i <= days; i++)
    {
        if (i % 3 == 0 && untreated_cout > treated_count)
        {
            doctor = doctor + 1;
        }
        if (patients[i - 1] <= doctor)
        {
            treated = patients[i - 1];
        }
        else
        {
            treated = doctor;
        }
        untreated = patients[i - 1] - treated;
        treated_count += treated;
        untreated_cout += untreated;
    }
    cout << "\nTreated Patients : " << treated_count << endl;
    cout << "Untreated patients : " << untreated_cout << endl;
}
