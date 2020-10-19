// program to calculate factorial of a number
#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int main()
{
    int n;
    int facto;            //variable declaration
    int factorial(int n); //function defined up

    cout << "Enter number to calculate factorial!" << endl;
    cin >> n;
    facto = factorial(n);
    cout << "factorial of " << n << " is " << facto << endl;
}