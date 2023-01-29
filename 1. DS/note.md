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

requirement: dictionary operations INSERT, SEARCH and DELETE.

Although searching for an element in the hash table can take as long as searching for an element in the Linked list O(n) time in worst case scenario. under reasonable assumptions the average time to search for an element in hash table is O(1).

A hash table generalizes the simpler notation of an ordinary array.

we take advantage of  direct addressing when we can afford to allocate an array that has one position for every possible key.

### Hash in Deep

`implement hash table`

1. Do no ask generally, if asked we can use division method for hashing and linear chaining if collisions are detected.
2. unordered_map<int, int> takes `O(1)` in average and best case while `O(n)` is worst case.
3. map<int,int> takes `O(log(n))` in best, average and worst case since ti uses Self Balanced Tree and Binary search.
4. Linear chaining can be implemented using Linked List and stored in sorting.
5. `unordered_map` is limited to some of basic data structures but `map` can be used with any data structure.
6. For `Character hashing` use Array Hashing since no of ASCII characters is 256. `number: [0 -> 48,9-> 57], ['A' -> 65, 'Z' -> 90], ['a' -> 97 'z' -> 122]`

```None
Hash(k) = k mod n;
[0]->[8]->[10]
[1]->[1]
[2]
[3]->[5]->[12]
[4]
[5]->[1]
```

```CPP
  map<int,int> mp;
  unordered_map<int,int> mp;
```

## Stack

`FIFO`

## Queue

`LIFO`

## Linked List

[1|&]->[2|&]->[3|&]->[4|&]->[5|&]->[6|&]->NULL

## Binary Tree

## Trie

## Radix Tree

## Heaps

## LCA

## Union

## Segment Tree

## Binary Index Tree

## Binary Search Tree

## Self Balance Tree

## Graph
