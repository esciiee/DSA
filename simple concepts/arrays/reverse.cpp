#include<iostream>
using namespace std;
int main()
{
    int arr[100000];
    int count = 0;
    cout<< "enter the size of the array";
    cin >> count;
    cout << "Enter the elements of the array";
    for (int i = 0; i < count; i++)
    {
        cin >> arr[i];
    }

    cout << "Before reverse" << endl;

    for (int l = 0; l < count; l++)
    {
        cout << arr[l];
    }
    
    for (int j = 0; j < count/2; j++)
    {
        int temp = arr[j];
        arr[j] = arr[count-(j+1)];
        arr[count-(j+1)] = temp;
    }

    cout << "after reverse" << endl;

    for (int k = 0; k < count; k++)     
    {
        cout << arr[k];
    }
    
    
    
    return 0;
}