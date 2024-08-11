#include "KataChop02.hpp"
#include <iostream>
int main() {

    auto s = KataChop02();
    std::vector<int> v = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int i = s.chopRecursive(11, v);
    printf("Idx is - %d", i);
}
