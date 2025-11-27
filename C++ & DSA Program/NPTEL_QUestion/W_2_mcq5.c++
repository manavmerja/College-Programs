#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> cVAC(3,-1);
    for(int i=0;i<3;i++)
        cVAC[i] = (i+1)*10;
        cVAC.resize(3);
        cVAC.resize(3,110);
        for(int i=0;i<3;i++)
        cVAC.push_back((i+1)*20);
        for(int i=0;i<cVAC.size();i++)
        cout<<cVAC[i]<<" ";
        return 0;
    }
