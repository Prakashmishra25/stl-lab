#include <stdio.h>
class A{
	int i;
public:
	A(int i_){i=i_;}  //���캯������Ϊ��������
	void print();
};

inline void A::print(){  //print��������Ϊ��������
	printf("i��ֵΪ%d\n", i);
}

int main(void){
	A a(3);
	a.print();
	return 0;
}