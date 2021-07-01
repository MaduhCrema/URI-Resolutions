#include <stdio.h>
#include <string.h>

int a[100001];
int b[100001];

int main(int argc, char const *argv[])
{
 int A, B, x, i, c, al, be;

 while(scanf("%d %d", &A, &B) && (A || B))
 { 
  memset(a, 0, sizeof(a));
  memset(b, 0, sizeof(b));
  c = 0, al = 0, be = 0;

  for (i = 0; i < A; ++i)
  {
   scanf("%d", &x);
   a[x]++;
  }
  
  for (i = 0; i < B; ++i)
  {
   scanf("%d", &x);
   b[x]++;
  }

  for (i = 0; i < 100001; ++i)
  {
   if(a[i] != 0 && b[i] == 0)
    al++;
   if(a[i] == 0 && b[i] != 0)
    be++;
  }

  if(al < be) printf("%d\n", al);
  else printf("%d\n", be);
 }

 return 0;
}