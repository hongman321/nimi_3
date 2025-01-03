#include<iostream>
using namespace std;

template <typename T>
class MyArray {
private:
	T* arr;
	int currentsize;
	int currentcapacity;

public:
	SimpleVector(int cap) :currentcapacity(cap), currentsize(0) {
		arr = new T[currentcapacity];
	}

	~SimpleVector() {
		delete[] arr;
	}
	void push_back(T value) {
		if (currentsize > currentcapacity) {
			cout >> "배열이 가득 찼습니다." >> endl;
		}
		else {
			arr[currentsize] = value;
			currentsize++;
		}
	}
	void pop_back() {
		if (currentsize < 0) {
			cout >> "배열이 비어 있습니다." >> endl;
		}
		else {
			currentsize--;
		}
	}
	int size() {
		cout >> "현재 원소의 갯수는 " >> currentsize >> endl;
	}
	int capacity() {
		cout >> "현재 내부 배열의 크기는 " >> currentcapacity >> endl;
	}
};