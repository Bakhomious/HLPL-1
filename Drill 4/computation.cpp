#include <iostream>
using namespace std;


int main ()
{
    double a = 0.0, b = 0.0;

    cout << "Enter 2 numbers: \n";

    while (cin >> a >> b)
    {
        
        if (a > b) 
        { 
            cout << "The smaller value is: " << b << '\n';
            cout << "The larger value is: " << a << '\n';
            
        }

        else if (a < b) 
        {
            cout << "The smaller value is: " << a << '\n';
            cout << "The larger value is: " << b << '\n';
        }

        else cout << "a and b are equal.\n";

        if (abs(a - b) <= 0.01 && abs(a - b) > 0) 
        cout << "a and b are almost equal.\n";
        
    }

    return 0;
}