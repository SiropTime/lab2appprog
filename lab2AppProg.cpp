#include <iostream>
#include <string>
#include <stack>

std::string makePalindrome(const std::string& word) {
    std::stack<char> s;
    for (auto const c : word) {
        s.push(c);
    }

    std::string r_string;

    while (!s.empty()) {
        r_string += s.top();
        s.pop();
    }
    std::cout << "Полученный палиндром: " << r_string << std::endl;
    return r_string;
}

bool checkPalindrome(std::string word) {
    if (word == makePalindrome(word)) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    setlocale(0, "");
    std::string word;

    std::cout << "Мальцев Тимофей. Лаба 2.1. Вариант 26" << std::endl;

    std::cout << "Введите слово для проверки на палиндром: ";
    std::cin >> word;

    if (checkPalindrome(word)) {
        std::cout << "Полученное слово является палиндромом!" << std::endl;
    }
    else {
        std::cout << "Полученное слово не является палиндромом!" << std::endl;
    }

    return 0;
}
