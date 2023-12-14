#include "P_13_Roman_to_Integer.h"


void P_13_Roman_to_Integer::p_13_main(void) {
	string s = "MCMXCIV";
	int num = p_13_func(s);
	cout << "the number is " << num << endl;
}

int P_13_Roman_to_Integer::p_13_func(string s) {
	unordered_map<char, int>m;
	m['I'] = 1;
	m['V'] = 5;
	m['X'] = 10;
	m['L'] = 50;
	m['C'] = 100;
	m['D'] = 500;
	m['M'] = 1000;
	int n = 0;
	int prev = 0;
	for (int i = s.length()-1; i >=0 ; --i) {
		if (m[s[i]] < prev) {
			n = n - m[s[i]];
		}
		else {
			n = n + m[s[i]];
		}
		prev = m[s[i]];
	}
	return n;
}