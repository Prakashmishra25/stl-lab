#include <stdio.h>
int main(void){
	  try{
		int a=0;
		int b=32/a;
	  }
	  catch(...){ //�����쳣
		printf("�쳣����\n");
	  }
	  return 0; 
}
