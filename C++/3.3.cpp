#include <iostream>
 
int main() {
    int a;
    std::cin >> a;
 
    if ((a%400==0) or ((a%4==0) and (a%100!=0))) {
        std::cout << "YES";
    } else{
        std::cout<<"NO";
    }
}