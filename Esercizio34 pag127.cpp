#include <iostream>
using namespace std;



int main () {
  float Prezzo,Sconto,Prezzof;

  cout<<"inserire prezzo:";
  cin>>Prezzo;
cout<<"inserire sconto %:";
  cin>>Sconto;

 Prezzof=Prezzo-((Sconto/100)*Prezzo);

    cout<<"prezzo scontato :"<<Prezzof<<endl;

return 0;


}



