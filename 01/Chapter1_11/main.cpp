#include <stdio.h>
class A{
	static int i;  //����Ϊ��̬����
	static int j;
	int k;
public:
	A(int k_){k=k_;}
	static void setj(int j_);
	static void print_static();
	void print();
};

int A::i=10;  //ֱ�Ӷ��徲̬��Ա����

int A::j;  //�����ȶ���,���ú�����ʼ��
void A::setj(int j_){
	j=j_;
}

void A::print_static(){
	printf("��̬��Ա����i��jֵΪ%d��%d\n", i, j);
}

void A::print(){
	printf("��Ա����k��ֵΪ%d\n", k);
}

int main(void){
	A::setj(20);
	A a(3); 
 	A::print_static(); //Ҳ��ʹ��a.print_static()��ʽ
	a.print(); 
	return 0;
}




