#include <stack>
#include <list>
#include <iostream>
#define STACK_SIZE 100  //��ջ�������

int main(void){
	using namespace std;
	stack<int, list<int> > s; //��˫����������ջ�ĵײ�ṹ
	if(s.size() < STACK_SIZE)
		s.push(68);
	if(s.size() < STACK_SIZE)
		s.push(1);
	if(s.size() < STACK_SIZE)
		s.push(17);
	//
	while(!s.empty()){
		cout << s.top() << endl;
		s.pop();
	}
	return 0;
}