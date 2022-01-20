#include "middle_list.h"

string itc_join(vector <char> lst, string sep){
    string result = "";
    int count = lst.size();
    if(count != 0){
        for(int i = 0; i < count - 1; i++){
            result += lst[i] + sep;
        }
        result += lst[count - 1];
    }
    return result;
}
