#include <iostream>
using namespace std;
#define MAX 100

int main()
{
    int arr[MAX];
    int n, i, j, k;
    int temp;

    //read total number to be entered by user and is unde valid range i.e. 100
    cout << "Enter number of element to sort: ";
    cin >> n;

    //Check Bound
    if (n < 0 || n > MAX)
    {
        cout << "OOPS! Number out of bound, please enter valid number upto 100" << endl;
        return -1;
    }

    //Read n elements
    for (i = 0; i < n; i++)
    {
        cout << "Enter element [" << i + 1 << "]";
        cin >> arr[i];
    }

    //Print unsorted entered element
    cout << "UnOrdered number is:" << endl;

    for (i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;

    //Sorting 😉
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    //print sorted arrray elements (Cool,😉)
    cout << "Sorted (Aescending Order) Array Elements:" << endl;
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;

    //Finally finish Program 😌
    return 0;
}