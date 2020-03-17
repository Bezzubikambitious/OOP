#ifndef MONEY_H
#define MONEY_H

class Money{
   private:
   int dolar, cent;

   public:
   Money();
   Money(int dolar,int cent);


   void SetDolar(int dolar);
   int GetDolar() const ;
   void SetCent(int cent);
   int GetCent() const;


   Money addMoney(Money m1, Money m2);
   Money subVectors(Money m1, Money m2);

};
//---------------------------------------------------------------------------
#endif


#endif // MONEY_H
