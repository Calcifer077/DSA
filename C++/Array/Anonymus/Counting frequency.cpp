#include<iostream>
using namespace std;

//Given an array, find the frequency of every element.

int main(){
	int arr[] = {1,2,2,3,3,3};
	int size = sizeof(arr) / sizeof(arr[0]);
	cout<<"Enter the element that you want to count: ";
	int key; cin>>key;
	int count = 0;

	for(int i = 0; i < size; i++){
		if(key == arr[i]){
			count++;
		}
	}
	cout<<count;
	return 0;
}
