/* (if enter n=3)
output :- 1 2 3 = 6
          2 4 6 = 12
          3 6 9 = 18
*/

#include<iostream>
using namespace std;

int main(){
    int n,j,sum=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            cout<<i*j<<" ";
            sum+=j;
        }
        cout<<"= "<<sum<<endl;
    }
    return 0;
}