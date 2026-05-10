#include <iostream>
#include <deque>
#include <string>

class Stack {
private:
    std::deque<std::string> data;

public:
    void push(const std::string& val) {
        data.push_back(val);
    }

    std::string pop() {
        std::string val = data.back();
        data.pop_back();
        return val;
    }

    bool empty() const {
        return data.empty();
    }
};

int main() {
    Stack stack;
    std::string rijec;

    while (std::cin >> rijec) {
        stack.push(rijec);
    }

    while (!stack.empty()) {
        std::cout << stack.pop() << "\n";
    }

    return 0;
}