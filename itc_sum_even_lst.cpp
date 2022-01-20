#include "middle_list.h"

long itc_sum_even_lst(const vector <int> &lst){
    int count = lst.size();
    long result = 0;
    if(count != 0){
        for(int i = 0; i < count; i += 2){
            result += lst[i];
        }
    }
    return result;
}
