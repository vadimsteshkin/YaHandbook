#include <iostream>
#include <cstdint>

int main() {
    std::uint64_t n;
    std::cin >> n;
    std::uint64_t  res= n * (n + 1) /2 ;
    std::cout <<res<<"\n";
}