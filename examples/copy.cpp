#include <heterovector.hpp>
#include <iostream>

/* Example program

*/
int main() {
    heterovector hetvec;

    hetvec.append(3);
    hetvec.append(1);
    hetvec.append(0);

    heterovector new_hetvec = hetvec.copy();

    for (int i = 0; i < 3; i++) {
        std::cout << new_hetvec.get<int>(i) << std::endl;
    }

    return 0;
}
