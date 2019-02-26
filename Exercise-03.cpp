/*
Nama program 	: FizzBuzz
Nama			: Ahmad Faaiz Al-auza'i
NPM				: 140810180023
Tanggal dibuat	: 26/02/2019
Deskripsi		: Mencetak Fizz bila angka habis dibagi 3, dan Buzz bila angka habis dibagi 5
***********************************************/

#include <iostream>
using namespace std;

void swap(int& x, int& y){
    int temp = y;
    y = x;
    x = temp;
}

int main(){
    int x, y;
    cout << "Masukkan niali x dan y" << endl;
    cout << "x : "; cin >> x;
    cout << "y : "; cin >> y;

    cout << "sebelum di swap : " << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    swap(x,y);

    cout << "setelah di swap : " << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
}