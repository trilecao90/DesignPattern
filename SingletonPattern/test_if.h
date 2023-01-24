#ifndef TEST_IF_H
#define TEST_IF_H

class TestIf {
public:
    virtual ~TestIf();
    static TestIf& getInstance();
    virtual void func() = 0;
};

#endif