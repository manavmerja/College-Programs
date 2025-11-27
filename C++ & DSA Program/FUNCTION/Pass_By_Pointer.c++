#include <iostream>
using namespace std;
class MyClass {
public:
int value;
MyClass(int v) {
value = v;
}
void display() const {
cout << "Value: " << value << endl;
}
void setValue(int v) {
value = v;
}
};

void processObject(MyClass* obj) {
if (obj != nullptr) {
obj->setValue(20); // Modifies the original object
obj->display(); // Displays modified value
}
}
int main() {
MyClass obj(10); // Create object with value 10
processObject(&obj); // Pass by pointer (passing address)
obj.display(); // The original object is modified
return 0;
}