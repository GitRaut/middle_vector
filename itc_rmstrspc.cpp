#include "middle_list.h"

string itc_rmstrspc(string str){
    string result;
    int len = itc_len(str);
    for(int i = 0; i < len; i++){
        if(str[i] != ' '){
            result += str[i];
        }
    }
    return result;
}
