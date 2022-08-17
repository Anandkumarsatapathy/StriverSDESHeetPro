// C++ program to sort an array
// with 0, 1 and 2 in a single pass
#include <bits/stdc++.h>
using namespace std;

// Function to sort the input array,
// the array is assumed
// to have values in {0, 1, 2}
void sort012(int a[], int arr_size)
{
    // issma dutch National flag algorithm use kiya haa
    // issma mana teeen pointer ka help saa solve kiya huu
    int low = 0;
    int mid = 0;
    int high = arr_size - 1;
    while (mid >= high)
    {
        if (a[mid] == 0)
        {
            swap(a[mid], a[low]);
            low++;
            mid++;
        }
        if (a[mid] == 1)
        {
            mid++;
        }

        if (a[mid] == 2)
        {
            swap(a[mid], a[high]);
            high--;
        }
    }
}

// Function to print array arr[]
void printArray(int arr[], int arr_size)
{
    // Iterate and print every element
    for (int i = 0; i < arr_size; i++)
        cout << arr[i] << " ";
}

// Driver Code
int main()
{
    int arr[] = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    sort012(arr, n);

    printArray(arr, n);

    return 0;
}

// This code is contributed by Shivi_Aggarwal
