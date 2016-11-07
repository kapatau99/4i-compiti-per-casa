#include <iostream>
using namespace std;


int main () {

float coef,yr,q,xp,yp,x;
cout<<"inserire coeficiente angolare :";
cin>>coef;
cout<<endl<<"inserire il coeficiente della y :";
cin>>yr;
cout<<endl<<"inserire termine noto q :";
cin>>q;


cout<<endl<<"inserire ascissa del punto :";
cin>>xp;

cout<<endl<<"inserire ordinata del punto :";
cin>>yp;

 x=(coef*xp)+q-(yr*yp);

    if(x==0)
      { cout<<endl<<"il punto appartiene alla retta "<<endl;

      }
     else
     {
         cout<<endl<<"il punto non appartiene alla retta"<<endl;
     }

return 0 ;
}

