#include<iostream>
#include<conio.h>
using namespace std;
class odd_even{
    private:
    int n;
    public:
    void getdata(){
        cout << "Enter a number: ";
        cin >> n;
    }
    void putdata(){
        if (n%2 ==0){
            cout<<"number is even";
        }
        else{
            cout<<"number is odd";
        }
    }
};
int main(){
    odd_even aa;
    aa.getdata();
    aa.putdata();
    getch();
    return 0;
}