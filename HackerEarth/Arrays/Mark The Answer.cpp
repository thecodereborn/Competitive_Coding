/*
problem statement : https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/mark-the-answer-1/

YASH MAHAJAN
2-10-16
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int n,x; cin >> n >> x;
	int temp; int skip=1;
	int count = 0;
	int arr[n];
	for(int i=0;i<n;i++){
		cin >> arr[i];
		if(arr[i] <= x)
			count++;
		else{
			if(skip != 1){
		//		cout << " stop bit " << arr[i]<< endl;
				break;
			}
			else{
		//		cout << " skip bit " << arr[i]<< endl;
			  skip--;
			}
		}
	}	
	cout << count << endl;
}