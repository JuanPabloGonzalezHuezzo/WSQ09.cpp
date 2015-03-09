# WSQ09.cpp
#include <iostream>
using namespace std;
int main(){

  int respnum, x;
  char respfin;
    cout << "Quieres saber el factorial de un número entero de 1 a 12? [teclea (s) para si y (n) para no]" << endl;
    cin >> respfin;
  do {
      cout << " El factorial de que número deseas saber?(tiene que ser igual o menor a 12)" << endl;
      cin >> x;
      respnum=1;
      for (int i=1; i<=x; i++){
        respnum=respnum*i;
      }
    cout << "El factorial de " << x << " es " << respnum << endl;
    cout << "Deseas conocer el de otro número? Si es así teclea (s) de no ser así teclea (n) de no." << endl;
    cin >> respfin;

  } while (respfin=='s');
    if (respfin=='n'){
      cout << "Un placer ayudarle!" << endl;
    }


return 0;
}
