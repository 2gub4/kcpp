//
// Created by student on 27.03.2026.
//

#ifndef CPPCLASSES_EXAMPLECLASS_HPP
#define CPPCLASSES_EXAMPLECLASS_HPP


class ExampleClass {
public:
    ExampleClass();
    ExampleClass(int x, int y, int l, int w);
    ExampleClass(int l, int w);
    ~ExampleClass();

    void foo(int bar) const;
    static void returnGlobalCounter();

    static int counter;
private:
    int xLocation;
    int yLocation;
    int length;
    int width;
};



#endif //CPPCLASSES_EXAMPLECLASS_HPP