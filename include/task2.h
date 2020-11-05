#include <iostream>
template<typename T>
T averageArr(T* mass,int n){
    T sum = 0;
    for (int i = 0; i  < n; i++) {
        sum += mass[i];
    }
    return sum/n;
}

