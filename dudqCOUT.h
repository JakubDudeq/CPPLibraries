#ifndef BETTERCOUT_H
#define BETTERCOUT_H

#include <iostream>

using namespace std;

template <typename T>
void out(const T& arg) {
    cout << arg << endl;
}

template <typename T, typename... Args>
void out(const T& first, const Args&... args) {
    cout << first;
    out(args...);
}

template <typename T>
void spout(const T& arg) {
    cout << arg << " " << endl;
}

template <typename T, typename... Args>
void spout(const T& first, const Args&... args) {
    cout << first << " ";
    spout(args...);
}

template <typename T>
void enout(const T& arg) {
    cout << arg << endl;
}

template <typename T, typename... Args>
void enout(const T& first, const Args&... args) {
    cout << first << endl;
    enout(args...);
}
#endif // BETTERCOUT_H

/*
	/// Dokumentacja
	
    out(a, a, a...);
    Wypisuje wszystkie podane warto�ci ko�o siebi� w konsoli i ko�czy si� endl-inem
    a (any) - warto�� do wypisania, ilo�� podanych argument�w jest dowolna

    spout(a, a, a..);
    Wypisuje wszystkie podane warto�ci ko�o siebi� oddzielaj�c je spacj� w konsoli i ko�czy si� endl-inem
    a (any) - warto�� do wypisania, ilo�� podanych argument�w jest dowolna

    enout(a, a, a..);
    Wypisuje wszystkie podane warto�ci ko�o siebi� oddzielaj�c je enterem i ko�czy si� endl-inem
    a (any) - warto�� do wypisania, ilo�� podanych argument�w jest dowolna
*/
