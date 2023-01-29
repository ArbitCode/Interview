#ifndef LINKEDLIST
#define LINKEDLIST
#include "../template/LinkedListTemplate.h"
#include <string>
extern template class LinkedList<int, int>;
extern template class LinkedList<std::string, std::string>;
extern template class LinkedList<int, std::string>;
#endif
