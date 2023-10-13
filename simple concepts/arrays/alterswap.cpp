#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void alterswap(int arr[], int n){
    int i = 0;
    while(i < n && i!=(n-1)){   
        swap(arr[i], arr[i+1]);
        i += 2; 
    }
}
int main()
{
    int arr[6] = {3,4,5,6,7,8};
    int brr[5] ={-2, 5, 8, 0, 3};

    alterswap(arr, 6);
    alterswap(brr, 5);

    printArray(arr, 6);
    printArray(brr, 5);
    return 0;
}