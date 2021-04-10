#include <heterovector.hpp>
#include <iostream>

/* Example program

*/
int main() {
    heterovector hetvec;

    hetvec.append(3);
    hetvec.append(1);
    hetvec.append(0);

    for (int i = 0; i < 3; i++) {
        std::cout << hetvec.get<int>(i) << std::endl;
    }

    return 0;
}