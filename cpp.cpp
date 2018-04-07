#include <iostream>
#include <cstring>

using namespace std;

#define MAX 999
int main()
{
    int n;
    cin >> n;
    int i = 2, k;
    int arr[MAX];
    arr[0] = 1;
    arr[1] = 1;
    for(i = 2; i < n; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
        if(arr[i - 1] > n)
        {
            cout << arr[i - 1] << endl;
            break;
        }

    }
    cout << arr[i - 1] << endl;

    if(arr[i] == n)
    {
        cout << "Thuoc day Fibonacci\n";
        for(k = 0; k < i; k++)
        {
            cout << arr[k] << " ";
        }
    }
    else
    {
        cout << "Khong thuoc day Fibonacci";
    }

    return 0;
}
