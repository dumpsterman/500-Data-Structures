#pragma once
#include <vector>
#include <time.h>

class randvec
{
public:
	static std::vector<int> randomVec(int num);
};

std::vector<int> randvec::randomVec(int num)
{
	srand(time(NULL));
	std::vector<int> ret;
	for (int i = 0; i < num; i++)
	{
		int r = rand() % 100;
		ret.push_back(r);
		std::cout  << ret[i] << ", ";
	}
	std::cout << "\n";
	return ret;
}