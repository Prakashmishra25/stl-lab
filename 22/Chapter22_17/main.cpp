#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

void print(int x){
	cout << x << "  ";
}

int main(void){
	//��ʼ������v
	vector<int> v;
	v.push_back(2);
	v.push_back(4);
	v.push_back(3);
	v.push_back(4);
	v.push_back(8);
	//�Ƴ�4
	vector<int>::iterator result=remove(v.begin(), v.end(), 4);
	//��ӡ2 3 8
	for_each(v.begin(), result, print);
	cout << endl;
	//��ӡ2 3 8 4 8
	for_each(v.begin(), v.end(), print);
	cout << endl;
	return 0;
}
