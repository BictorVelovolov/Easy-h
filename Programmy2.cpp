#include<iostream>
#include"easy.h"
using namespace std;

int itc_min(int a, int b) //Number 8
{
    if (a<b)
        return a;
    return b;
}
double itc_fmax (double a, double b) //Number 9
{
    if (a>b)
        return a;
    return b;
}
double itc_fmin (double a, double b) //Number 10
{
    if (a<b)
        return a;
    return b;
}
int itc_skv (int a) //Number 11
{
    if (a>0)
        return a*a;
    return -1;
}
int itc_spr (int a, int b) //Number 12
{
    if (a>0 && b>0)
        return a*b;
    return -1;
}
