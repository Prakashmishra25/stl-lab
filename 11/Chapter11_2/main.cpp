#include <set>
#include <iostream>

int main(void){
	using namespace std;
	set<int> s;
	s.insert(10);
	s.insert(15);
	s.insert(11);
	s.insert(17);
	s.insert(13);
	s.insert(19);
	s.insert(19);  //�����ظ�����
	//��ӡ������������
	set<int>::reverse_iterator ri, riend;
	riend=s.rend();
	for(ri=s.rbegin(); ri!=riend; ri++)
		cout << *ri << ' ';
	cout << endl;
	return 0;
}

