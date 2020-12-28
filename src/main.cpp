#include <iostream>
#include <cmath>

using namespace std;

    float Hasil;

void Penjumlahan(int a,int b){
    cout<<"\n===== Penjumlahan ====="<<endl;
    Hasil = a + b;
    cout<< a <<" + "<< b <<" = "<<Hasil<<endl;
    cout<<"Hasil Penjumlahan : "<<Hasil<<endl;
}

void Pengurangan(int a,int b){
    cout<<"\n==== Pengurangan ===="<<endl;
    Hasil = a - b ;
    cout<< a <<" - "<< b <<" = "<<Hasil<<endl;
    cout<<"Hasil Pengurangan : "<<Hasil<<endl;
}

void Perkalian(int a , int b ){
    cout<<"\n==== Perkalian ===="<<endl;
    Hasil = a * b ;
    cout<< a <<" * "<< b <<" = "<<Hasil<<endl;
    cout<<"Hasil Perkalian : "<<Hasil<<endl;
}
void Pembagian(float a,float b){
    cout<<"\n==== Pembagian ===="<<endl;
    Hasil = a / b ;
    cout << a << " / " << b <<" = " << Hasil << endl;
    cout<<"Hasil Pembagian : "<<Hasil<<endl;
}
void MOD(int a , int b ){
    cout<<"\n=== Sisa Pembagian [MOD] ==="<<endl;
    Hasil = a % b ;
    cout<< a << " MOD " << b << " = " << Hasil <<endl;
    cout<<"Sisa Bagi : "<<Hasil; 
}
void Pangkat(int a , int b ){
    cout<<"\n=== Pangkat ==="<<endl;
    Hasil = pow(a,b);
    cout<< a << " ^ " << b << " = " << Hasil <<endl; 
    cout<<"Hasil Pangkat : "<<Hasil; 
}

int main(int argc, char const *argv[])
{
    float value1,value2;
    int tipe;
    char lagi ;
    do
    { 
        MainMenu:
        system("cls");
        cout<<"=== Kalkulator === "<<endl;
        cout<<"1.Penjumlahan "<<endl;
        cout<<"2.Pengurangan "<<endl;
        cout<<"3.Perkalian "<<endl;
        cout<<"4.Pembagian "<<endl;
        cout<<"5.Sisa Pembagian "<<endl;
        cout<<"6.Pangkat "<<endl;
        cout<<"Pilih [ 1 / 2 / 3 / 4 / 5 / 6 ] : ";cin>>tipe;
        if(tipe == 1){
            cout<<"\n== Penjumlahan =="<<endl;
            cout<<"Masukan Nilai Angka1 : ";cin>>value1;
            cout<<"Masukan Nilai Angka2 : ";cin>>value2;
            Penjumlahan(value1,value2);
        }else if(tipe == 2){
            cout<<"\n== Pengurangan == "<<endl;
            cout<<"Masukan Nilai Angka1 : ";cin>>value1;
            cout<<"Masukan Nilai Angka2 : ";cin>>value2;
            Pengurangan(value1,value2);
        }else if(tipe == 3){
            cout<<"\n== Perkalian =="<<endl;
            cout<<"Masukan Nilai Angka1 : ";cin>>value1;
            cout<<"Masukan Nilai Angka2 : ";cin>>value2;
            Perkalian(value1,value2);
        }else if(tipe == 4){
            cout<<"\n== Pembagian == "<<endl;
            cout<<"Masukan Nilai Angka1 : ";cin>>value1;
            cout<<"Masukan Nilai Angka2 : ";cin>>value2;
            Pembagian(value1,value2);
        }else if(tipe == 5){
            cout<<"\n== Sisa Bagi == "<<endl;
            cout<<"Masukan Nilai Angka1 : ";cin>>value1;
            cout<<"Masukan Nilai Angka2 : ";cin>>value2;
            MOD(value1,value2);
        }else if(tipe == 6 ){
            cout<<"\n== Pangkat == "<<endl;
            cout<<"Masukan Nilai Angka1 : ";cin>>value1;
            cout<<"Masukan Nilai Angka2 : ";cin>>value2;
            Pangkat(value1,value2);
        }else{
            goto MainMenu;
        }
        
        cout<<"Kembali [ Y / N ] : ";cin>>lagi;
    }while (lagi == 'y' || lagi == 'Y');
    
    

   
}


   