#include<iostream>
#include<conio.h>
using namespace std;
class reverse_string{
    private:
    string str;
    public:
    void get_string(){
        cout << "Enter a string: ";
        cin >> str;
    }
    void put_string(){
        int reverse=0;
        while(str>0){
            reverse = reverse*10 + str%10;
            str=str/10;
        }
        cout << "reverse of the string:" << reverse;
    }
};
int main(){
    reverse_string aa;
    aa.get_string();
    aa.put_string();
    getch();
    return 0;
}