#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

int main(void){
	vector<int> v;
	v.push_back(10);
	v.push_back(8);
	v.push_back(6);
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	//
	make_heap(v.begin(), v.end());
	//
	if(is_heap(v.begin(), v.end()))
		cout << "��������Ԫ�ع���һ����" << endl;
	else
		cout << "��������Ԫ�ز�����һ����" << endl;
	return 0;
}
