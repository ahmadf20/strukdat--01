/*
Nama program 	: FizzBuzz
Nama			: Ahmad Faaiz Al-auza'i
NPM				: 140810180023
Tanggal dibuat	: 26/02/2019
Deskripsi		: Mencetak Fizz bila angka habis dibagi 3, dan Buzz bila angka habis dibagi 5
***********************************************/

#include <iostream>
using namespace std;

void Buzz(int Num)
{
    if(Num % 5 == 0){
        cout << "Buzz" << " ";
    }
}

void Fizz(int Num)
{
    if(Num % 3 == 0){
        cout << "Fizz" << " ";
    }
}

void FizzBuzz(){
    int batasBawah, batasAtas;
    cout << "Masukan batas bawah : "; cin >> batasBawah;
    cout << "Masukan batas atas : "; cin >> batasAtas;
    for (int i = batasBawah; i <= batasAtas; i++)
    {
        if(i % 5 == 0|| i % 3 ==0){
            Fizz(i);
            Buzz(i);
            cout << endl;
        } else {
            cout << i << endl;
        }
    }   
}

int main()
{
    FizzBuzz();
}