#include <iostream>
#include <vector>
#include <algorithm>

int compare(int a, int b)
{
	return a < b;
}

void set(std::vector<int>& vector)
{
	std::sort(vector.begin(), vector.end());
	auto it = std::unique(vector.begin(), vector.end());
	vector.erase(it, vector.end());
}

int main()
{
	std::vector<int> vector = { 1,1,2,5,6,1,2,4 };
	set(vector);
	for (auto vec : vector)
	{
		std::cout << vec << " ";
	}
	return 0;
}