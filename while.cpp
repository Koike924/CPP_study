#include <iostream>
using namespace std;

int main(){
	int num = 1;
	int count = 0;
	while(num < 1000){
		num *= 2;
		count++;
		cout << count << "回目:" << num << endl;
	}
	cout << count << "回目で1000を超えます" << endl;
	return 0;
}
