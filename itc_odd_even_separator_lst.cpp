#include "middle_list.h"

void itc_odd_even_separator_lst(const vector <int> &lst, vector <int> &lst1, vector <int> &lst2){
    int count = lst.size();
    if(count != 0){
        for(int i = 0; i < count; i++){
            if(lst[i] % 2 == 0 and lst[i] != 0){
                lst1.push_back(lst[i]);
            }
            else if(lst[i] != 0){
                lst2.push_back(lst[i]);
            }
        }
    }
}
