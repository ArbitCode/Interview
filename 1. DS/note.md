# Topics

1. Array
2. String
3. Linked list
4. Binary
5. Binary Tree
6. Binary Search Tree
7. Self Balanced Tree
8. Hash Table
9. Stack
10. Queue
11. Graph

---

## Array

Array is collection of objects of same data type and stored at contiguous memory location.

### Dynamic Array

#### vector

`begin(), end(), rbegin(), rend()` => `returns iterator`\
`size()` - Returns no of elements in vector,\
`resize(n)` - resize the container so that it contains n elements,\
`empty()` - returns whether container is empty\
 `at(n)` - returns reference at n,\
`front()`- returns reference front,\
`back()` - returns reference back,\
 `assign()`, assign new value to vector elements by replacing old value example `v.assign(5,10)` fill 10 five times.\
 `push_back()`, `pop_back()`\
 , `insert()`\
 , `erase()`\
 , `swap()`\
 , `clear()`\
 , `emplace()`
 , `emplace_back()`

```CPP
//CPP
#include <bits/stdc++.h>
using namespace std;
int main()
{
    std::vector<int> v;
    std::vector<int> a{1, 2, 3, 4, 5};
    std::vector<int> b(5, 10);
    std::vector<vector<int>> matrix(n, vector<int>(m, 0));
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
```

ArrayList

```java
//JAVA
ArrayList<int> vlist = new ArrayList<int>();
```
