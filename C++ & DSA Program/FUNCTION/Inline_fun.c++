#include <iostream>
#include <cstdio>

using namespace std;

inline int square(int x) {
    return x * x;
}

inline int cube(int x) {
    return x * x * x;
}

int main() {
    cout << "Square of 5: " << square(5) << endl;
    cout << "Cube of 5: " << cube(5) << endl;
    getchar();
    return 0;
}