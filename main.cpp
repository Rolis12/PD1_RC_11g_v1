#include <iostream>
#include<time.h>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
int ddm(int pk, int ok, int pv);

int main()
{
    //Rolands Cîrulis 11g
    srand(time(0));
    int a, b, c, A, B, i, j
    ;
    int mas[A][B];
    cout << "Ievadiet 2 skaitlus robezas 1-10! " << endl;
    cin >> a;
    cin >> b;
    cout << " Ievadiet skaitli robezas 2-10! " << endl;
    cin >> c;
    A=a;
    B=b;





      if((a<11)&&(a>0)&&(b>0)&&(b<11)&&(c>1)){
          for (i=0; i<a; i++){
   for (j=0; j<b; j++){
      mas[A][B]=rand()%c;
      cout << mas[A][B] << " ";
   }
   cout << "\n";
}
    } else {
    cout << " Jus ievadijat nederigu skaitli!!! " << endl;
    }
return 0;
}



