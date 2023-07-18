#include <iostream>
using namespace std;
main()
{

    string temperature, humidity;
    cout<<"Enter temprature :";
    cin>>temperature;
    cout<<"Enter humidity : ";
    cin>>humidity;

    if(temperature == "cold"){
        if(humidity == "dry"){
            cout<<"Play basket ball"<<endl;

        }
        else{
            cout<<"Watch tv";
        }

    }
    else {
        if(humidity == "dry"){
            cout<<"Play tennis"<<endl;

        }
        else{
            cout<<"Watch tv";
        }

    }


}


