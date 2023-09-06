// sample io
// Enter the number of rows: 6
// F 
// E F 
// D E F 
// C D E F 
// B C D E F 
// A B C D E F 

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        char ch = 'A' + n - i - 1;
        for (int j = 0; j < i+1; j++)
        {
            cout << ch << " ";
            ch += 1;
        }
        cout << endl;
    }
    
    return 0;
}