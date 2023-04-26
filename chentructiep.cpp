#include <iostream>
using namespace std;
int Insertion_Sort(int a[], int n){
	int j, i;
	int x;//lưu giá trị a[i] tránh bị ghi đè khi dời chỗ các phần tử
	for(i=1; i<n; i++){//đoạn a[0] đã sắp xếp
		x = a[i]; j = i-1;
		//tìm vị trí chèn x
		while((j>=0)&&(a[j]>x)){
                //kết hợp dời chỗ các phần tử sẽ đứng sau x trong danh sách mới
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = x;//chèn x vào danh sách
	}
}
int main()
{
	int a[5] = {8, 4, 1, 6, 5};
	Insertion_Sort(a, 5);
	cout<<"Mang sau khi sap xep:"<<endl;
	for(int i=0;i<5;i++){
		cout<<a[i]<<" ";
	}
}