//
// Created by SnirN on 8/4/2024.
//
#include <string>
bool XO(const std::string &str) {
    int numOfX = 0, numOfO = 0;
    for (char idx: str) {
        if (idx == 'X' || idx == 'x') {
            ++numOfX;
        } else if (idx == 'O' || idx == 'o') {
            ++numOfO;
        }
    }
    return (numOfX == numOfO);
}