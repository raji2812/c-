#include<iostream>
using namespace std;

int main()
{
    int num1, num2;

    cout << "values for Number1 and Number2 :";
    cin >> num1 >> num2;

    if (num1 == num2)
    {
        cout << "Number1 and Number2 are equal";
    }

    else
    {
        cout << "Number1 and Number2 are not equal";
    }
}