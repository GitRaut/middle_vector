#include "middle_list.h"

string itc_deletesym(string str, char sym){
    int len = itc_len(str);
    string result = "";
    for(int i = 0; i < len; i++){
        if(str[i] != sym){
            result += str[i];
        }
    }
    return result;
}

string itc_rmstrchar(string str, string less){
    int len = itc_len(less);
    for(int i = 0; i < len; i++){
        str = itc_deletesym(str, less[i]);
    }
    return str;
}
