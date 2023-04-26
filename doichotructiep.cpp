#include <iostream>
using namespace std;
int Interchange_Sort(int a[], int n){
	int i,j;
	for(i=0; i<n-1; i++){
		for(j=i+1; j<n; j++){
			if(a[i]>a[j]){
				swap(a[i],a[j]);
			}
		}
	}
}
int main (){
    int n=5;
	int a[] = {4, 3, 7, 2, 5};
	Interchange_Sort(a, 5);
	cout<<"Mang sau khi sap xep:"<<endl;
	for(int i=0;i<5;i++){
		cout<<a[i]<<" ";
	}
}