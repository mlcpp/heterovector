#include <heterovector.hpp>
#include <iostream>

/* Example program

*/
int main() {
    heterovector hetvec;

    hetvec.append(3.1);
    hetvec.append(1);
    hetvec.append(0);

    std::cout << hetvec.size() << std::endl;

    hetvec.clear();

    std::cout << hetvec.size() << std::endl;

    return 0;
}