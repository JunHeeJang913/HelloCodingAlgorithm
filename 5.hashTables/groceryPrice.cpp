//map컨테이너 공부필요!

#include <iostream>
#include <unordered_map>
#include <string>
#include <utility>

using std::cout;
using std::endl;

int main() {
    std::unordered_map<std::string, float> book = {
        {"apple", 0.67},
        {"milk", 1.49},
        {"avocado", 1.49}
    };

    // print book
    for (std::pair<std::string, float> pair : book) {       //범위기반 반복문
        cout << pair.first << ": " << pair.second << "$" << endl;
    }
}