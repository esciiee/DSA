#include<iostream>
using namespace std;
int main()
{
    char operation;
    float a, b, ans;
    cout << "Enter the operation you will to do: ";
    cin >> operation ;
    cout << "Enter a and b: ";
    cin >> a >> b;
    switch (operation){
        case '+': ans = a + b;
                break;
        case '-': ans = a - b;  
                break;
        case '/': ans = a/b;
                break;
        case '*': ans = a * b;
        break;
        case '%': ans =  static_cast<int>(a) % static_cast<int>(b);
                break;
        default : ans = 0;
    }

    cout << ans << endl ;
    
    return 0;
}