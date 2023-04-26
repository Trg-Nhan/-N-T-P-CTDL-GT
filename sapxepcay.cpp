#include <iostream>
using namespace std;
// Thuat toan sap xep vun dong
// Hàm vun đống cho một đỉnh
void heapify(int arr[], int n, int i){  // mảng arr, n - số phần tử, i - đỉnh cần vun đống
    int max =i;    // Lưu vị trí đỉnh max ban đầu
    int l = i*2 +1;   // Vị trí con trái
    int r = l+1;    // Vị trí con phải
    if(l<n && arr[l] > arr[max]){   // Nếu tồn tại con trái lớn hơn cha, gán max = L
        max = l;
    }
    
    if(r<n && arr[r] > arr[max]){   // Nếu tồn tại con phải lớn hơn arr[max], gán max = r
        max = r;
    }
    if(max != i){      // Nếu max != i, tức là cha không phải lớn nhất
        swap(arr[i], arr[max]);   // Đổi chỗ cho phần tử lớn nhất làm cha
        heapify(arr ,n , max);    // Đệ quy vun các node phía dưới
    }
    
}
// main function to do heap sort
void heapSort(int arr[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
    for (int i = n - 1; i > 0; i--)
    {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << "\n";
}

int main()
{
    int arr[] = {41, 23, 4, 14, 56, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    heapSort(arr, n);

    cout << "Sorted array is \n";
    printArray(arr, n);
}