#include <iostream>
#include <queue>
#include <vector>

using namespace std;

void swap(vector<int>& v, int i, int j) {
	int temp = v.at(i);
	v.at(i) = v.at(j);
	v.at(j) = temp;
}

class Heap
{
public:
	vector<int> Arr;
	priority_queue<int> QArr;
	Heap() { Arr.push_back(-999); }


	void printArray(vector<int> Arr);

	//Max heap
	void increaseKeyMax(vector<int>& Arr, int i, int key); //Increase Index value
	void decreaseKeyMax(vector<int>& Arr, int i, int key); //Decrease index value
	void insert_value_maxHeap(vector<int>& Arr, int val); //Adds value at the end of array and calls max_heapify
	void max_heapify(vector<int>& Arr, int i); //Maintains the max heap property
	int extract_maximum(vector<int>& Arr); //Return the maximum element in heap and swap last element with first element
	void ascendingHeapSort(vector<int>& Arr, int n); //Prints the array in ascending order by calling extract_maximum and heapify
	void buildMaxHeap(vector<int>& Arr, int n); //Heapifies entire list


	//Min Heap
	void increaseKeyMin(vector<int>& Arr, int i, int key); //Increase Index value
	void decreaseKeyMin(vector<int>& Arr, int i, int key); //Decrease index value
	void insert_value_minHeap(vector<int>& Arr, int val); // Adds value at the end of array and calls min_heapify
	void min_heapify(vector<int>& Arr, int i); //Maintains min heap property
	int extract_minimum(vector<int>& Arr); //Return the minimum element in heap and swap last element with first element
	void descendingHeapSort(vector<int>& Arr, int n); //Prints the array in descending order by calling extract_minimum and heapify
	void buildMinHeap(vector<int>& Arr, int n); //Heapifies entire list

};


void Heap::printArray(vector<int> Arr) {
	for (int i = 1; i < Arr.size(); i++) {
		if (i != Arr.size()) {
			cout << Arr[i] << " ";
		}
		else {
			cout << Arr[i];
		}
	}
	cout << endl;
}

//Max Heap Functions
void Heap::buildMaxHeap(vector<int>& Arr, int n) {
	for (int i = n / 2; i > 0; --i) {
		max_heapify(Arr, i);
	}
}

void Heap::max_heapify(vector<int>& Arr, int i) {
	int n = Arr.size() - 1;
	int largest = i;
	int left = i * 2;
	int right = i * 2 + 1;
	if (left <= n && Arr[left] > Arr[i]) {
		largest = left;
	}
	if (right <= n && Arr[right] > Arr[largest]) {
		largest = right;
	}
	if (largest != i) {
		swap(Arr, i, largest);
		max_heapify(Arr, largest);
	}
}

void Heap::insert_value_maxHeap(vector<int>& Arr, int val) {
	Arr.push_back(-1000000);
	increaseKeyMax(Arr, Arr.size() - 1, val);
}

void Heap::increaseKeyMax(vector<int>& Arr, int i, int key) {
	if (key < Arr[i]) {
		cout << "Input cannot be smaller than current value" << endl;
	}
	Arr[i] = key;
	while (i > 1 && Arr[i / 2] < Arr[i]) {
		swap(Arr, i / 2, i);
		i = i / 2;
	}
}

void Heap::ascendingHeapSort(vector<int>& Arr, int n) {
	vector<int> sort;
	sort.push_back(-999);
	for (int i = n; i > 1; --i) {
		sort.push_back(Arr[1]);
		swap(Arr, 1, i);
		Arr.pop_back();
		this->max_heapify(Arr, 1);
	}
	sort.push_back(Arr[1]);
	Arr = sort;
}

int Heap::extract_maximum(vector<int>& Arr) {
	int n = Arr.size() - 1;
	if (n < 1) {
		cout << "Heap underflow" << endl;
	}
	int max = Arr[1];
	Arr[1] = Arr[n];
	Arr.pop_back();
	this->max_heapify(Arr, 1);
	return max;
}

void Heap::decreaseKeyMax(vector<int>& Arr, int i, int key) {
	if (Arr[i] < key) {
		cout << "Input cannot be greater than current value." << endl;
	}
	Arr[i] = key;
	this->max_heapify(Arr, i);
}

//Min Heap Functions
void Heap::buildMinHeap(vector<int>& Arr, int n) {
	for (int i = n / 2; i > 0; --i) {
		min_heapify(Arr, i);
	}
}

void Heap::min_heapify(vector<int>& Arr, int i) {
	int n = Arr.size() - 1;
	int smallest = i;
	int left = i * 2;
	int right = i * 2 + 1;
	if (left <= n && Arr[left] < Arr[i]) {
		smallest = left;
	}
	if (right <= n && Arr[right] < Arr[smallest]) {
		smallest = right;
	}
	if (smallest != i) {
		swap(Arr, i, smallest);
		min_heapify(Arr, smallest);
	}
}

void Heap::insert_value_minHeap(vector<int>& Arr, int val) {
	Arr.push_back(1000000);
	decreaseKeyMin(Arr, Arr.size() - 1, val);
}

void Heap::decreaseKeyMin(vector<int>& Arr, int i, int key) {
	if (key > Arr[i]) {
		cout << "Input cannot be larger than current value" << endl;
	}
	Arr[i] = key;
	while (i > 1 && Arr[i / 2] > Arr[i]) {
		swap(Arr, i / 2, i);
		i = i / 2;
	}
}

void Heap::descendingHeapSort(vector<int>& Arr, int n) {
	vector<int> sort;
	sort.push_back(-999);
	for (int i = n; i > 1; --i) {
		sort.push_back(Arr[1]);
		swap(Arr, 1, i);
		Arr.pop_back();
		this->min_heapify(Arr, 1);
	}
	sort.push_back(Arr[1]);
	Arr = sort;
}

int Heap::extract_minimum(vector<int>& Arr) {
	int n = Arr.size() - 1;
	if (n < 1) {
		cout << "Heap underflow" << endl;
	}
	int min = Arr[1];
	Arr[1] = Arr[n];
	Arr.pop_back();
	this->min_heapify(Arr, 1);
	return min;
}

void Heap::increaseKeyMin(vector<int>& Arr, int i, int key) {
	if (Arr[i] > key) {
		cout << "Input cannot be smaller than current value." << endl;
	}
	Arr[i] = key;
	this->min_heapify(Arr, i);
}

