// #include<iostream>
// using namespace std;

// void  printpath(char path[][10], int m  , int n){
//     for(int i = 0; i < m ; i++){
//         for(int j = 0; j < n ; j++){
//             cout << path[i][j] << " ";

//         }
//         cout << endl;

//     }
//     cout << endl;

// }
//  void f(char maze[][10],  char path[][10], int m , int n, int i, int j){
// if(i == m || j == n || i == -1 || j == -1){
//     return ;

// }
// if (maze[i][j] == 'x'){
//     return;
// }
// if(i == m - 1 and j == n - 1){
//     path[i][j] = '1';
//     printpath(path,m ,n);
//     path[i][j] = '0';
//     return;
// }
// if( path[i][j] == '1'){
//     return ;
// }

// path[i][j] = '1';

//     f(maze, path, m, n, i, j + 1); 
// 	f(maze, path, m, n, i, j - 1); 
// 	f(maze, path, m, n, i + 1, j); 
// 	f(maze, path, m, n, i - 1, j); 

//     path[i][j] = '0';

//  }



// int main(){
    
//     char maze[][10] = {

//         "0x00",
//         "000x",
//         "x0x0",
//         "xx00"
//     };

//     char path[][10] = {
// 		"0000",
// 		"0000",
// 		"0000",
// 		"0000",
// 		"0000"
// 	};

// 	int m = 5;
// 	int n = 4;

// 	f(maze, path, m, n, 0, 0);

//     return 0;

// }


#include<iostream>

using namespace std;

void printPath(char path[][10], int m, int n) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << path[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

void f(char maze[][10], char path[][10], int m, int n, int i, int j) {

	// base case

	if (i == m || j == n || i == -1 || j == -1) {
		return;
	}

	if (maze[i][j] == 'X') {
		return;
	}

	if (i == m - 1 and j == n - 1) {
		// you've found a path
		path[i][j] = '1'; // destn cell is also part of the path
		printPath(path, m, n);
		path[i][j] = '0'; // optional
		return;
	}

	// recursive case

	if (path[i][j] == '1') {
		// (i, j)th cell is already part of the path which is under const
		return;
	}

	path[i][j] = '1';

	f(maze, path, m, n, i, j + 1); // move right
	f(maze, path, m, n, i, j - 1); //  move left
	f(maze, path, m, n, i + 1, j); // move down
	f(maze, path, m, n, i - 1, j); // move up

	path[i][j] = '0'; // backtracking

}

int main() {

	char maze[][10] = {
		"0X00",
		"000X",
		"X0X0",
		"X00X",
		"XX00"
	};

	char path[][10] = {
		"0000",
		"0000",
		"0000",
		"0000",
		"0000"
	};

	int m = 5;
	int n = 4;

	f(maze, path, m, n, 0, 0);

	return 0;
}