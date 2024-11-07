#include <iostream>

using namespace std;

int main()
{
    int n;

    // for (;;)
    // {
    //     cout << "Nhap n = ";
    //     cin >> n;

    //     if (n > 0)
    //     {
    //         break;
    //     }
    // }

    // cout << "Gia tri hop le n = " << n << endl;

    while (true)
    {
        cout << "Nhap n = ";
        cin >> n;

        if (n > 0)
        {
            break;
        }
    }

    cout << "Gia tri hop le n = " << n << endl;
    return 0;
}