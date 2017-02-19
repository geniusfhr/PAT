#include <iostream>
#include <string>
#include <vector>


/* search for n in v */
int binary_search(std::vector<int> v,int n )		
{
	auto begin = v.begin();				//begin iterator
	auto end = v.end()-1;					//end iterator
	auto mid = begin + v.size() / 2;	//mid iterator
	



	while (begin != end &&  *mid != n) {
		if (*mid < n) {
			begin = mid + 1;
		} else {
			end = mid;
		}

		mid = begin + (end - begin) / 2;	//update the mid iterator	
	}

	if (*mid == n) {
		return std::distance(v.begin(), mid);
	} else {
		return -1;
	}
}




