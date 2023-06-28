#include <iostream>
#include <vector>

using namespace std;
int main()
{
    vector<int> data1;
    int m;
    cin>>m;
    for(int i=0; i<m; i++){
        int number;
        cin>>number;
        data1.push_back(number);
    }
    int n;
    cin>>n;
    vector<int> data2;
    for (int i=0; i<n; i++) {
        int number;
        cin >> number;
        data2.push_back(number);
    }

}
