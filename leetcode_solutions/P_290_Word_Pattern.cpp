#include "P_290_Word_Pattern.h"

void P_290_Word_Pattern::p_290_main(void) {
	string pattern="abc";
	string s = "b c a";
	bool b=p_290_func(pattern, s);
	cout << "the string is " << b << endl;
}

bool P_290_Word_Pattern::p_290_func(string pattern, string s) {
	unordered_map<string, char>m;
	int x = 0;
	string t;
	bool r=true;
	unordered_set<char> st;
	vector<string>v;

	for (int i = 0; i < s.size(); ++i) {
		if (s[i] != ' ') {
			t += s[i];
			if (i == s.size() - 1) {
				v.push_back(t);
			}
		}
		else {
			v.push_back(t);
			t.clear();
		}
	}

	for (int i = 0; i < pattern.size(); ++i) {
		st.insert(pattern[i]);
	}

	for (int i = 0; i < v.size(); ++i) {
		string t = v[i];
		if (m.find(t) == m.end()) {
			m[t] = pattern[x];
			++x;
		}
		else {
			if (m[t] != pattern[x]) {
				return false;
			}
			++x;
		}
	}

	if (st.size() != m.size())
		return false;
	return true;
}
