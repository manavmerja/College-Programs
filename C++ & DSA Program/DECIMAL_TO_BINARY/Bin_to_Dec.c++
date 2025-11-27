#include<iostream>
using namespace std;
int bintodec(int binnum){
    int ans=0,pow=1;

    while(binnum >0){
        int reminder= binnum%10;
        ans=ans+reminder*pow;
        
        binnum=binnum/10;
        pow=pow*2;

    }
    return ans;
}
int main(){
    int binnum=110010;
    cout<<bintodec(binnum)<<endl;
    return 0;
}