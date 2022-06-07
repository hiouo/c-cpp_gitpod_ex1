#include <iostream>

using namespace std;

int main()
{
    int x;
    int y;
    int z;
    cin >> x;
    cin >> y;
    cin >> z;
    if((x + y) == z){
        std::cout << "right" << std::endl;
    } else{
        std::cout << "error" << std::endl;
    }
}
