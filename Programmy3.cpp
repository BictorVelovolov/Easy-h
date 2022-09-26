#include<iostream>
#include"easy.h"
using namespace std;

bool itc_iseven (int b) //Number 6
{
   if (b%2==0)
    return 1;
   return 0;
}
int itc_max(int a, int b) //Number 7
{
    if (a>b)
        return a;
    return b;
}
int itc_sqrt (int a) //Number 18
{
    int i;
    i = 0;
        while (i*i<a)
        {
            i = i + 1;
        }
    if (i*i==a)
    return i;
    return -1;

}
int itc_str (int a, int b, int c) //Number 13
{
    int i, p;
    if ((a > 0 && b > 0 && c > 0)&&(a < b + c && b < c + a && c < a + b))
    {
      p = (a + b + c)/2;
    i= p * (p - a) * (p - b) * (p - c);
    return itc_sqrt (i);
    }
    return -1;
}
