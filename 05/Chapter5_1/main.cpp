#include <algorithm>
#include <iostream>
int main(void){  
	  using namespace std;
	  double a[8]={0.0,1.0,2.0,3.0,4.0,5.0,6.0,7.0}; //8��Ԫ�ص�����
	  double val=3.0;
	  double* result=find(a,a+8,val);  //�ȼ���find(&a[0],&a[7]+1,val)
	  if(result==a+8)
		cout<<"����û��һ��Ԫ�ص�ֵ����"<< val << endl;
	  else
		cout<<"������һ��Ԫ��ֵ����"<< val << endl;
	  return 0;
}
