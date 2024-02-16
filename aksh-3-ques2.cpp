#include<iostream>
using namespace std;

int main() 
{
    int t, n, i, j,min_index= 0, z, s = 0, comp = 0, k;
    cout << "Enter the number of test cases" << endl;
    cin >> t;
    for (k = 0; k < t; k++) 
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
        for (i = 0; i < n-1; i++) 
        {
            min_index=i;
            for(j= i+1 ;j < n; j++) 
            {
                if(arr[j] < arr[min_index])
                {
                   min_index = j;
                }
                comp++;
            }
            if(min_index != i)
            {
               swap(arr[i], arr[min_index]);
               s++; 
            }
        }
        cout << "Sorted array:" << endl;
        for (z = 0; z < n; z++) 
        {
            cout << arr[z] << " ";
        }
        cout << endl;
        cout << "Number of comparisons: " << comp << endl;
        cout << "Number of swaps: " << s << endl;
    }
    return 0;
}