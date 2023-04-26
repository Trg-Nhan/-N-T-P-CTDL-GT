#include<stdio.h> 
#include<conio.h> 
#include<math.h> 
#define Max 100

void NhapMang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}
 
void XuatMang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%5d", a[i]);
    }
}
// Đề bài tính gì thì thay cái đó vô
long tongmangchan(int a[], int n){
if(n==0)
return 0;
if(a[n-1] % 2 == 0)
return a[n-1] + tongmangchan(a, n-1);
return tongmangchan(a, n-1);
}
int main()
{
    int a[100];
 
    int n;
    do
    {
        printf("Nhap n = ");
        scanf("%d", &n);
    } while (n <= 0 || n > 100);
    NhapMang(a, n);
    XuatMang(a, n);
    printf("\nTong so chan = %d",tongmangchan(a,n-1)); //Dòng nay tính gì thì sửa cách gọi tên
}