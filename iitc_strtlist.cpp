#include "middle_list.h"

int itc_len(string str){
    int len = 0;
    for(int i = 0; str[i] != '\0'; i++){
        len++;
    }
    return len;
}

vector <char> itc_strtlist(string str){
    vector<char> vec;
    int len = itc_len(str);
    for(int i = 0; i < len; i++){
        vec.push_back(str[i]);
    }
    return vec;
}
