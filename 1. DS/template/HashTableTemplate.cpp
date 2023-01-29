#include "HashTableTemplate.h"
#include <cstddef>
template <class K, class V>
HashTable<K, V>::HashTable()
{
    hashMap.clear();
    size = 0;
    count = 0;
}

template <class K, class V>
HashTable<K, V>::~HashTable() {}

template <class K, class V>
int HashTable<K, V>::getHashValue(K key) {
  return (int)key;
}

template <class K, class V>
void HashTable<K, V>::insert(K key, V value) {
    LinkedList<K, V> *item = new LinkedList<K, V>(key, value);
    // key is not present in the list
    if(key < size && hashMap[key] != NULL)
    {
        LinkedList<K, V> *head = hashMap[key];
        head->insert(head, item);
        count++;
    }
    else{
        hashMap.push_back(item);
        size++;
        count++;
    }
}

template <class K, class V>
void HashTable<K, V>::remove(K key) {
    if (hashMap[key] != NULL) {
        LinkedList<K, V> *head;
        LinkedList<K, V> *next = head->getNext();
        if (next == NULL){
            size--;
            count--;
            hashMap[key] = NULL;
            return;
        }
        head->remove(head, key);
        count--;
    }
    return;
}

template <class K, class V>
V HashTable<K, V>::search(K key) {
  if (hashMap[key] == NULL) {
        return "Not found";
  } else {
    LinkedList<K, V> *head = hashMap[key];
    LinkedList<K, V> *item = head->search(head, key);
    return item->getValue();
  }
}

template <class K, class V>
int HashTable<K, V>::getSize(){
    return size;
}

template <class K, class V>
int HashTable<K, V>::getCount()
{
    return count;
}
