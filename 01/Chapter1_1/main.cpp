#include <stdio.h>
int main(void){
	try{
		printf("try��1����ִ��\n");
		throw 10;
	}
	catch(int& i){
		printf("����try��1��int�����쳣����ֵΪ%d\n", i);
	}
	catch(double d){
		printf("����try��1��double�����쳣����,ֵΪ%f\n", d);
	}
	//
	try{
		printf("try��2����ִ��\n");
		throw 23.8;
	}
	catch(int& i){
		printf("����try��2��int�����쳣����ֵΪ%d\n", i);
	}
	catch(double d){
		printf("����try��2��double�����쳣����,ֵΪ%f\n", d);
	}
	//
	printf("�������\n");
	return 0;
}


