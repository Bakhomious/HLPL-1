#include "../std_lib_facilities.h"

ostream& print_array(ostream& os, int* a, int n)
{
    for (int i = 0; i < n; ++i)
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
    int n = 20;
    int* arr = new int[n];

    // Fill array
    fill(arr, n);

    // Print array
    print_array(cout, arr, n);

    // Deallocation 
    delete[] arr;


    return 0;
}