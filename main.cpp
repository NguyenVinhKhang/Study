#include <iostream>
#include <math.h>
using namespace std;
int PrimeCheck(int n)
{
int k = 0;
for (int i = 2; i <= n; i++)
if (n % i == 0) k++;
if (k == 1) return 1;
else return 0;
}
int BlumCheck(int n, int k , int a[])
{
int k=0;
for (int i = 2; i < sqrt(n); i++)
{
if (PrimeCheck(i) && PrimeCheck(n / i) && (i * (n / i) == n))
{
a[k]=i;
}
}
if (count == 1)
{
    a();
}
}
int main()
{
    int N,M,a[100000],count;
    cout<<"Nhap N:";
    cin >> N;
    for(int i=1; i <= N; i++)
    {
        if(BlumCheck(i))
        {
            count = 0;
            while(i<=N)
            {
                a[count] = i;
                count++;
            }
        }
    }
    for(int i=0; i <= count; i++)
    {
        cout<<a[i];
    }
}
