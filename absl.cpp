#include <string_view>
#include <iostream>
#include <cstring>


constexpr int mem(std::string_view sv) {
    if constexpr (sv.empty()) {
        return 1;
    }
    else {
        return 2;
    }



}

int main()
{
    std::string_view sv = "quatree";
    auto found = sv.find("tree");
    std::cout << sv << std::endl;
    std::cout << "found=" << found << std::endl;
    const char* a = "asdfasdf";
    const char* b = "asdfasdf";
    const int rc = std::memcmp(a, b, sizeof a);
    std::cout << "rc=" << rc << std::endl;

    return 0;
}
