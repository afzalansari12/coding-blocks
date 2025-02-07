#include<iostream>

using namespace std;

int main() {

	int x = 10;

	cout << x << endl;

	{
		int x = 30;
		int y = 20;

		cout << x << endl;
        cout << y << endl;

	}

	cout << x << endl;

	return 0;
}