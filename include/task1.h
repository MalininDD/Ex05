#include <iostream>

bool comparestr(const char* a,const char* b){
    for (int i = 0; i < strlen((const char*)a); i++) {
        if((int)a[i] - (int)b[i] < 0)
            return true;
        else if((int)a[i] - (int)b[i] > 0)
            return false;
    }
    return false;
}

template<typename T>
bool less(T a,T b){
    if(typeid(T) == typeid(const char*)){
        return comparestr((const char*)a,(const char*)b);
        
    }
    if(a < b)
        return true;
    else
        return false;
}
