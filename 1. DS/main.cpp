#include <iostream>
#include "lib/HashTable.h"
// Command: g++ main.cpp lib/HashTable.cpp lib/LinkedList.cpp
void details(HashTable<int, std::string> table){

    std::cout << "count: " << table.getCount() << std::endl;
    std::cout << "size: " << table.getSize() << std::endl;
    return;
}
int main(int argc, char **argv){
    HashTable<int, std::string> table;
    table.insert(0, "Raja");
    table.insert(1, "Ram");
    std::cout << table.search(1) << std::endl;
    details(table);
}
