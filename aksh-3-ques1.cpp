#include<iostream>
using namespace std;

int main() 
{
    int a, n, i, j, temp = 0, z, s = 0, comp = 0, k;
    cout << "Enter the number of test cases" << endl;
    cin >> a;
    for (k = 0; k < a; k++) 
    {
        cout << "Enter the array limit" << endl;
        cin >> n;
        int arr[n];
        cout << "Enter the array elements" << endl;
        for (z = 0; z < n; z++) 
        {
            cin >> arr[z];
        }
        comp = 0; 
        s = 0; 
        for (i = 1; i < n; i++) 
        {
            temp = arr[i];
            j = i - 1; 
            while (j >= 0 && arr[j] > temp) 
            {
                arr[j + 1] = arr[j];
                j--;
                s++; 
                comp++; 
            }
            arr[j + 1] = temp;
            s++; 
        }
        cout << "Sorted array:" << endl;
        for (z = 0; z < n; z++) 
        {
            cout << arr[z] << " ";
        }
        cout << endl;
        cout << "Number of comparisons: " << comp << endl;
        cout << "Number of shifts: " << s << endl;
    }
    return 0;
}