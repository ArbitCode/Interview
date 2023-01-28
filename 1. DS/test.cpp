#include <bits/stdc++.h>
using namespace std;
int main()
{
    std::vector<int> v;
    std::vector<int> a{1, 2, 3, 4, 5};
    std::vector<int> b(5, 10);
    for (int i = 0; i < 5; i++)
        v.push_back(i);
    std::vector<int>::iterator it;
    it = v.begin();
    auto it2 = v.end() - 1;
    std::cout << "First Value: " << *it << std::endl;
    std::cout << "Last Value: " << *it2 << std::endl;
    std::cout << "Vector: ";
    for (auto it = v.begin(); it != v.end(); it++)
        std::cout << *it << " ";
    cout << endl;
    return 0;
}
