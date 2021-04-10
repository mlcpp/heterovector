#ifndef _Matrix_hpp_
#define _Matrix_hpp_

#include <iostream>
#include <variant>
#include <vector>

class heterovector {
  private:
    std::vector<std::variant<int, float, double>> vec;

  public:
    void append(std::variant<int, float, double>);
    void clear();
    heterovector copy();
    int count(std::variant<int, float, double>);
    // void extend();
    // void index();
    // void insert();
    // void pop();
    // void remove();
    // void reverse();
    int size();
    // void sort();

    template <typename T>
    T get(int);
    std::variant<int, float, double> &operator[](int);
};

void heterovector::append(std::variant<int, float, double> ele) { vec.push_back(ele); }

void heterovector::clear() { vec.clear(); }

heterovector heterovector::copy() {
    heterovector new_hetvec;
    new_hetvec.vec = vec;

    return new_hetvec;
}

int heterovector::count(std::variant<int, float, double> val) {
    int counter = 0;
    for (auto i : vec)
        if (i == val)
            counter++;

    return counter;
}

int heterovector::size() { return vec.size(); }

template <typename T>
T heterovector::get(int index) {
    return std::get<T>(vec[index]);
}

std::variant<int, float, double> &heterovector::operator[](int index) { return vec[index]; }

#endif /* _Matrix_hpp_ */