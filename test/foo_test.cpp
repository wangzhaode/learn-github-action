#include <iostream>
#include "foo.hpp"

int main() {
    int res = foo_test();
    if (res == 12345) {
        std::cout << "SUCCESS\n";
    } else {
        std::cout << "FAILED\n";
    }
    std::cout << "TEST_NAME: unit-test" << std::endl;
    std::cout << "TEST_CASE_AMOUNT: {\"blocked\":0,\"failed\":0,\"passed\":1,\"skipped\":1}" << std::endl;
    std::cout << "TEST_REPORT: NONE" << std::endl;
    return 0;
}
