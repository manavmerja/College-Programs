#include <iostream>
#include <vector>

// int main() {
//     std::vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     std::vector<int>::reverse_iterator it;

//     for (it = vec.rbegin(); it != vec.rend(); it++) {
//         std::cout << *it << std::endl;
//     }

//     return 0;
// }

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (auto it = vec.rbegin(); it != vec.rend(); it++) {
        std::cout << *it << std::endl;
    }

    return 0;
}