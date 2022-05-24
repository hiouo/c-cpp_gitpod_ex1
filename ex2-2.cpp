#include <iostream>

using namespace std;

int main()
{
    double r;
    double p,a;
    cout << " 輸入圓半徑 " << endl;
    cin >> r;
    p = 3.14 * r * 2;
    a = 3.14 * r * r;
    cout << " 圓周長 = " << p <<endl;
    cout << " 圓面積 = " << a <<endl;
    return 0;
}
