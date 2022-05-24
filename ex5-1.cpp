#include <iostream>

using namespace std;
//我稍微改了點
int main()
{
    int i, j, x;
    cin >> x;
    for(i=1 ; i<=x; i=i+1)
    {
        for(j=1 ; j<=x ; j=j+1)
        {
            cout << i << "*" << j << "=" << i*j << " ";
        }
        cout << endl;
    }

    return 0;
}
