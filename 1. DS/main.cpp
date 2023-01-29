#include <iostream>
#include "lib/HashTable.h"
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
