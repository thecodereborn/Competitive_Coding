/*
problem statement:	https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/monks-love-for-food/

YASH MAHAJAN
2-10-16

REF: http://www.cplusplus.com/reference/vector/vector/pop_back/
*/

#include <iostream>
#include <vector>
#include <array>

using namespace std;

int main(){
	long long q ; cin >> q;
	vector<long long> pile;
	int cost=0;
	while(q--){
		int type,cost; cin >> type;
		 if(type == 1){
			if(pile.size() == 0)
				cout << "No Food\n";
			else{
				cost= pile.back(); pile.pop_back();
				cout << cost <<endl;
			}
		}else{
			cin >> cost;
			pile.push_back(cost);
		}
	}
}