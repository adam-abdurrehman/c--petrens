#include<iostream>
using namespace std;

int main() {
	int o = 5;
	while (o >= 1) {
		for (int i = 1; i <= o; i++)
		{
			cout << i << "     ";
		}
		cout << endl;
		o--;
	}
}