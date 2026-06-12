#pragma once

class Figura {
public:
    virtual ~Figura() = default;

    virtual void narysuj() = 0;
    virtual double obliczObwod() = 0;
    virtual double obliczPole() = 0;
};


class Kwadrat : public Figura {
    double bok;

public:
    Kwadrat(double a);

    void narysuj() override;
    double obliczObwod() override;
    double obliczPole() override;
};


class Trojkat : public Figura {
    double bokA;
    double bokB;
    double bokC;
    double wysokosc;

public:
    Trojkat(double a, double b, double c, double h);

    void narysuj() override;
    double obliczObwod() override;
    double obliczPole() override;
};


class Prostokat : public Figura {
    double szerokosc;
    double wysokosc;

public:
    Prostokat(double w, double h);

    void narysuj() override;
    double obliczObwod() override;
    double obliczPole() override;
};


class Kolo : public Figura {
    double promien;

public:
    Kolo(double r);

    void narysuj() override;
    double obliczObwod() override;
    double obliczPole() override;
    static double dystans(double metryKwadratowe);
};


void runZadMetodyAbstrakcyjne();