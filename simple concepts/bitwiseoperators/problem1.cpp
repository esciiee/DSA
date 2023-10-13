//given a number return its sum and product of its digits
//sample io
// enter a number: 99
// The sum of the digits are: 18
// The product of the digits are: 81

#include<iostream>
using namespace std;
int main()
{
    int n, remainder;
    cout << "enter a number: ";
    cin >> n;
    int sum = 0, product = 1;
    while (n > 0)
    {   
        remainder = n % 10;
        sum += remainder;
        product *= remainder;
        n /= 10;
    }
    cout << "The sum of the digits are: " << sum << endl;
    cout << "The product of the digits are: " << product << endl;
    return 0;
}