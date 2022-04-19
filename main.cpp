#include <iostream>
using namespace std;

class Ogrenci{
    private:
    string isim;
    int numara;

    public:
    void setIsim(string yazilacakIsim){
        if(yazilacakIsim.size() >= 3){
            isim = yazilacakIsim;
        }
        else{
            cout<<"Lutfen 3 karakterden uzun isim giriniz!"<<endl;
        }
    }
    void setNumara(int yazilacakNumara){
        if(yazilacakNumara > 0){
            numara = yazilacakNumara;
        }
        else{
            cout<<"Lutfen sifirdan buyuk numara giriniz!"<<endl;
        }
    }

    string getIsim(){
        return isim;
    }

    int getNumara(){
        return numara;
    }

};


int main()
{
    Ogrenci ogr1;
    ogr1.setIsim("Murat");
    ogr1.setNumara(1589);

    cout<<ogr1.getIsim()<<endl;
    cout<<ogr1.getNumara()<<endl;

    //WITH POINTERS:

    Ogrenci* ogr2 = new Ogrenci();
    ogr2->setIsim("Ates");
    ogr2->setNumara(5647);

    cout<<ogr2->getIsim()<<endl;
    cout<<ogr2->getNumara()<<endl;




    return 0;
}
