/* (if entre n=5) 
output :- 1 : 1         |
          2 : 1 2       |
          3 : 1 3       |  sum all row and if sum is even, print the number.
          4 : 1 2 4     |
          5 : 1 5       |
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int sum=0;
        for(int j=1;j<=n;j++){
            if(i%j==0){
                sum+=j;
            }
        }if(sum%2==0){
            cout<<sum;
        }
        cout<<" ";
    }
    return 0;
}