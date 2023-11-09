#include <iostream>

using namespace std;
int main() {
    int a,i;
    int days_in_months[]={31,28,31,30,31,30,31,31,30,31,30,31};
    cin>>i>>a;
    if ((a%400==0) or ((a%4==0) and (a%100!=0))) {

        days_in_months[1]++;
        cout<<days_in_months[i-1];
    } else{
        cout<<days_in_months[i-1];
    }
}