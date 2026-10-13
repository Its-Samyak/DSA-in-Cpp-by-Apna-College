#include<iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=1;i<=n;i++){
        for(int j=n;j>i;j--){
            cout<<"  ";
        }
        for(int k=1;k<=i;k++){
            cout<<k<<" ";
        }
        for(int x=(i-1);x>=1;x--){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}
/*
i = 1 2 3 4
    j = 4 3 2
    j = 4 3
    j = 4
        k =       1
        k =     1 2
        k =   1 2 3
        k = 1 2 3 4
            x = 
            x = 1
            x = 2 1 
            x = 3 2 1
*/
