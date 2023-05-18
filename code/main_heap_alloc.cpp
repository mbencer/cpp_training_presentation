#include <iostream>

class Foo {
    public:
    Foo() {std::cout << "Foo ctor" << std::endl;}
    ~Foo() {std::cout << "Foo dtor" << std::endl;}
};

void heap_alloc() {
    Foo* p = new Foo();
    delete p;
}

int main() {
    heap_alloc();
    return 0;
}