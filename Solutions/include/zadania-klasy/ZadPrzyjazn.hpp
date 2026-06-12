#pragma once

class ClassB;

class ClassA {
    int secretA;
public:
    ClassA();
    void showSecretB(const ClassB& b) const;
    friend class ClassB;
};

class ClassB {
    int secretB;
public:
    ClassB();
    void showSecretA(const ClassA& a) const;
    friend class ClassA;
};

void runZadPrzyjazn();
