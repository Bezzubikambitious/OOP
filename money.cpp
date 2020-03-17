#include "money.h"

Money::Money(){

}

Money::Money(int ndolar,int ncent){
        dolar=ndolar;
        cent=ncent;
}


void Money::SetDolar(int dolar1){
        dolar=dolar1;
}
void Money::SetCent(int cent1){
        cent=cent1;
}


int Money::GetDolar() const{
      return dolar;
}
int Money::GetCent() const{
      return cent;
}


Money Money::addMoney(Money m1, Money m2){
      int dolar=m1.dolar+m2.dolar;
      int cent=m1.cent+m2.cent;
      Money m3(dolar,cent);
      return m3;
}
Money Money::subMoney(Money m1, Money m2){
      int dolar=m1.dolar-m2.dolar;
      int cent=m1.cent-m2.cent;
      Money m3(dolar,cent);
      return m3;
}

