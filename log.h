#ifndef LEETCODE_CPP_LOG_H
#define LEETCODE_CPP_LOG_H

#include <iostream>
#include <vector>

template<typename T>
void
message(const T &to_print)
{
    std::cout << to_print << std::endl;
}

template<typename T>
void
message(const std::vector<T> &to_print)
{
    std::cout << '[';
    std::string res;

    for (const T &i : to_print) {
        res += std::to_string(i) + ", ";
    }

    if (!res.empty()) {
        res.pop_back();
        res.pop_back();
    }

    std::cout << res;
    std::cout << ']' << std::endl;
}
#endif /* LEETCODE_CPP_LOG_H */
