#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a1,a2,b1,b2;
    cin>>a1>>a2>>b1>>b2;
    if ((abs(a2-b2)==abs(a1-b1)) or ((a2==b2)or(a1==b1))){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}