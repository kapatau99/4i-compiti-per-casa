#include <iostream>
using namespace std;

int main()
{
int string[200];
char risp;
risp == 's';
int i=0;
do {
    cout<<"introduci il numero"<<endl;
    cin>> string[i];
    cout<<"vuoi introdurre un altro numero? (s/n)"<<endl;
    cin>> risp;
    i++;
} while (risp=='s');

for (int x=0;x<3;x++){
        for (int z=0;z<i;z++){
            cout<<string[z];
}
cout<<endl;
}


return 0;


}
