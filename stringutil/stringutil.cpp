#include <iostream>

#include "cpputil/stringutil/stringutil.h"

using namespace std;

/**
 * 字符串拼接
 * @param a
 * @param b
 * @return
 */
string concat(string a, string b) {
    // 字符串拼接
    return a + b;
}

/**
 * 字符串查找
 * @param src
 * @param dest
 * @return
 */
int find(string a, string b) {
    size_t found = a.find(b);
    if (found != string::npos) {
        return found;
    } else {
        return -1;
    }
}