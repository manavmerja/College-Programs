#include<iostream>
#include<algorithm>
using namespace std;
void modify (int *arr){
    rotate(arr,arr+3,arr+5);
        rotate(arr,arr+2,arr+4);
}

int main(){
    int iarr[5];
    for(int i=0;i<5;i++){
        *(iarr+i) = i+1;
    }
    modify(iarr);
    for(int i=0;i<5;++i){
        cout<<*(iarr + i)<<" ";
    }
    return 0;
}
