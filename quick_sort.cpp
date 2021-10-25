#include <iostream>

using namespace std;
/**
 * https://github.com/tolzlz
 *
 * 快速排序
 * 1.取随机数(取一个值将整数组分成两边)
 * 2.调整区间
 * 3.递归取数
 * @return
 */

void quick_sort(int arr[],int left,int right)
{
    if (left >= right)
    {
        return;
    }
    int x = arr[left],i = left -1,j = right +1;

    while (i< j)
    {
        int v,y;
        do i++; while ((v= arr[i]) < x);
        do j--; while ((y = arr[j]) > x);
        if (i < j){
            swap(arr[i],arr[j]);
        };
    }
    quick_sort(arr,left,j);
    quick_sort(arr,j+1,right);
}

int main() {
    int arr[] = {1,2,3,6,5,4};
    int n = 6;
    quick_sort(arr,0,n-1);
    for (int i = 0; i < n; i++) {
        cout << arr[i];
    }
    return 0;
}
