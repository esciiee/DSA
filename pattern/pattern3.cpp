// sample io
// Enter the number of rows: 6
// A 
// B B 
// C C C 
// D D D D 
// E E E E E 
// F F F F F F 
// G G G G G G G 

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    for (int i = 65; i <= n + 65; i++)
    {
        for (int j = 0; j < i-64; j++)
        {
            cout << (char)i << " ";
        }
        cout << endl;
        
    }
    
    return 0;
}