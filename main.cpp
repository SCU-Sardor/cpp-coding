#include <iostream>

using namespace std;

int main() {

    int Kartoshka = 8000, Piyoz = 5000, Olma=15000, Limon=25000, Pepsi = 10000;
    float Product1, Product2, Product3, Product4, Product5;

    cin>>Product1>>Product2>>Product3>>Product4>>Product5;
    cout<<"Kartoshka = "<<Kartoshka*Product1<<" so'm"<<endl;
    cout<<"Piyoz = "<<Piyoz*Product2<<" so'm"<<endl;
    cout<<"Olma = "<<Olma*Product3<<" so'm"<<endl;
    cout<<"Limon = "<<Limon*Product4<<" so'm"<<endl;
    cout<<"Pepsi = "<<Pepsi*Product5<<" so'm"<<endl;
    int summa=Kartoshka*Product1+Piyoz*Product2+Olma*Product3+Limon*Product4+Pepsi*Product5;
    cout<<"Jami = "<<summa<<" so'm"<<endl;
    cout<<"QQS = "<<summa*0.12<<" so'm"<<endl;


}