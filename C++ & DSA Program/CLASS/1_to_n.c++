#include<iostream>
#include<conio.h>
using namespace std;
class one_to_ten{
    private:
    int n;
    public:
    void getdata(){
        cout << "Enter a number: ";
        cin >> n;
    }
    void putdata(){
        for (int i=1; i<=n;i++){
            cout << i << " ";
        }
    }
};
int main(){
    one_to_ten aa;
    aa.getdata();
    aa.putdata();
    getch();
    return 0;
}