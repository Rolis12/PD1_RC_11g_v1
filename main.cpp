#include <iostream>
#include<time.h>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

int main()
{
    //Rolands Cîrulis 11g
    srand(time(0));
    int a, b, c, A, B, i, j
    ;
    int mas[A][B];
    cout << "Ievadiet 3 skaitlus " << endl;
    cin >> a;
    cin >> b;
    cin >> c;
    A=a;
    B=b;


   for (i=0; i<a; i++){
   for (j=0; j<b; j++){
      mas[A][B]=rand()%c;
      cout << mas[A][B] << " ";
   }
   cout << "\n";
}
system("pause");
    return 0;
}
