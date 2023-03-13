#include <iostream>
using namespace std;

double rerata(double a, double b){
    return (a+b)/2;
}

string status(double rata){
    if (rata >= 60)
        return "Lulus";
    else`
        return "Gagal";
}

string status2(double rata, double nil){
    if (rata >= 60 || nil >= 70)
        return "Lulus";
    else
        return "Gagal";

}
