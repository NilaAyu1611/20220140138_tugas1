#include <iostream>
using namespace std;

double rerata(double a,double b){
    return (a+b)/2;
}

    string status (double c){
        if (c >= 60)
            return "Lulus";
        else
        return "gagal";
}

string status2 (double rata, double nil){
    if (rata >= 60 || nil >= 70)
        return "Lulus";
    else
        return "gagal";
}

int main (){
    double nilM,nilB;
    cout << "Masukan nilai Matematika = ";
    cin >>  nilM;
    cout << "Masukan nilaI Bahasa Indonesia = ";
    cin >> nilB;
    cout << "Status kelulusan = " << status(rerata(nilM,nilB));
    cout << "\nStatus kelulusan ke 2 = " << status2(rerata(nilM,nilB),nilM);
    return 0;
    }

    