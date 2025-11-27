#include <iostream>
using namespace std;
class MyClass {
public:
int value;
MyClass(int v) {
value = v;
}
void display() {
cout << "Value: " << value << endl;
}
};

void processObject(MyClass obj) {
obj.value = 20; // Modifies the copy, not the original object
obj.display(); // Displays modified value (only inside function)
}
int main() {
MyClass obj(10); // Create object with value 10
processObject(obj); // Pass by value
obj.display(); // Original object is not modified
return 0;
}