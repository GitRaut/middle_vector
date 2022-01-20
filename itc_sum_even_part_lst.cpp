#include "middle_list.h"

long itc_sum_even_part_lst(const vector <int> &lst){
    int count = lst.size();
    long result = 0;
    if(count != 0){
        for(int i = 0; i < count; i++){
            if(lst[i] % 2 == 0){
                result += lst[i];
            }
        }
    }
    return result;
}
