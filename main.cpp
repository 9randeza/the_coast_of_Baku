#include <iostream>
#include "Algorithm.cpp"
#include <gtest/gtest.h>


TEST(Test, Test1) {
	
	std::vector<int> v = {1, 3, 2};
	std::vector<int> out = {1, 2};
	ASSERT_EQ(out, Algorithm(v));
	
}
TEST(Test, Test2) {
	std::vector <int> v = {1, 2, 3, 4};
	std::vector<int> out = {3};
	ASSERT_EQ(out, Algorithm(v));
	
}
TEST(Test, Test3) {
	
	std::vector<int> v = {5};
	std::vector<int> out = {0};
	ASSERT_EQ(out, Algorithm(v));
	
}

TEST(Test, Test4) {
	
	std::vector<int> v = {4, 3, 2, 1};
	std::vector<int> out = {0, 1, 2, 3};
	ASSERT_EQ(out, Algorithm(v));
	
}

TEST(Test, Test5) {
	
	std::vector<int> v;
		ASSERT_TRUE(v.empty());
	
}
	
int main(int argc, char** argv){
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}

