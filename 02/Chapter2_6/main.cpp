#include <stdio.h>
template <class T>
void func(T a){
	printf("ʹ��func(T a)ģ��\n");
}
//����ģ�������
template<class T1, class T2>
int func(T1 t1, T2 t2){
	printf("ʹ��func(T1 t1, T2 t2)ģ��\n");
	return 1;
}

int main(void){
	func(30, 60);  //ʹ�����صĺ���ģ��
	func(19);
	return 0;
}
