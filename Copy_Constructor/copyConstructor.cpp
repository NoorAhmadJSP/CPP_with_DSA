#include <iostream>
using namespace std;
class Copy{
       public:
        int x =4;
        int y = 7;
    void function(int x, int y){
        this->x=x;
        this->y=y;

    }
    Copy(){

    }
    Copy(Copy &noornabi){
        x=noornabi.x;
        y=noornabi.y;
    }
        
}; 

int main(){
    Copy obj;
    cout<<"before call fun"<<obj.x<<" "<<obj.y<<endl;
    obj.function(3,6);
    cout<<"after call fun"<<obj.x<<" "<<obj.y<<endl;
    Copy obj2;
    cout<<"obj2 "<<obj2.x<<" "<<obj2.y<<endl;    
     Copy  obj3(obj);
    cout<<"copy "<<obj3.x<<" "<<obj3.y<<endl;
}