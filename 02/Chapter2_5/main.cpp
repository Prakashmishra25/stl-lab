#include <stdio.h>
//��ģ��A
template <class T>
class A{
	  T i;
public:
	  A(T t){ i=t; }
	  T compute(){ return i*i; }
};

//��ģ��A����ȫ�ػ�
template<> class A<int>{
	  int i;
	  int k;  //��������ݳ�Ա
public:
	  A(int t){ i=t; printf("hello\n");}  //��Ӵ�ӡ
	  int compute(){ return i*i*i; }  //��Ϊ��������
	  void f(){} //����³�Ա����
};

int main(void){
	  A<double> dObj(2.5);
	  A<int> iObj(5); //��ӡhello
	  printf("%f\n", dObj.compute());  //ƽ������6.25
	  printf("%d\n", iObj.compute());  //��������125
	  return 0;
}
