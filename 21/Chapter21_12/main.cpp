#include <algorithm>
#include <vector>
#include <iostream>

int main(void){
	using namespace std;
	//��ʼ������v1={-5, 1, 2, -6, -8, 1, 2, -11}
	vector<int> v1;
	v1.push_back(-5);
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(-6);
	v1.push_back(-8);
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(-11);
	//��ʼ������v2={1, 2}
	vector<int> v2;
	v2.push_back(1);
	v2.push_back(2);
	//v1�в������һ��������v2
	vector<int>::iterator iLocation;
	iLocation=find_end(v1.begin(), v1.end(), v2.begin(), v2.end());
	//��ӡ��������v1����ʼλ��v[5]
	if(iLocation != v1.end())
		cout << "v1���ҵ����һ��ƥ��v2��������,λ����" 
			 << "v1[" << iLocation - v1.begin() << "]" << endl;
	return 0;
}