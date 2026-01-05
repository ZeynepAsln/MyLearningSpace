#include <iostream>
using namespace std;

int main() {

    int *ptr = new int;
    int *ptr2 = nullptr;

    ptr = 5;

    delete ptr;

    return 0;
}