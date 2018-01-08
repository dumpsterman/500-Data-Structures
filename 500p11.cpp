#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include "randvec.h"

void findPair(std::vector<int> arr, int sum)
{
	int size = arr.size();
	std::sort(arr.begin(), arr.end());
	for (int i = 0; i < size; i++)
	{
		int search = sum - arr[i];
		int halfsize = size / 2;
		int check = halfsize;
	
		while (halfsize > 0 && check < size && check >= 0)
		{
			if (check != i)
			{

				if (arr[check] > search)
				{
					halfsize /= 2;
					check -= halfsize;
				}
				if (arr[check] < search)
				{
					halfsize /= 2;
					check += halfsize;
				}
				if (arr[check] == search)
				{
					std::cout << "Found pair: " << arr[check] << " and " << arr[i] << "\n";
					break;
				}
				continue;
			}
			else
			{
				continue;
			}
		}
		

	}

}


int main()
{
	std::vector<int> arr = { 8, 7, 2, 5, 3, 1 };
	int sum = 10;
	findPair(arr, sum);
	
}
