#include "std_lib_facilities.h"

int main ()
{
    double a = 0.0, min = 0.0, max = 0.0;
    bool first = true;
    
    while (cin >> a)
    {
        cout << "a = " << a << endl;

        if (first == true)
        {
            first = false;
            min = a;
            max = a;
            
            cout << "First value entered\n";
        }
    
        else if (a > max)
        {
            cout << "Largest so far\n";
            max = a;
        }

        else if (a < min)
        {
            cout << "Smallest so far\n";
            min = a;
        }


    } 

    return 0;
}