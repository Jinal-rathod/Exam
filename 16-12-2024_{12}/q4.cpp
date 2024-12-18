/* (if enter n=3)
output :- 1 2 3
          2 4 6
          3 6 9
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<i*j<<" ";
        }
        cout<<endl;
    }
    return 0;
}