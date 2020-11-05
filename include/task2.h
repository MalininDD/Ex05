#include <iostream>
template<typename T>
T averageArr(int n, T* mass){
    T sum = 0;
    for (int i = 0; i  < n; i++) {
        sum += mass[i];
    }
    T sum/n;
}

