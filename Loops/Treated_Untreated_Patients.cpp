#include <iostream>
using namespace std;
main()
{
    int doctor = 7;
    int days;
    cout << "Enter Days : ";
    cin >> days;
    int daily_patients;
    int treated_count = 0;
    int untreated_cout = 0;
    int treated;
    int untreated;
    for (int i = 1; i <= days; i++)
    {
        cout << "Enter patients day "<<i<<" : ";
        cin >> daily_patients;
        if (daily_patients <= doctor)
        {
            treated = daily_patients;
        }
        if (i % 3 == 0 && untreated_cout > treated_count)
        {
            doctor = doctor + 1;
        }
        else
        {
            treated = doctor;
        }
        untreated = daily_patients - treated;
        treated_count = treated_count + treated;
        untreated_cout = untreated_cout + untreated;
    }
    cout << "\nTreated Patients : " << treated_count << endl;
    cout << "Untreated patients : " << untreated_cout << endl;
}
