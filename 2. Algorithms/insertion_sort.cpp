//takes an element and place at correct position by swapping all possible swaps
#include<iostream>
using namespace std;
int main(int argc, char **argv){
    int n; cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];
    cout << "Before sort: ";
    for(int i=0; i<n; i++)
        cout << arr[i] << " ";
    //insertion sort
    for (int i = 0; i <= n-1; i++){
        int j = i;
        while(j >= 1 && arr[j] < arr[j-1]) swap(arr[j-1], arr[j]), j--;
    }
        cout << "\n After sort: ";
    for(int i=0; i<n; i++)
        cout << arr[i] << " ";
}
