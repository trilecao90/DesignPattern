#include <stdio.h>
#include "test.h"

TestIf& TestIf::getInstance() {
    return Test::getInstance();
};

Test& Test::getInstance() {
    static Test inst;
    return inst;
};

TestIf::~TestIf() {
    printf("TestIf class destructed\n");
};

Test::~Test() {
    printf("Test class destructed\n");
};

void Test::func() {
    printf("Hello World\n");
};