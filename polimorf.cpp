#include <iostream>

class A 
{
public:
    virtual void PrintClassName(){std::cout << "Class A" << std::endl;}
    
};

class B : public A
{
public:
    void PrintClassName() override {std::cout << "Class B" << std::endl;}
    
};

class C : public B
{
public:
    void PrintClassName() final {std::cout << "Class C" << std::endl;}
    
};

void DemoPolymorphism(A &obj)
{ 
    obj.PrintClassName();
}

int main()
{ 
    A a;
    B b;
    C c;

    DemoPolymorphism(a); // вызовется метод PrintClassName() класса A
    DemoPolymorphism(b); // вызовется метод PrintClassName() класса B
    DemoPolymorphism(c); // вызовется метод PrintClassName() класса C

    return 0;
}