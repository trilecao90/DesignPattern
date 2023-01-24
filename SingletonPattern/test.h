#ifndef TEST_H
#define TEST_H

#include "test_if.h"

class Test : public TestIf {
public:
    ~Test() override;
    static Test& getInstance();
    Test(const Test&) = delete; // copy constructor not allowed
    Test(Test&&) = delete; // move constructor not allowed
    Test& operator=(const Test&) = delete; // copy assignment operator overloading not allowed
    Test& operator=(Test&&) = delete; // move assignment operator overloading not allowed
    void func() override;
private:
    Test() = default;
};

#endif