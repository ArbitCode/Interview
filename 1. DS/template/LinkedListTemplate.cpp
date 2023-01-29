#include "LinkedListTemplate.h"

template <typename K, typename V>
void LinkedList<K, V>::insert(LinkedList *head, LinkedList *node) {
  while (head->getNext() != NULL) {
    LinkedList *next = head->getNext();
    head = next->getNext();
  }
  head->setNext(node);
  node->setPrev(head);
};

template <typename K, typename V>
void LinkedList<K, V>::remove(LinkedList *head, K key) {
    if(head == NULL)
        return;
    LinkedList *temp = search(head, key);
    LinkedList *prevNode = temp->getPrev();
    LinkedList *nextNode = temp->getNext();
    prevNode->next = nextNode;
    nextNode->prev = prevNode;
    delete temp;
}

template <typename K, typename V>
LinkedList<K,V>* LinkedList<K, V>::search(LinkedList *head, K key) {
  LinkedList *temp = head;
  while (temp) {
    if (temp->getKey() == key) {
      return temp;
    }
    temp = temp->getNext();
  }
  return NULL;
}
