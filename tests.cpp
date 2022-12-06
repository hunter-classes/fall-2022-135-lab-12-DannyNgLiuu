#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "vectors.h"
#include "optimism.h"
#include "fusion.h"
#include "pairwise.h"
#include <vector>

TEST_CASE("task A") {
    std::vector<int> temp = makeVector(4);
    CHECK(temp[0] == 0);
    CHECK(temp[1] == 1);
    CHECK(temp[2] == 2);
    CHECK(temp[3] == 3);
}

TEST_CASE("task B") {
    std::vector<int> v{1, 2, -1, 3, 4, -1, 6};
    std::vector<int> temp;
    std::vector<int> ans{1,2,3,4,6};
    temp = goodVibes(v);
    CHECK(temp == ans);
}

TEST_CASE("task C") {
    std::vector<int> v1{1,2,3};
    std::vector<int> v2{4,5};
    std::vector<int> ans{1,2,3,4,5};
    gogeta(v1, v2);
    CHECK(v1 == ans);
    CHECK(v2.empty());
}

TEST_CASE("task D") {
    std::vector<int> v1{1, 2, 3};
    std::vector<int> v2{4, 5};
    std::vector<int> ans = sumPairWise(v1,v2);
    std::vector<int> temp = {5,7,3};
    CHECK(temp == ans);
}