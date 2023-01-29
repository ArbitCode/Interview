#ifndef HASH_TABLE_INSTANCE
#define HASH_TABLE_INSTANCE
#include "../template/HashTableTemplate.h"
//----------------------------------------------------------------
// HashTableTemplate explicit instantiation declarations
extern template class HashTable<int, std::string>;
extern template class HashTable<std::string, std::string>;
#endif
