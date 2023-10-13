#include<iostream>
using namespace std;

bool findUnique(int *arr, int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    if (ans == 0){
        return false;
    }
    return true;
}
        
int main(){
    int t;
    cin >> t;
    while (t > 0) {
        int size;
        int arr[1000];
        cin >> size;
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }
        cout << "answer: " << findUnique(arr, size) << endl;
        t--;
    }
}