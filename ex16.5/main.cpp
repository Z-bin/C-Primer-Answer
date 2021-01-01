#include <iostream>
#include <string>

using namespace std;

template<typename Arr>
void print(Arr const &arr) {
    for (auto const& elem : arr) {
        cout << elem << endl;
    }
}

int main() {
    std::string s[] = { "ssss", "aaa", "ssssss" };
    char c[] = { 'a', 'b', 'c', 'd' };
    int  i[] = { 1 };
    print(i);
    print(c);
    print(s);
}