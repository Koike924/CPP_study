#include <iostream>
using namespace std;

int card[5][5];

int main(void){

	//kakikomi
	for (int i = 0;i < 5; i++){
		for(int j = 0; j < 5; j++){
			card[i][j] = 1;
			}
		}
	

	for (int i = 0;i < 5;i++){
		for(int j = 0; j < 5;j++){
			cout << card[i][j];
			}
		cout << endl;}
	}
