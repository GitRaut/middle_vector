#include "middle_list.h"

void itc_pos_neg_separator_lst(const vector <int> &lst, vector <int> &lst1, vector <int> &lst2, vector <int> &lst3){
    int count = lst.size();
    if(count != 0){
        for(int i = 0; i < count; i++){
            if(lst[i] < 0){
                lst1.push_back(lst[i]);
            }
            else if(lst[i] > 0){
                lst3.push_back(lst[i]);
            }
            else{
                lst2.push_back(lst[i]);
            }
        }
    }
}
