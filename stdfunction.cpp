#include <iostream>
#include <functional>

//包装普通函数
int g_Minus(int i, int j)
{
    return i - j;
}

//包装模板函数
template <class T>
T g_Minus02(T i, T j)
{
    return i - j;
}

//包装lambda表达式
auto g_Minus03 = [](int i, int j){ return i - j;};

//包装函数对象
struct Minus
{
    int operator()(int i ,int j)
    {
        return i - j;
    }
};

int main(int argc,char* argv[])
{
    //函数加不加取地址符&好像都没有什么影响
    std::function<int(int,int)> f = &g_Minus;
    std::cout << f(1,2) << std::endl;

    //函数加不加取地址符&好像都没有什么影响
    std::function<int(int,int)> f2 = &g_Minus02<int>;
    std::cout << f2(2,3) << std::endl;

    //不能加&
    std::function<int(int,int)> f3 = g_Minus03;
    std::cout << f3(4,5) << std::endl;

    //不能加&
    std::function<int(int,int)> f4 = Minus();
    std::cout << f4(5,6) << std::endl;
    return 0;
}