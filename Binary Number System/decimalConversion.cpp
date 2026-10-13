#include <iostream>
using namespace std;
int decConversion(int n){
    int decNum=0,placeValue=1;
    while(n>0){
        decNum+=(n%10)*placeValue;
        n/=10;
        placeValue*=2;
    }
    return decNum;
}
int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;
    
    cout<<decConversion(n)<<endl;
    return 0;
}