#include <iostream>

using namespace std;
int main() {
    int n,k,endline;
    cin>>n>>k;
    endline=0;
    for (int i=1;i<=n;i++)
    {
        endline++;
        cout<<"    ";
    }
    for(int i=1; i<=k;i++){
        if (endline%7!=0)
        {
        cout<<i<<"   ";
        }else{
            cout<<i<<endl;
        }
        endline++;
        }
}
