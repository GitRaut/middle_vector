#include "middle_list.h"

int max_col_sym(vector <int> lst){
    int count = lst.size();
    int max = 0, col = 0;
    for(int i = 0; i < count; i++){
        while(lst[i] != 0){
            col++;
            lst[i] = lst[i] / 10;
        }
        if(col > max){
            max = col;
        }
        col = 0;
    }
    return max;
}

int col_sym(int chisl){
    int col = 0;
    while(chisl != 0){
        col++;
        chisl = chisl / 10;
    }
    return col;
}
