//
// Created by SnirN on 8/11/2024.
//

#include <vector>


class KataChop02 {
public:
    int chopRecursiveHelper(int targetValue, std::vector<int> &sortedArray, int startIdx, int endIdx) {
        if (startIdx == (endIdx - 1)) {
            return -1;
        }
        int middleIdx = ((endIdx - startIdx) / 2) + startIdx;
        if (sortedArray.at(middleIdx) == targetValue) {
            return middleIdx + 1;
        }
        if (sortedArray.at(middleIdx) > targetValue) {
            return chopRecursiveHelper(targetValue, sortedArray, startIdx, middleIdx);
        } else {
            return chopRecursiveHelper(targetValue, sortedArray, middleIdx, endIdx);
        }
    }

    int chopRecursive(int targetValue, std::vector<int> sortedArray) {
        return chopRecursiveHelper(targetValue, sortedArray, 0, sortedArray.size());
    }


    int chopIteratively(int targetValue, std::vector<int> sortedArray) {
        size_t startIdx = 0, endIdx = sortedArray.size(), middleIdx = 0;

        while (startIdx != endIdx - 1 ) {
            middleIdx = ((endIdx - startIdx) / 2) + startIdx;
            if (sortedArray.at(middleIdx) == targetValue) {
                return middleIdx + 1;
            }
            if (sortedArray.at(middleIdx) > targetValue) {
                endIdx = middleIdx;
            } else {
                startIdx = middleIdx;
            }
        }
        return -1;
    }
};
