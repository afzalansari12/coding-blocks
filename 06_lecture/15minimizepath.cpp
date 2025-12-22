#include<iostream>

using namespace std;

int main() {

	int x = 0; 
	int y = 0; 

	char ch;

	while (true) {

		ch = cin.get();
		if (ch == '\n') {
			break;
		}

		if (ch == 'N') {
			y++;
		} else if (ch == 'S') {
			y--;
		} else if (ch == 'E') {
			x++;
		} else {
			
			x--;
		}

	}

	

	if (x > 0) {

		

		for (int i = 1; i <= x; i++) {
			cout << 'E';
		}

	}

	if (y > 0) {

		


		for (int i = 1; i <= y; i++) {
			cout << 'N';
		}

	}

	if (y < 0) {

		


		for (int i = 1; i <= abs(y); i++) {
			cout << 'S';
		}

	}

	if (x < 0) {

		

		for (int i = 1; i <= abs(x); i++) {
			cout << 'W';
		}

	}


	return 0;
}