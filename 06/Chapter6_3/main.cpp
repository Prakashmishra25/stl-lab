#include <vector>
#include <iostream>
int main(void){
	using namespace std; 
	vector<int> v;
	v.push_back(6);   
	v.push_back(7);
	v.push_back(8);
	v.push_back(10);
	v.insert(v.begin() + 3, 9);  //��Ԫ��10��ǰ�����9
	v.insert(v.begin(), 5);      //����5Ϊ��Ԫ��
	v.insert(v.end(), 11);       //����11ΪĩԪ��
	for(int i = 0; i < v.size(); i++)    
		cout << "v[" << i << "] = " << v[i] << endl; 
	return 0;
}
