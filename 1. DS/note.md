# Topics

1. Array
2. String
3. Hash Table
4. Stack
5. Queue
6. Linked list
7. Binary Tree
8. Binary Search Tree
9. Self Balanced Tree
10. Graph

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
 `insert()`\
 `erase()`\
 `swap()`\
 `clear()`\
 `emplace()`
 , `emplace_back()`

```CPP
//CPP
#include <bits/stdc++.h>
using namespace std;
int main() {
  vector<int> v;
  vector<int> a{1, 2, 3, 4, 5};
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
```

ArrayList

```java
//JAVA
ArrayList<int> vlist = new ArrayList<int>();
```

## String

In CPP\
 `String` is sequences of characters as an object of the class `std::string`. string can be interchanged with Vector of chars vice versa.
 | std::string | char Array |
 |:------------:|:-------------:|
 |A string is class that defines objects that be represented as  stream of characters| simply a array of characters that can be ended by null character|
 |memory is allocated Dynamically|memory is allocated statically|
 |no array decay occurs|there can be array decays|
 |strings are slower when compares to implementation than char array|it is faster|
 |there is a number of built-in function| there is limited built-in function|

## Hash Table </map, dictionary, hashmap>
