#include "../std_lib_facilities.h"

ostream& print_array10(ostream& os, int* a)
{
    for (int i = 0; i < sizeof(a); ++i)
    {
        cout << a[i] << ' ';
    }
    cout << '\n';
    return os;
}

void fill (int* a, int size)
{
    int x = 100;
    for (int i = 0; i < size; ++i)
    {
        a[i] = x;
        ++x;
    }
}

int main()
{
    int* arr = new int[10];

    // Fill array
    fill(arr, 10);

    // Print array
    print_array10(cout, arr);

    // Deallocation 
    delete[] arr;


    return 0;
}
