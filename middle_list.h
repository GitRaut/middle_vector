#ifndef MIDDLE_LIST_H_INCLUDED
#define MIDDLE_LIST_H_INCLUDED
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int itc_len(string str);
string itc_deletesym(string str, char sym);
void print(const vector<int> &mass);
int max_value(vector <int> lst);
int min_value(vector <int> lst);
long itc_sum_odd_part_lst(const vector <int> &lst);
int max_col_sym(vector <int> lst);
int col_sym(int chisl);

vector <char> itc_strtlist(string str);
string itc_join(vector <char> lst, string sep);
string itc_rmstrspc(string str);
string itc_rmstrchar(string str, string less);
long itc_sumlst(const vector <int> &lst);
long itc_sum_even_lst(const vector <int> &lst);
long itc_sum_even_part_lst(const vector <int> &lst);
void itc_odd_even_separator_lst(const vector <int> &lst, vector <int> &lst1, vector <int> &lst2);
void itc_pos_neg_separator_lst(const vector <int> &lst, vector <int> &lst1, vector <int> &lst2, vector <int> &lst3);
void itc_odd_even_analysis_lst(const vector <int> &lst);
void itc_pos_neg_analysis_lst(const vector <int> &lst);

#endif // MIDDLE_LIST_H_INCLUDED
