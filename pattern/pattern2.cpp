// sample io
// Enter the number of rows: 7
//       1 
//      2 3 
//     4 5 6 
//    7 8 9 10 
//   11 12 13 14 15 
//  16 17 18 19 20 21 
// 22 23 24 25 26 27 28 
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    int x = 1;
    for (int i = 0; i < n; i++)
    { 
        for (int k = 0; k < n-i-1; i++)
        {
            cout << " ";
        }
              
        for (int j = 0; j < i+1; j++)
        {
            cout << x << " ";
            x++;
        }
        cout << endl;
    }
    
    return 0;
}