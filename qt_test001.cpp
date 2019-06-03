//
// Created by yhl on 19-5-21.
//

#include "boost/test/minimal.hpp"
#include "boost/format.hpp"
#include <iostream>

//测试主函数，不需要在定义main()
int test_main(int argc, char* argv[])
{
    using namespace boost;
    format fmt("%d-%d");

    //验证fmt对象初始化，不通过继续执行
    BOOST_CHECK(fmt.size() == 0);

    fmt % 12 % 34;

    //验证结果，不通过则不予执行
    BOOST_REQUIRE(fmt.str() == "12-34");

    //打印一条错误信息，继续执行
    BOOST_ERROR("显示一条错误信息");

    fmt.clear();
    fmt % 12;

    try
    {
        std::cout << fmt;
    }
    catch (...)
    {
        BOOST_FAIL("致命错误，测试终止");
    }

    return 0;
}