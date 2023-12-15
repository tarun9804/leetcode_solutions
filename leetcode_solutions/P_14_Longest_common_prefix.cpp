#include "P_14_Longest_common_prefix.h"

void P_14_Longest_common_prefix::p_14_main() {
	vector<string>v{ "flower","flow","flight" };
	string s = p_14_func(v);
	cout << "output is " << s << endl;
}

string P_14_Longest_common_prefix::p_14_func(vector<string> strs) {
	int n = strs[0].size();
	for (int i = 1; i < strs.size(); ++i) {
		for (int j = 0; j < n; ++j) {
			if (strs[i][j] != strs[0][j]) {
				n = j;
				break;
			}
		}
	}
	string s;
	for (int i = 0; i < n; ++i)
		s += strs[0][i];
	return s;
}
