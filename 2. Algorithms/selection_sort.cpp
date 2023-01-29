#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "befor sort ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    // selection sort
    // dry run for
    /*
    4,3,2,1
    1,3,2,4
    1,2,3,4,

    */
    for (int i = 0; i <= n - 2; i++)
    {
        int min = i;
        for (int j = i; j <= n - 1; j++)
            if (arr[j] < arr[min])
                min = j;
        swap(arr[i], arr[min]);
    }
    cout << "\nafter sort ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
