#include <stack>
#include <iostream>

int main(void){
	using namespace std;
	//������ջ����
	stack<int> s;
	//Ԫ����ջ
	s.push(3);
	s.push(19);
	s.push(23);
	s.push(36);
	s.push(50);
	//Ԫ�����γ�ջ
	while(!s.empty()) {
		cout << s.top() << endl;  //��ӡջ��Ԫ��
		s.pop();  //��ջ
	}
	return 0;
}