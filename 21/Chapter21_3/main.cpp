#include <algorithm>
#include <vector>
#include <iostream>

bool divby5(int x){
	return x % 5 ? 0 : 1;
}

int main(void){
	using namespace std;
	//��ʼ��vector
	vector<int> v(20);
	for(unsigned int i=0; i<v.size(); i++)
		v[i]=(i+1)*(i+3);
	vector<int>::iterator iLocation;
	iLocation=find_if(v.begin(), v.end(), divby5);
	if(iLocation != v.end())
		cout << "�ҵ���һ���ܱ�5������Ԫ��" 
			 << *iLocation << endl   //��ӡ10
			 << "Ԫ�ص�����λ��Ϊ"
			 << iLocation - v.begin() << endl; //��ӡ3
	return 0;
}
 