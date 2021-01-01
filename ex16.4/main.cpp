#include <iostream>
#include <vector>
#include <list>
#include <string>

using namespace std;

namespace ch16 {
    template<typename Iterator, typename Value>
    auto find(Iterator first, Iterator last, Value const& value) {
        for (; first != last && *first != value; first++) {
            return first;
        }
    }
}

int main() {
    std::vector<int> v = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    auto is_in_vector = v.cend() != ch16::find(v.cbegin(), v.cend(), 5);
    std::cout << (is_in_vector ? "found\n" : "not found\n");
}