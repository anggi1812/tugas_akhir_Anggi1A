#include<iostream>
using namespace std ;

void judul(){
    cout << " **********LET'S BUILD YOUR MUSCLES********** " << endl ;
}
void daftarProgram(){
    string daftar[3] = {" 1.OTOT DADA "," 2.OTOT KAKI "," 3.OTOT PERUT "};
        for (int i=0;i<3;i++){
        cout << daftar[i] << endl ;
        }
}
void ototDada(string latihan1){
    string nama, keputusan ;
    int umur,beratBadan,tinggiBadan,jumlah, jml_perhari ;

    cout <<" ========== "<< latihan1 << " ========== "<< endl;
    cout <<" Nama Pengguna(1 kata) : "; cin >> nama ;
    cout <<" Umur          : "; cin >> umur ;
    cout <<" Berat Badan   : "; cin >> beratBadan ;
    cout <<" Tinggi Badan  : " ; cin >> tinggiBadan ;
    cout <<" Berapa kali jumlah push up anda selama 1 menit : "; cin >> jumlah ;
        if (jumlah<=30){
            cout << " Sepertinya Anda Perlu Latihan Yang Lebih Keras !!!" << endl;
            cout << " Apakah anda perlu latihan itu?(ya/tidak) : ";cin >> keputusan ;
            system ("cls") ;
                if (keputusan=="ya"){
                    cout << " \t\t\tLET'S DO THIS!!" << endl ;
                    cout << " \n *Lakukan Push-UP sebanyak 50 kali/lebih per hari dalam 1 minggu " << endl ;
                    for (int i=1;i<=7;i++){
                        cout << " Jumlah hari ke-" << i << " : " ;
                        cin >> jml_perhari ;
                    }
                    cout << " \n Hasil yang bagus! Lakukan secara rutin selama 1 bulan maka anda akan merasakan perbedaannya ! " << endl ;
                }
                else{
                    cout << " ANDA LEMAH!" << endl ;
                }
        }
        else if(jumlah>=30) {
            cout << " Wow Sangat mengejutkan!!! " << endl ;
            cout << " Apakah anda perlu latihan itu?(ya/tidak) : ";cin >> keputusan ;
            system ("cls") ;
                if (keputusan=="ya"){
                    cout << " \t\t\tLET'S DO THIS!!" << endl ;
                    cout << "\n *Lakukan Push-up sebanyak 100 kali/lebih perhari dalam 1 minggu " << endl ;
                    for (int i=1;i<=7;i++){
                        cout << " Jumlah hari ke-" << i << " : ";
                        cin >> jml_perhari ;
                    }
                    cout << " Impressive ! Lakukan dalam waktu 1 bulan untuk hasil yang sempurna. "<< endl ;
                }
                else {
                    cout << " Mungkin anda tertarik untuk memilih program yang lain "<< endl ;
                }
        }
}

void ototKaki(string latihan2){
    int umur, beratBadan, tinggiBadan, jml_perhari;
    string nama, keputusan ;

    cout << " ========== "<< latihan2 << " ========== "<< endl;
    cout << " Nama Pengguna (1 kata) : " ;cin >> nama ;
    cout << " Umur          : " ; cin >> umur ;
    cout << " Berat Badan   : " ; cin >> beratBadan ;
    cout << " Tinggi Badan  : " ; cin >> tinggiBadan ;
    system("cls") ;
    cout << " \n Berikut adalah beberapa latihan untuk membentuk otot kaki anda "<< endl ;

    string jenis[5] = {" 1.Squats "," 2.Side Lunges "," 3.Side Legs Raises "," 4.Calf Raises "," 5.Splits Squats "};
        for (int i=0;i<5;i++){
        cout << jenis[i] << endl ;
        }
    cout << " Mulai latihan anda ?(ya/tidak) : " ;cin>> keputusan ;
    system("cls") ;
        if (keputusan=="ya"){
            cout << " \t\t\tLET'S DO THIS!" << endl ;
            cout << " \n *Lakukan gerakan 5 latihan tersebut sebanyak 50 kali/lebih perhari dalam 1 minggu" << endl ;
            cout << " \n Jumlah harian setiap bentuk latihan dalam seminggu" << endl ;
                for (int i=1;i<=7;i++){
                    cout << " Jumlah hari ke-" << i << " : " ;
                    cin >> jml_perhari ;
                }
                cout << " \n Lakukan secara rutin dalam waktu 1 bulan maka otot anda akan terbentuk " << endl ;

        }
        else {
            cout << " Mungkin anda tertarik untuk memilih program yang lain " << endl ;
        }
}

void ototPerut(string latihan3){
    int umur, beratBadan, tinggiBadan,jml, jml_perhari;
    string nama, keputusan ;

    cout << " ========== "<< latihan3 << " ========== "<< endl;
    cout << " Nama Pengguna (1 kata) : " ;cin >> nama ;
    cout << " Umur          : " ; cin >> umur ;
    cout << " Berat Badan   : " ; cin >> beratBadan ;
    cout << " Tinggi Badan  : " ; cin >> tinggiBadan ;
    cout << " Berapa jumlah Sit-up anda dalam waktu 1 menit : "; cin >> jml ;
        if (jml<=40){
            cout << " Ups! Sepertinya Anda Masih Memerlukan Sedikit Latihan " << endl ;
            cout << " Mulai latihan anda ?(ya/tidak) : " ;cin>> keputusan ;
            system("cls") ;
                if (keputusan=="ya"){
                    cout << " \t\t\tLET'S DO THIS!" << endl ;
                    cout << " \n *Mulai dengan melakukan sit-up sebanyak 20 kali atau lebih perhari " << endl ;
                    cout << " \n Jumlah sit-up harian anda " << endl ;
                    for (int i=1;i<=7;i++){
                        cout << " Hari Ke-"<< i << " : ";
                        cin >> jml_perhari ;
                    }
                    cout << " Lakukan dengan rutin dalam 1 bulan untuk hasil sempurna " << endl ;
                }
                else {
                    cout << " Mungkin anda tertarik untuk memilih program yang lain " << endl;
                }
        }
        else if(jml>=40){
            cout << " Wow Anda Hebat!! " << endl ;
            cout << " Tetap mulai latihan anda ?(ya/tidak) : " ;cin>> keputusan ;
            system("cls") ;
                if (keputusan=="ya"){
                    cout << " \t\t\tLET'S DO THIS!" << endl ;
                    cout << " \n *Mulai dengan melakukan sit-up sebanyak yang anda bisa dalam 1 minggu " << endl ;
                    cout << " \n Jumlah sit-up harian anda " << endl ;
                    for (int i=1;i<=7;i++){
                        cout << " Hari Ke-"<< i << " : " ;
                        cin >> jml_perhari ;
                    }
                    cout << " \n Lakukam selama 1 Bulan otot perut anda akan makin sempurna " << endl ;
                }
                else {
                    cout << " Mungkin anda tertarik untuk memilih program yang lain " << endl;
                }
        }
}

struct capaian {
    int beratBadanAwal,beratBadanAkhir, tinggiBadanAwal,tinggiBadanAkhir ;
    int beratHasil1,beratHasil2, tinggiHasil1 ;
    string nama ;

};


int main (){

int pilih ;
string ulang ;

    do{
        system("cls") ;
        judul() ;
        daftarProgram() ;
        cout << " silahkan pilih program (1/2/3) : " ; cin >> pilih ;
        system("cls") ;

            if (pilih==1){
                ototDada("PUSH-UP");
            }

            else if(pilih==2){
                ototKaki("SQUATS");
            }
            else if(pilih==3){
                ototPerut("SIT-UP") ;
            }




        cout << " Kembali ke menu awal(ya/tidak) : " ; cin >> ulang ;

    }
    while(ulang == "ya") ;
    system ("cls") ;

    capaian data ;
        cout << " Results Dalam 1 bulan " << endl ;
        cout << " Nama               : "; cin >> data.nama ;
        cout << " Berat Badan Awal   : "; cin >> data.beratBadanAwal;
        cout << " Berat Badan Akhir  : "; cin >> data.beratBadanAkhir;
        cout << " Tinggi Badan Awal  : "; cin >> data.tinggiBadanAwal;
        cout << " Tinggi Badan Akhir : "; cin >> data.tinggiBadanAkhir;
        system("cls") ;
        cout << "  RESULTS !! " << endl ;
        cout << " =========== " << endl ;
        cout << " Nama : "<< data.nama << endl ;
        data.beratHasil1=(data.beratBadanAkhir-data.beratBadanAwal) ;
        data.beratHasil2=(data.beratBadanAwal-data.beratBadanAkhir) ;
            if (data.beratBadanAkhir>=data.beratBadanAwal){

                cout << " Sepertinya berat badan anda bertambah sebesar : " << data.beratHasil1 << "kg" << endl;
            }
            else if(data.beratBadanAkhir<data.beratBadanAwal){

                cout << " Berat badan anda berkurang sebesar : " << data.beratHasil2 << "kg" <<endl ;
            }

        data.tinggiHasil1=(data.tinggiBadanAkhir-data.tinggiBadanAwal) ;
            if (data.tinggiBadanAkhir>data.tinggiBadanAwal){

                cout << " Sepertinya tinggi badan anda bertambah sebesar : " << data.tinggiHasil1 << "cm" << endl;
            }
            else if (data.tinggiBadanAkhir==data.tinggiBadanAwal){
                cout << " Tinggi badan anda tidak bertambah ";
            }


        cout << " \n\t\t\t  SEMANGAT !! "<< endl ;
        cout << " \t\t\tSALAM SEHAT !!" << endl ;
        cout << " \n PROGRAM SELESAI " << endl ;


}
