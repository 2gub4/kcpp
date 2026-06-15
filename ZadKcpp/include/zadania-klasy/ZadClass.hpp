#pragma once

class SampleClass {
    int privateVariable; //domyślnie private nie trzeba dyrektywy

protected:
    int protectedVariable;

public:
    SampleClass();

    int publicVariable;

    void publicInlineFunction() { publicVariable = 1; }

    void definedInside() {
        privateVariable = 2;
        protectedVariable = 3;
    }

    void definedOutside();

    void accessProtectedAndPrivate() const;
};

void runZadClass();