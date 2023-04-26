#include <stdio.h>
//Xay dung ham tim kiem tuyen tinh
int linear_search(int A[], int n, int x){
    int i;
    for (i = 0; i < n; i++)
        //Neu co phan tu A[i] nao co gia tri bang voi x
        if (A[i] == x){
            return i; //Tra ve vi tri phan tu duoc tim thay
        }
    return -1; //Khong tim thay phan tu trong mang A[]
}
int main(){
    //Khai bao bien n lam so luong phan tu mang
    int n = 9;
    //Khai bao mang gom cac phan tu
    int A[] = {10, 50, 30, 70, 80, 60, 20, 90, 40};
    //Khai bao gia tri can tim trong mang A
    int x = 20;
    //Khai bao bien index de nhan ket qua tim kiem duoc tra ve tu ham linear_search(A,n,x)
    int index = linear_search(A,n,x);
    //Neu ket qua index bang -1
    if(index == -1){
        printf("Khong tim thay phan tu x = %d", x);
    }else{ //Nguoc lai, neu index khong bang -1
        printf("Tim thay x = %d tai vi tri %d", x, index);
    }
}