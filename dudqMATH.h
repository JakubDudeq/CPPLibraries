#ifndef BETTERMATH_H
#define BETTERMATH_H

#include <iostream>
#include <cmath>
#include <stdexcept>

using namespace std;

class Math {
public:
    template <typename var>
    static double sqrt(var x) {
        if (x < 0) {
            throw invalid_argument("x must be in (0,inf)");
        }
        return std::sqrt(x);
    }
    template <typename var>
    static double root(var x, var y) {
        if (y == 0) {
            throw invalid_argument("y must be in R\\{0}");
        }
        if (x < 0 && static_cast<int>(y) % 2 == 0) {
            throw invalid_argument("for even numbers x must be in (0,inf)");
        }
        double _x = double(x);
        double _y = double(1 / y);

        return std::pow(_x, _y);
    }
    template <typename var>
    static var abs(var x) {
        if (x >= 0) {
            return x;
        }
        else {
            return -x;
        }
    }
    static double pow(int x, int y) {
        return std::pow(x, y);
    }
    template <typename var>
    static double advPow(var x, var a, var b) {
        double _x = double(x);
        double _a = double(a);
        double _b = double(b);
        return std::pow(_x, (_a / _b));
    }
};

#endif // BETTERMATH_H

/*
    /// Dokumentacja

    (var) Math::abs(var a);
    Zwraca wartoœæ bezwzglêdn¹ z liczby a
    a (numeric)

    (double) Math::sqrt(var a);
    Zwraca pierwiastek kwadratowy z liczby a
    a (numeric) - musi nale¿eæ do (0,inf)

    (double) Math::root(var a, var b);
    Zwraca pierwiastek z liczby a, b-stopnia
    a (numeric)
    b (numeric)

    (double) Math::pow(var a, var b);
    Zwraca a podniesion¹ do potêgi b, - dzia³a tylko na liczbach ca³kowitych
    a (integer)
    b (integer)

    (double) Math::advPow(var a, var b, var c);
    Zwraca a podniesion¹ do potêgi b/c
    a (numeric)
    b (integer)
    c (integer)

*/
