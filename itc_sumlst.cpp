#include "middle_list.h"

long itc_sumlst(const vector <int> &lst){
    int count = lst.size();
    long result = 0;
    if(count != 0){
        for(int i = 0; i < count; i++){
            result += lst[i];
        }
    }
    return result;
}
