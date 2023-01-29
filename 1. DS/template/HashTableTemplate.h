#ifndef HASHTABLE
#define HASHTABLE
#include "LinkedListTemplate.h"
#include <vector>
#include <iterator>
template <class K, class V>
class HashTable
{
    std::vector<LinkedList<K, V> *> hashMap;
    int getHashValue(K key);
    int size;
    int count;

public:
    HashTable();
    ~HashTable();
    V end();
    void insert(K key, V value);
    void remove(K key);
    V search(K key);
    int getSize();
    int getCount();
};
#endif
