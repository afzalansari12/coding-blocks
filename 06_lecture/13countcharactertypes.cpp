// #include<iostream>

// using namespace std;

// int main() {

// 	int lCount = 0; 
// 	int uCount = 0; 
// 	int dCount = 0; 
// 	int sCount = 0; 
// 	int wCount = 0; 

// 	char ch;

// 	while (true) {

// 		ch = cin.get();

// 		if (ch == '$') {
// 			break;
// 		}

// 		if (ch >= 'a' and ch <= 'z') {
// 			lCount++;
// 		} else if (ch >= 'A' and ch <= 'Z') {
// 			uCount++;
// 		} else if (ch >= '0' and ch <= '9') {
// 			dCount++;
// 		} else if (ch == ' ' || ch == '\n' || ch == '\t') {
// 			wCount++;
// 		} else {
// 			sCount++;
// 		}

// 	}

// 	cout << "lCount = " << lCount << endl;
// 	cout << "uCount = " << uCount << endl;
// 	cout << "dCount = " << dCount << endl;
// 	cout << "wCount = " << wCount << endl;
// 	cout << "sCount =" << sCount << endl;

// 	return 0;
// }

#include<iostream>
using namespace std;
int main(){

   char ch ;
   int x = 0;
   int y = 0;

   while(true){

	ch = cin.get();
	if(ch == '\n'){
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