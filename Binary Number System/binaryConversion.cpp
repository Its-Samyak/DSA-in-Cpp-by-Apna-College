#include <iostream>
using namespace std;
int binConversion(int n){
    int binNum=0,place=1;
    while(n>0){
        binNum+=((n%2)*place);
        n/=2;
        place*=10;
    }
    return binNum;
}
int main()
{
    // int n;
    // cout<<"Enter n : ";
    // cin>>n;
    
    for(int i=0;i<=15;i++){
        cout<<binConversion(i)<<endl;
    }
    return 0;
}
