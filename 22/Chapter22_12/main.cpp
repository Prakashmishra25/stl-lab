#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

void print(int x){
	cout << x << ' ';
}

int main(void){
	vector<int> v(8);
	fill(v.begin(), v.end(), 1);
	//ǰ5��Ԫ�����Ϊ2
	fill_n(v.begin(), 5, 2);
	for_each(v.begin(), v.end(), print);
	cout << endl;
	//ȫ�����Ϊ3
	fill_n(v.begin(), v.size(), 3);
	for_each(v.begin(), v.end(), print);
	cout << endl;
	return 0;
}
