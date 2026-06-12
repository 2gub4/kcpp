#pragma once

struct KonstruktoryStruct {
    int standardInitVariable;
    int listInitVariable;
    KonstruktoryStruct();
    KonstruktoryStruct(int a, int b);
    ~KonstruktoryStruct();
    void printValues() const;
};

void runZadStructKonstruktor();