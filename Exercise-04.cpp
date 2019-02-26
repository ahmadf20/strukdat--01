/*
Nama program 	: Average
Nama			: Ahmad Faaiz Al-auza'i
NPM				: 140810180023
Tanggal dibuat	: 26/02/2019
Deskripsi		: Menghitung nilai rata - rata
***********************************************/
#include <iostream>
using namespace std;

float average(int nums[]){
    float avg = 0;
    for(int i = 0; i < 10; i++)
    {
        avg += nums[i];
    }
    return avg/10;
}

void input(int nums[]){
    for(int i = 0; i < 10; i++)
    {
        cin >> nums[i];
    }
}

int main(){
    int nums[10];
    input(nums);
    cout << "the average is " << average(nums);
}