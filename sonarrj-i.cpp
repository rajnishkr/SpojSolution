#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
int findMaxJMinusI(int a[], int n) {
    int start = 0, end = n - 1;
    while (start < end) {
        if (a[start] < a[end]) {
            return end - start;
        } else if (a[start] < a[end - 1] || a[start + 1] < end) {
            return end - 1 - start;
        }
        ++start;
        --end;
    }
    return -1;
}
 
int main() {
    int a1[] = {34, 8, 10, 3, 2, 80, 30, 33, 1};
    cout << findMaxJMinusI(a1, 9) << endl;
    int a2[] = {12,13, 3, 4, 5, 6, 7, 8, 18,0,9,10};
    cout << findMaxJMinusI(a2, 10) << endl;
    int a3[] = {1, 2, 3, 4, 5, 6};
    cout << findMaxJMinusI(a3, 6) << endl;
    int a4[] = {6, 5, 4, 3, 2, 1};
    cout << findMaxJMinusI(a4, 6) << endl;
    int a5[] = {4, 8, 1, 5};
    cout << findMaxJMinusI(a5, 4) << endl;
    system("pause");
    return 0;
}
