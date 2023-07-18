#include <iostream>
using namespace std;

bool lenght(string key)
{
    bool boo = true;
    if (key.size() % 2 == 0)
    {
        boo = true;
    }
    else
    {
        boo= false;
    }
    return boo;
}

int main()
{
    string word;
    cout << "Enter any sentence : ";
    cin >> word; 
    if(lenght(word)== 1){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    return 0;
}