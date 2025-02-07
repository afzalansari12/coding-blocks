#include<iostream>
using namespace std;
int rainwater2pointer(int h[], int n){

int i = 0; 
int j = n -1;

int total = 0;

int l = 0;
int r = 0;

while (i <= j) {

    l = max(l , h[i]);
    r = max(r, h[j]);

    if (i < r){

        int wi = l - h[i];
        total += wi;
        i++;
    } else {
        int wj = r - h[j];
        total += wj;
        j--;
    }
}
return total;

}
int main(){
    int h[] = { 0, 1, 0, 2, 1, 0, 1, 1,3 ,2, 1,2,1};
    int n = sizeof(h) / sizeof(int);

    cout << rainwater2pointer(h,n) << endl;

    return 0;
}