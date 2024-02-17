#include<iostream>
using namespace std;

int main() 
{
    int t, n, i, j,flag= 0,k,z;
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
        flag=0;
        for (i = 0; i < n ; i++) 
        {
            for(j= i+1 ;j < n; j++) 
            {
                if(arr[j] == arr[i])
                {
                   flag++;
                   break;
                }
            }
        }
        if(flag!=0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}