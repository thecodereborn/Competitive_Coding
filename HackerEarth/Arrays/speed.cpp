/*
 problem statement:	https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/speed-7/
 YASH MAHAJAN
 2-10-16
*/
#include <iostream>
#include <array>
using namespace std;

int main(){
	int cases; cin >> cases;
	while(cases--){
		int N; cin >> N;
		long long cars[N];
		for(int i=0;i<N;i++)
			cin >> cars[i];
		long long max_speed = cars[0];
		long long count =1;
		for(int i=1;i<N;i++){
			if(cars[i] <= cars[i-1]){
				count++;
			}
			else
				cars[i] = cars[i-1];
			
		}
		cout << count << endl;
	}
}




