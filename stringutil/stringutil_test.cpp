#include "cpputil/stringutil/stringutil.h"
#include <gtest/gtest.h>

int main() {
    return concat("12", "ab") != "12ab";
    return 1; //0 pass;1 true
}
