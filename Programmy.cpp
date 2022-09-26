#include<iostream>
#include"easy.h"
using namespace std;

int itc_abs (int a) //Number 3
{
    if (a>=0)
    return a;
    else
        return a*(-1);
}
void itc_name() // Number 1
{
    cout<< "Victor" << endl;
}
void itc_fio() // Nimber 2
{
    cout << "Belovolov" << endl;
}
double itc_fabs (double a) //Number 4
{
    if (a>=0)
    return a;
    else
        return a*(-1);
}
int itc_revnbr(int a) //Number 5
{
     int s, d, e, m;
    s = a / 100; //сотни
  d = a / 10 % 10; //десятки
  e = a % 10; //единицы
  if (a>=0 && a<10)
  {
      m = e;
      return m;
  }
  if (a>=10 && a<100)
  {
  m = e * 10 + d;
    return m;
  }
  if (a>=100 && a<1000)
    {
    m = e * 100 + d * 10 + s;
    return m;
    }
    }
