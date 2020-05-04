#include "zadanie_2.h"

int main(){
    
    float tablica_1[3][3];
    tablica_1[0][0] = 3;
    tablica_1[0][1] = 5;
    tablica_1[0][2] = 256;
    tablica_1[1][0] = 3465;
    tablica_1[1][1] = 74;
    tablica_1[1][2] = 1345;
    tablica_1[2][0] = 754;
    tablica_1[2][1] = 567;
    tablica_1[2][2] = 31;

    float tablica_2[4][4];
    tablica_2[0][0] = 3;
    tablica_2[0][1] = 5;
    tablica_2[0][2] = 256;
    tablica_2[0][3] = 256;
    tablica_2[1][0] = 3465;
    tablica_2[1][1] = 74;
    tablica_2[1][2] = 1345;
    tablica_2[1][3] = 1345;
    tablica_2[2][0] = 75426;
    tablica_2[2][1] = 562567;
    tablica_2[2][2] = 324561;
    tablica_2[2][3] = 324351;
    tablica_2[3][0] = 72554;
    tablica_2[3][1] = 562367;
    tablica_2[3][2] = 312345;
    tablica_2[3][3] = 32451;

    Matrix<3, float> x1(tablica_1);
    x1.print();

    float c = 10.1;
    Matrix<4, float> x2(c);
    x2.print();

    Matrix<4, float> x3 = x2 * 4;
    x3.print();
    x3 = x3+x3+x3;
    x3.print();

    x3 = x3 + x3;
    x3.print();
    
    x3 += x3;
    x3.print();
    
    x3 += x3;
    x3.print();
    
    
    //x1.print();
    
    /*
    Matrix<3, int> x2;
    x2.set(0,1);
    x2.set(2,3);
    x2.print();

    float tablica[4][4] = {3.0, 4.0, 5.0, 6.0};
    float tablicas[3] = {13.0, 14.0, 15.0};
    float tablicax[3] = {313.0, 314.0, 315.0};

    Matrix<3, float> x3(tablica);
    x3.print();

    auto wynik = x3 + x3;
    wynik.print();

    x3.print();
    x3+=x3;
    x3.print();
    (x3*3).print();
    cout<<x3;
    cout<<x3*4;
    
    cout<<x3;
    cout<<"normalizacja";
    x3.normalize();
    cout<<x3;

    float skalar = x3.IloczynSkalarny(x3);
    cout<<skalar;
    
    Matrix<3, float> iw1(tablicas);
    cout<<iw1;
    Matrix<3, float> iw2(tablicax);
    cout<<iw2;
    iw2=iw1;
    cout<<iw2;
    */
}
