#include "P_26_remove_duplicates_from_soted_array.h"

void P_26_remove_duplicates_from_soted_array::p26_main(void) {
	vector<int>nums{ 0,0,1,1,1,2,2,3,3,3,3,4,4 };
	cout <<"Number of unique element "<< removeDuplicates(nums) << endl;
}
int P_26_remove_duplicates_from_soted_array::removeDuplicates(vector<int>& nums) {
    set<int> x;
    for (int i = 0; i < nums.size(); ++i) {
        x.insert(nums[i]);
    }
    int i = 0;
    for (auto& n : x) {
        nums[i] = n;
        ++i;
    }
    return x.size();
}