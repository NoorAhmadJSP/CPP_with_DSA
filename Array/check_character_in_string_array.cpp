#include <iostream>
using namespace std;
main()
{
    // string word = "C++";
    // char word[] = "C++";
    // char word[100] = "C++";

    // char word[] = {'C', '+', '+','\0'};

    // for (int i = 0; word[i] != '\0' ; i++)
    // {
    //  cout << word[i];
    // }

    // cout << word[3];

    // cout << '\0';
  
    string sentence;
    cout<<"Enter any sentence : ";
    // cin>>sentence;
    getline(cin, sentence); //This function is using for space words;
    cout << sentence;
    
}