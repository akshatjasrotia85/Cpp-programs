// WAP to demonstrate the use of static data member of a class
#include<iostream>
class MyClass {
public:
    MyClass() {
        m_instanceCount++;
    }

    static int getInstanceCount() {
        return m_instanceCount;
    }

private:
    static int m_instanceCount;
};

// Initialize the static data member outside of the class definition
int MyClass::m_instanceCount = 0;
int main() {
    MyClass obj1,obj2,obj3;

    std::cout << "Number of MyClass objects: " << MyClass::getInstanceCount() << std::endl;

    return 0;
}