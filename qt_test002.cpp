//
// Created by yhl on 19-5-21.
//
//这两个宏必须要 我也不知道为什么
#define BOOST_AUTO_TEST_MAIN
#define BOOST_TEST_DYN_LINK

#include <boost/test/unit_test.hpp>

int add(int i, int j);

BOOST_AUTO_TEST_SUITE(minimal_test)

BOOST_AUTO_TEST_CASE(my_test)
{
    BOOST_CHECK(add(2,2) == 5);

    BOOST_REQUIRE(add(2,2) == 4);

    if (add(2,2) != 4)
        BOOST_ERROR("oops!");
    if (add(2,2) != 4)
        BOOST_FAIL("oops!");
    if (add(2,2) != 4)
        throw "oops!";

    BOOST_CHECK_MESSAGE(add(2,2) == 4,"add(...) result: "
    << add(2,2));

    BOOST_CHECK_EQUAL(add(2,2),4);
}

BOOST_AUTO_TEST_SUITE_END()

#include <iostream>
#include "MATH/Util/string.h"
using namespace math;

BOOST_AUTO_TEST_SUITE(minimal_test)

    BOOST_AUTO_TEST_CASE(convert_test)
    {
        BOOST_CHECK(util::convert<int>("12345", false) == 12345);
        BOOST_CHECK(util::convert<int>("23456",true) == 23456);
        BOOST_CHECK(util::convert<int>("34567") == 34567);
    }

BOOST_AUTO_TEST_SUITE_END()


int add(int i, int j)
{
    return i + j;
}