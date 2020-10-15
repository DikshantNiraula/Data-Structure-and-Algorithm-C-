#include <iostream>
using namespace std;

int main()
{
    int arr[10], i, n, num, pos;
    int count = 0;

    cout << "Enter array size: ";
    cin >> n;
    cout << "Enter array elements: \n";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter Element to be Searched: \n";
    cin >> num;
    // Search data
    for (i = 0; i < n; i++)
    {
        if (arr[i] = num)
        {
            count = 1;
            pos = i + 1;
            break;
        }
    }
    if (count == 0)
    {
        cout << "\n Element Not Found..!!";
    }
    else
    {
        cout << "\n Element " << num << " Found At Position " << pos;
    }
    return 0;
}