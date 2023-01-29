#include<iostream>
using namespace std;
int main(){
    int n; cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];
    cout << "Before sort: ";
    for(int i=0; i<n; i++) cout << arr[i] <<" ";
    //bubble sort -- push max to end with adjacent swap
    for (int i = n - 1; i >= 1; i--){
        int didSwap = 0;
        for (int j = 0; j < i ; j++)
        {
            if(arr[j]>arr[j+1]) swap(arr[j], arr[j+1]), didSwap = 1;
        }
        if (didSwap == 0)
            break;
    }

        cout << "\nAfter sort: ";
    for(int i=0; i<n; i++) cout << arr[i] <<" ";
    
}
