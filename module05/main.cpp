#include <iostream>
#include <thread>

using namespace std;

class fraction {
private:
    double numerator, denominator;
public:
    fraction(double numerator, double denominator) : numerator(numerator), denominator(denominator) {}

    double getNumerator() const {
        return numerator;
    }

    double getDenominator() const {
        return denominator;
    }

    fraction operator+(const fraction &right) {
        double result_numerator = this->numerator * right.denominator + this->denominator * right.numerator;
        double result_denominator = this->denominator * right.denominator;
        return fraction{result_numerator, result_denominator};
    }

    fraction operator-(const fraction &right) {
        double result_numerator = this->numerator * right.denominator - this->denominator * right.numerator;
        double result_denominator = this->denominator * right.denominator;
        return fraction{result_numerator, result_denominator};
    }

    fraction operator-() {
        double result_numerator = -this->numerator;
        double result_denominator = this->denominator;
        return fraction{result_numerator, result_denominator};
    }

    fraction operator*(const fraction &right) {
        double result_numerator = this->numerator * right.numerator;
        double result_denominator = this->denominator * right.denominator;
        return fraction{result_numerator, result_denominator};
    }

    fraction operator/(const fraction &right) {
        double result_numerator = this->numerator * right.denominator;
        double result_denominator = this->denominator * right.numerator;
        return fraction{result_numerator, result_denominator};
    }

    fraction operator++(int) {
        double result_numerator = this->numerator;
        double result_denominator = this->denominator;
        this->numerator = this->numerator + this->denominator;
        return fraction{result_numerator, result_denominator};
    }

    fraction operator++() {
        this->numerator = this->numerator + this->denominator;
        return *this;
    }

    friend ostream &operator<<(ostream &out, const fraction &f);
};

struct task {

    void operator()(int x, int y, double z) {
        cout << "x: " << x << ", y: " << y << ", z: " << z << endl;
    }
};

ostream &operator<<(ostream &out, const fraction &f) {
    out << "fraction( " << f.numerator
        << "/" << f.denominator
        << " )" << endl;
    return out;
}

int main() {
    fraction f1(1, 2);
    fraction f2(3, 7);
    fraction f3 = f1 + f2;
    cout << f1;
    cout << f2;
    cout << f3;
    fraction f4 = f1 / f2;
    cout << f4;
    fraction f5 = f1 - f2;
    cout << f5;
    fraction f6 = f1 * f2;
    cout << f6;
    fraction f7 = -f1;
    cout << f7;
    thread t(task(), 42, 108, 3.1415);
    t.join();
    cout << "application is done" << endl;
    fraction f8{1, 4};
    fraction f9 = f8++;
    fraction f10 = ++f8;
    cout << f8;
    cout << f9;
    cout << f10;
    return 0;
}
