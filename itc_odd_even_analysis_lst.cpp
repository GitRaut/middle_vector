#include "middle_list.h"

int max_value(vector <int> lst){
    int count = lst.size(), max = 0;
    if(count == 0){
        return 0;
    }
    else{
        for(int i = 0; i < count; i++){
            if(lst[i] > max){
                max = lst[i];
            }
        }
    }
    return max;
}

int min_value(vector <int> lst){
    int count = lst.size();
    int min = max_value(lst);
    if(count == 0){
        return 0;
    }
    else{
        for(int i = 0; i < count; i++){
            if(lst[i] < min){
                min = lst[i];
            }
        }
    }
    return min;
}

void print_analys(const vector <int> &chet, const vector <int> &nechet){
    int chet_c = chet.size(), max_chet = max_value(chet), min_chet = min_value(chet), sum_ev = itc_sum_even_part_lst(chet), nechet_c = nechet.size(), max_nechet = max_value(nechet), min_nechet = min_value(nechet), sum_odd = itc_sum_odd_part_lst(nechet);
    cout << "List analysis:" << endl << endl;
    cout << "Number of even numbers: " << chet_c << "        " << "Number of odd numbers: " << nechet_c << endl;
    cout << "Maximum even number: " << max_chet << "        " << "Maximum odd number: " << max_nechet << endl;
    cout << "Minimum even number: " << min_chet << "        " << "Minimum odd number: " << min_nechet << endl;
    cout << "Sum of even numbers: " << sum_ev << "        " << "Sum of odd numbers: " << sum_odd << endl;
}

long itc_sum_odd_part_lst(const vector <int> &lst){
    int count = lst.size();
    long result = 0;
    if(count != 0){
        for(int i = 0; i < count; i++){
            if(lst[i] % 2 != 0){
                result += lst[i];
            }
        }
    }
    return result;
}

void itc_odd_even_analysis_lst(const vector <int> &lst){
    vector<int> chet;
    vector<int> nechet;
    itc_odd_even_separator_lst(lst, chet, nechet);
    print_analys(chet, nechet);
}
