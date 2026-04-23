#include<bits/stdc++.h>
using namespace std;

void a(){
   	string input;
	cin >>input;
	int ans =count(input.begin(), input.end(), '1');
	cout <<ans;
}

void b(){
   	int n, is_ev, x;
	vector<int> vec;
	cin >>n;
	for (int i=0; i<n; i++){
		cin >>x;
		vec.push_back(x);
		is_ev +=(vec[i] %2 ==0 ?0 :1);
	}
   	cout <<is_ev;
}

int main(){
    //a();
    //b();
}
