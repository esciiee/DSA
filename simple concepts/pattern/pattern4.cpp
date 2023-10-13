// sample io
// Enter the number of rows: 6
// A 
// B C 
// D E F 
// G H I J 
// K L M N O 
// P Q R S T U 

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    char ch = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout << ch << " ";
            ch += 1;
        }
        cout << endl;
    }
    
    return 0;
}