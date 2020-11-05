#include <iostream>
template <typename T, size_t sizeofmas>
T minArr(T2 (&a)[sizeofmas]){
    T minn = 12312312;
    for (int i = 0; i  < sizeofmas; i++) {
        if(a[i] < minn)
            minn = a[i];
    }
    return minn;
}
