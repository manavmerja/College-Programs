#include<iostream>
#include<vector>
using namespace std;
int inlineSearch(const vector<int>& vec,int target){
    for(int i=0;i<vec.size();i++){
        if(vec[i]==target){
            return i;
        }
    }
    return -1;
}
int main(){
    vector<int> vec={1,2,3,4,5,6,7,8,9,10};
    int target=5;
    int result=inlineSearch(vec,target);
    if(result==-1){
        cout<<"Element found in the vector at: "<<target <<endl;
    }
    else{
        cout<<"Element found at index "<<result <<endl;
    }
    return 0;
}