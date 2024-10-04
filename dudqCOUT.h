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
    Wypisuje wszystkie podane wartoœci ko³o siebiê w konsoli i koñczy siê endl-inem
    a (any) - wartoœæ do wypisania, iloœæ podanych argumentów jest dowolna

    spout(a, a, a..);
    Wypisuje wszystkie podane wartoœci ko³o siebiê oddzielaj¹c je spacj¹ w konsoli i koñczy siê endl-inem
    a (any) - wartoœæ do wypisania, iloœæ podanych argumentów jest dowolna

    enout(a, a, a..);
    Wypisuje wszystkie podane wartoœci ko³o siebiê oddzielaj¹c je enterem i koñczy siê endl-inem
    a (any) - wartoœæ do wypisania, iloœæ podanych argumentów jest dowolna
*/
