// A
#include <bits/stdc++.h>
using namespace std;

int main(){
	string S if(cin >> S);
	int N =0;
	for(char ch : S){
		if(ch =='+') N +=1;
		else N -=1;
	}
	cout << N << endl;
	return 0;
}
