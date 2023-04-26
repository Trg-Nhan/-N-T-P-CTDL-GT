#include <stdio.h>
 
// Hàm tìm kiếm nhị phân sử dụng giải thuật đệ quy
int binarySearch(int a[], int l, int r, int x) {
  if (r >= l) {
    int mid = (l + r) / 2;
    if (a[mid] == x)
      return mid;
    if (a[mid] > x)
      return binarySearch(a, l, mid - 1, x);
    return binarySearch(a, mid + 1, r, x);
  }
  return -1;
}
 
int main(void) {
  int a[] = {2, 3, 4, 10, 40};
  int n = 5;
  int x = 50;
  int result = binarySearch(a, 0, n - 1, x);
  if (result == -1)
    printf("%d xuat hien tai chi so %d", x, result);
  else
    printf("%d xuat hien tai chi so %d", x, result);
  return 0;
}