#include <iostream>
#include <ctime>
#include <vector>

using namespace std;

bool Part2Brute(vector<int> v, int x) {
	for (int i = 0; i < v.size() - 1; i++) {
		for (int j = i + 1; j < v.size(); j++) {
			if (i + j == x) {
				return true;
			}
		}
	}
	return false;
}


int main() {


	system("pause");
}