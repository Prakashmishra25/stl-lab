#include <set>
#include <iostream>
int main(void){
	using namespace std;
	set<int> s;
	s.insert(5);
	s.insert(6);
	s.insert(7);
	s.insert(8);
	s.insert(9);
	//
	if(s.empty())
		cout << "set����Ϊ��" << endl;
	else 
		cout << "set����Ԫ�ظ���Ϊ" << s.size() << endl; 
	return 0;
}
