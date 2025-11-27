#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    vector<int> vec={1,2,3,4,5,6,7,8,9,10};
    reverse(vec.begin(),vec.end());
    for(int i:vec){
        cout<<i<<endl;
    }
    return 0;
}