#include "optimism.h"

std::vector<int> goodVibes(const std::vector<int>& v) {
    std::vector<int> q;
    for(int i = 0; i < v.size(); i++) {
        if(v[i] >= 0) {
            q.push_back(v[i]);
        }
    }
    return q;
}