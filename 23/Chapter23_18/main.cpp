#include <algorithm>
#include <iostream>

int main(void){
	using namespace std;
	int A[]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	const int lenA=sizeof(A)/sizeof(int);
	int B[]={2, 4, 6, 8, 10};
	const int lenB=sizeof(B)/sizeof(int);
	//
	if(includes(A, A+lenA, B, B+lenB))
		cout << "B��A���Ӽ���" << endl;
	else 
		cout << "B����A���Ӽ���" << endl;
	return 0;
}