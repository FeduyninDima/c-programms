#include <iostream>

using namespace std;

 void incredible_sort (int n, int k)
 {
    int*cnt = new int [k];
    int num;
    for (int i = 0; i < k; i ++)
        cnt[i]=0;
    for (int i = 0; i < n;i++){
        cin >> num;
        cnt[num-1]++;
        }
    for (int i = k-1; i > -1; i--)
        for (int j = 0; j < cnt[i]; j++)
            cout << i+1 << ' ';
 }

int main()
{
    int n;
    int k;
    cin >> n >> k;
    incredible_sort ( n , k );
    return 0;
}
