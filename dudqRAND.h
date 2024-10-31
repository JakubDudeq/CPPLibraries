#ifndef BETTERRAND_H
#define BETTERRAND_H


#include <iostream>
#include <random>
#include <cmath>
#include <type_traits>
#include <stdexcept>

using namespace std;


class Rand {
public:
	static unsigned short UShort(int x, int y) {
		if (x < 0) {
			throw invalid_argument("arg[1] must be in <0,inf>");
		}
		random_device rd;
		mt19937 gen(rd());
		uniform_int_distribution<> dist(x, y);
		return dist(gen);
	}
	static short Short(int x, int y) {
		random_device rd;
		mt19937 gen(rd());
		uniform_int_distribution<> dist(x, y);
		return dist(gen);
	}
	static unsigned int UInt(int x, int y) {
		if (x < 0) {
			throw invalid_argument("arg[1] must be in <0,inf>");
		}
		random_device rd;
		mt19937 gen(rd());
		uniform_int_distribution<> dist(x, y);
		return dist(gen);
	}
	static int Int(int x, int y) {
		random_device rd;
		mt19937 gen(rd());
		uniform_int_distribution<> dist(x, y);
		return dist(gen);
	}
	template <typename var>
	static float Float(var min, var max, int precision) {
		if (precision >= 5 || precision < 0) {
			throw invalid_argument("precision must be in <1,4>");
		}
		random_device rd;
		mt19937 gen(rd());
		uniform_real_distribution<> dist(min, max);

		float scale = pow(10, precision);
		return round(dist(gen) * scale) / scale;
	}
	template <typename var>
	static double Double(var min, var max, int precision) {
		if (precision >= 5 || precision < 0) {
			throw invalid_argument("precision must be in <1,4>");
		}
		random_device rd;
		mt19937 gen(rd());
		uniform_real_distribution<> dist(min, max);

		double scale = pow(10, precision);
		return round(dist(gen) * scale) / scale;
	}

};

#endif // BETTERLIST_H

/*

	/// Dokumentacja

	UShort(int a, int b)
	zwraca losowo wygenerowan� liczb� typu unsigned Byte
	a (int) - dolny zakres losowania - musi nale�e� do <0,inf>
	b (int) - g�rny zakres losowania

	Short(int a, int b)
	zwraca losowo wygenerowan� liczb� typu Short
	a (int) - dolny zakres losowania
	b (int) - g�rny zakres losowania

	UInt(int a, int b)
	zwraca losowo wygenerowan� liczb� typu unsigned Int
	a (int) - dolny zakres losowania - musi nale�e� do <0,inf>
	b (int) - g�rny zakres losowania

	Int(int a, int b)
	zwraca losowo wygenerowan� liczb� typu Int
	a (int) - dolny zakres losowania
	b (int) - g�rny zakres losowania

	Float(var a, var b, int c)
	zwraca losowo wygenerowan� liczb� typu Byte
	a (numeric) - dolny zakres losowania - a i b musz� by� tego samego typu
	b (numeric) - g�rny zakres losowania
	c (int) - liczba miejsc po przecinku - musi nale�e� do <1,4>        /// bo nie wiem jak zrobi� wi�cej...

	Double(var a, var b, int c)
	zwraca losowo wygenerowan� liczb� typu Double
	a (numeric) - dolny zakres losowania - a i b musz� by� tego samego typu
	b (numeric) - g�rny zakres losowania
	c (int) - liczba miejsc po przecinku, musi nale�e� do <1,4>



*/