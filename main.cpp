#include <iostream>
#include<time.h>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
int ddm(int pk, int ok, int pv);
int gadijuma_sk(int c);
int main()
{
    //Rolands C�rulis 11g
    srand(time(0));
    int a, b, c, A, B, i, j, sum;

    cout << "Ievadiet 2 skaitlus robezas 1-10! " << endl;
    cin >> a;
    cin >> b;
    cout << " Ievadiet skaitli robezas 2-10! " << endl;
    cin >> c;
    A=a;
    B=b;



    int mas[A][B];

      if((a<11)&&(a>0)&&(b>0)&&(b<11)&&(c>1)){
          for (i=0; i<a; i++){
   for (j=0; j<b; j++){
      mas[A][B]=gadijuma_sk(c);
      sum=sum+mas[A][B];
      cout << mas[A][B] << " ";
   }
   cout << "\n";

} cout << "Masiva elementu summa ir: " << sum << endl;
    } else {
    cout << " Jus ievadijat nederigu skaitli!!! " << endl;
    }

return 0;
}


int gadijuma_sk(int c)
{
    return rand()%c;
}



