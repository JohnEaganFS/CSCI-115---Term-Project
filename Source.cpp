#include <iostream>
#include <vector>

using namespace std;

bool findSum(vector<int> v, int sum) {
	int i = 0;
	int j = v.size() - 1;

	while (i <= j )
	{
		if (v[i] + v[j] == sum)
		{
			return true;
		}
		if (v[i] + v[j] > sum)
		{
			j--;
		}
		else
			i++;
	}
	return false;
}
int main() {
	int size;
	int input;
	int sum;
	vector<int> v;
	cout << "Enter input size" << endl;
	cin >> size;

	for (int i = 0; i < size; i++)
	{
		cout << "Enter element no " << (i + 1) << endl;
		cin >> input;
		v.push_back(input);
	}
	cout << "Enter value to find the sum of " << endl;
	cin >> sum;
	if (findSum(v, sum) == true)
	{
		cout << "A pair was found" << endl;
	}
	else
		cout << "A pair was not found" << endl;

 }
