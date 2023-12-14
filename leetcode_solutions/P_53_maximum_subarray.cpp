#include "P_53_maximum_subarray.h"

void P_53_maximum_subarray::p_53_main(void) {
	vector<int>v{ -2,1,-3,4,-1,2,1,-5,4 };
	int x = p_52_func(v);
	cout << "max_subarray_sum is " << x << endl;
}

int P_53_maximum_subarray::p_52_func(vector<int>v) {
	int s = v[0];
	int g = v[0];
	for (int i = 1; i < v.size(); ++i) {
		s = max(s + v[i],v[i]);
		g = max(g, s);
	}
	return g;

}

