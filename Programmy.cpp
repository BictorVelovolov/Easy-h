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
    int ch, obr_ch;
    obr_ch = 0;
      if (a>=0)
      {
          while (a!=0)
        {
        ch = a % 10;
        obr_ch = obr_ch*10 + ch;
        a = a / 10;
        }
        return obr_ch;
      }
      else
        {
        a = a * (-1);
           while (a!=0)
           {
            ch = a % 10;
            obr_ch = obr_ch*10 + ch;
            a = a / 10;
            }
            return obr_ch * (-1);
        }
}
