#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAXN (100)

int a[MAXN];
int rec(int d, int n, int k);

int main(void) {
  int n, k;
  
  scanf("%d", &n);
  scanf("%d", &k);

  rec(1, n, k);
  return(0);
}

// d>nならば，配列a[1],...,a[n]の値を出力
// d≦nならば，a[d]以降に0or1を保存
int rec(int d, int n, int k) {
  int i;

  if (d > n) {
    for(i = 1; i <= n; i++) {
      printf("%d", a[i]);
    }
    printf("\n");
  } else {
    for(i = 0; i < k; i++) {
      a[d] = i;
        rec(d + 1, n, k);
    }
  }
  return(0);
}
