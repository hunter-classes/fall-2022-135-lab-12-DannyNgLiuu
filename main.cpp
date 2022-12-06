#include <iostream>
#include <vector>
#include "vectors.h"
#include "optimism.h"
#include "fusion.h"
#include "pairwise.h"
void print(std::vector<int> const &input)
{
    for (int i = 0; i < input.size(); i++) {
        std::cout << input.at(i) << ' ';
    }
}

int main() {

std::vector<int> v1{1,2,3};
std::vector<int> v2{4,5};
gogeta(v1, v2);
std::vector<int> temp = sumPairWise(v1, v2);
    print(v1);

    return 0;
}