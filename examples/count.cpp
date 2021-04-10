#include <heterovector.hpp>
#include <iostream>

/* Example program

*/
int main() {
    heterovector hetvec;

    hetvec.append(3.1);
    hetvec.append(1);
    hetvec.append(0);
    hetvec.append(3.1);
    hetvec.append(3.1);

    std::cout << hetvec.count(3.1) << std::endl;

    return 0;
}