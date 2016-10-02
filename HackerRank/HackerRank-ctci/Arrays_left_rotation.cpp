/*

Problem statement:	https://www.hackerrank.com/challenges/ctci-array-left-rotation


	 Read this to understand the stl library function 
  	 	http://stackoverflow.com/questions/12806160/how-to-concatenate-merge-vectors
   		http://www.cplusplus.com/reference/algorithm/copy/
*/
#include <iostream>// cout 
#include <vector>  // vector 
#include <iterator> // back_inserter
#include <algorithm> // copy

using namespace std;

vector<int> array_left_rotation(vector<int> a, int n, int k) {
    
   
   
    vector<int> b;
    copy(a.begin()+k,a.begin()+n,  back_inserter(b));
    copy(a.begin()  ,a.begin()+k,  back_inserter(b));
    return b;
    
/*    This is the most basic approact to solve the problem 
      with a complexity of   O(N*k)
      
    for(int rotation =0;rotation<k;rotation++){
        int idx= 0;
        int start = a[0];
        while(idx != n-1){
            a[idx] = a[idx+1];  
            idx++;
        }
        a[n-1] = start;
    }
    return a;
    */
}

int main(){
    int n;
    int k;
    cin >> n >> k;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
        cin >> a[a_i];
    }
    vector<int> output = array_left_rotation(a, n, k);
    for(int i = 0; i < n;i++)
        cout << output[i] << " ";
    cout << endl;
    return 0;
}