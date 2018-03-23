
#include<iostream>
#include<vector>
#include<random>
#include<chrono>
#include<ctime>
#include<algorithm>
#include <chrono>   
using namespace std;
vector<int>da;
template<class T>
void bubble_sort(vector<T>&data) {
	for (int i = 0; i < data.size(); ++i) {
		for (int j = data.size() - 1; j >i; --j) {
			if (data[j] < data[j - 1]) swap(data[j], data[j - 1]);
		}
	}
}
void test(int n) {
	auto startz = chrono::high_resolution_clock::now();
	bubble_sort(da);
	auto endz = chrono::high_resolution_clock::now();
	cout << n<<"      " << (double)chrono::duration_cast<chrono::microseconds>(endz - startz).count()/1000 <<endl;
}
int main()
{
	   for(int n=1000;n<=50000;n+=1000){
		default_random_engine generator(time(0));
		da.clear();
		for (int i = 0; i < n; ++i) {
			uniform_int_distribution<long long int> data(-1000000, 1000000);
			long long int a = data(generator);
			da.push_back(a);
		}
		test(n);
	}
	return 0;
}