#include <vector>
#include <algorithm>

std::vector<int> Algorithm(std::vector<int> heights){
	std::vector<int> out;
	int temp = heights[heights.size() - 1];
	
	if(heights.size() > 1){
		int iter = heights.size() - 2;
		out.push_back(heights.size() - 1);
		while(iter >= 0){
			if(heights[iter] > temp){
				out.push_back(iter);
				temp = heights[iter];
				iter--;
			}else {
				iter--;
			}
		}
	}else{
		out.push_back(0);
	}
	std::reverse(out.begin(), out.end());
return out;
}
