// https://www.hackerrank.com/challenges/array-left-rotation/problem


#include <bits/stdc++.h> 
using namespace std; 


void leftRotate(int arr[], int n, int k) 
{ 

	int mod = k % n; 

	for (int i = 0; i < n; i++) 
		cout << (arr[(mod + i) % n]) << " "; 

	cout << "\n"; 
} 


int main() 
{ 
	int arr[100001]; 
	int n = sizeof(arr) / sizeof(arr[0]); 

	int k;

    cin >> n >> k;

for(int i = 0; i< n; i++ ){
    cin >> arr[i];
}

	leftRotate(arr, n, k); 

	
	return 0; 
} 
