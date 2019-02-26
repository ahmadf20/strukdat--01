/*
Nama program 	: CelciusToFarenheit
Nama			: Ahmad Faaiz Al-auza'i
NPM				: 140810180023
Tanggal dibuat	: 26/02/2019
Deskripsi		: Convert temp in Celcius to Farenheit
***********************************************/

#include <iostream>
using namespace std;

void input(float& C){
    cout << "Input temp(C) : " ; cin >> C;
}

float CtoF(float C){
    return C*9/5 + 32;      //rumus untuk konversi Celcius ke Farenheit
}

void print(float F){
    cout << "Temp in Farenheit is " << F;
}

int main(){
    float C;               //deklarasi celcius
    input(C);              //input nilai C
    float F = CtoF(C);     //deklarasi F sekaligus inisialisasi
    print(F);              //print nilai suhu dalam F
}