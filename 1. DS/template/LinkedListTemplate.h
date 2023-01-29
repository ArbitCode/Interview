#ifndef LINKEDLIST_TEMPLATE
#define LINKEDLIST_TEMPLATE
#include <cstddef>
template <class K, class V>
class LinkedList {
  K key;
  V value;
  LinkedList *next;
  LinkedList *prev;
  public:
  LinkedList(K key, V value) {
    this->key = key;
    this->value = value;
    this->next = NULL;
    this->prev = NULL;
    
  }
  //getter
  K getKey() { return key; }
  V getValue() { return value; }
  LinkedList *getNext() { return next; }
  LinkedList *getPrev() { return prev; }
  //setter
  void setKey(K key) { key = key; }
  void setValue(V value) { value = value; }
  void setNext(LinkedList *node) { next = node; }
  void setPrev(LinkedList *node) { prev = node; }

  // operational methods
  void insert(LinkedList *head, LinkedList *node); // always at last
  LinkedList* search(LinkedList *head, K key);
  void remove(LinkedList *head, K key);
};
#endif
