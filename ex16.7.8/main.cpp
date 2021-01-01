#include <iostream>
#include <vector>

template<typename T, unsigned size>
constexpr unsigned getSize(const T(&arr)[size]) {
    return size;
}

int main()
{
    std::string s[] = { "sss" };
    std::cout << getSize(s) << std::endl;

    char c[] = "s";
    std::cout << getSize(c) << std::endl;
    // the output is 2, as '\0' is added at the end of the array
    return 0;
}