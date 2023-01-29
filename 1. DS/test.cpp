#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    vector<int> b(5, 10);
    for (int i = 0; i < 5; i++)
        v.push_back(i);
    vector<int>::iterator it;
    it = v.begin();
    auto it2 = v.end() - 1;
    cout << "First Value: " << *it << endl;
    cout << "Last Value: " << *it2 << endl;
    cout << "Vector: ";
    for (auto it = v.begin(); it != v.end(); it++)
        cout << *it << " ";
    cout << endl;
    return 0;
}
