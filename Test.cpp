#include "doctest.h"
#include "NumberWithUnits.hpp"
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;
using namespace ariel;

TEST_CASE("Good Check"){
    NumberWithUnits a{2, "km"};
    NumberWithUnits b{2, "km"};
    //a: 2[km] = b: 2[km]
    CHECK(a == b);
    stringstream diff{"700 [ m ]"};
    diff >> a;
    //a: 700 [m] != b: 2[km]
    CHECK(a != b);
    NumberWithUnits c{3, "km"};
    //a: 700 [m] + b: 2[km] != 3[km]
    CHECK(a + b != c);
    //b: 2[km] - a: 700 [m] != 3[km]
    CHECK(b-a != c);
    NumberWithUnits d (4, "km");
    CHECK(2*b == d);
    //a: 700 [m] <= b: 2[km]
    CHECK(a <= b);
    //b: 2[km] > a: 700 [m]
    CHECK(b > a);
    //a: 700 [m] += b: 2[km] == e: 2.7[km]
    NumberWithUnits e (2.7, "km");
    a+=b;
    CHECK(a == e);
    NumberWithUnits f (-2.7, "km");
    //e: 2.7[km] = f: -2.7[km]
    CHECK(f == -e);

    CHECK(a != d);
}
TEST_CASE("Bad Check"){
    NumberWithUnits a{3, "km"};
    NumberWithUnits b{2, "km"};
    //a: 3[km] = b: 2[km]
    bool t = true;
    CHECK((a>b) == t);
    //c: 1[km]
    NumberWithUnits c{1, "km"};
    CHECK((a-=b) == c);
    NumberWithUnits d{3, "km"};
    CHECK((c+=b) == d);
    CHECK((d>b) == t);
    CHECK((2*d < b) == t);
    CHECK((2*b != 2*a) == t);
    NumberWithUnits f{ 2, "kg"};
    CHECK((a!=f) == t);
    CHECK(--f == c);
    CHECK(++a == c);
    CHECK(f-b == c);
    CHECK(a==f);
}
