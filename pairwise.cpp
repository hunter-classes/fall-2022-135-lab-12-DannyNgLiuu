#include "pairwise.h"

std::vector<int> sumPairWise(const std::vector<int> &v1, const std::vector<int> &v2) {
    std::vector<int> newVec;
    if(v1.size() > v2.size()) {
        for(int i = 0; i < v2.size(); i++) {
            newVec.push_back(v1[i] + v2[i]);
        }
        for(int i = v2.size(); i < v1.size(); i++) {
            newVec.push_back(v1[i]);
        }
    } else {
        for(int i = 0; i < v1.size(); i++) {
            newVec.push_back(v1[i] + v2[i]);
        }
        for(int i = v1.size(); i < v2.size(); i++) {
            newVec.push_back(v2[i]);
        }      
    }
    return newVec;
}