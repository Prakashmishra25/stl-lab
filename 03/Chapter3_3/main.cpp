#include <fstream>
#include <iostream>
using namespace std;

int main(void){ 
	ofstream wFileStream;
	wFileStream.open("d:\\ˮ��.txt", ios::out|ios::app);
	if(!wFileStream){
		cout << "���ļ�ʧ��" << endl;
		return 1; 
	}
	wFileStream << "apple" << ' ' << "ƻ��" << endl;
	wFileStream << "banana" << ' ' << "�㽶" << endl;
	wFileStream << "grape" << ' ' << "����" << endl;
	wFileStream.close();
	return 0;
}