#include <iostream>

using namespace std;

int main(){

    int year;
    cout<<"西元年: ";
    cin >> year;
    if((year%4) == 0){
        cout<<"閏年"<<endl;
    }else{
        cout<<"normal year"<<endl;
    }

    return 0;
}
