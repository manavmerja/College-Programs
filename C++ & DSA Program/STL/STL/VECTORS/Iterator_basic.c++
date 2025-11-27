#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::vector<int>::iterator it;

    for (it = vec.begin(); it != vec.end(); it++) {
        std::cout << *it << std::endl;
    }

    return 0;
}