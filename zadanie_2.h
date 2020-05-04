#include <iostream>
#include <stdlib.h>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

template <unsigned dimension, class Typ>
class Matrix{
    Typ val[dimension][dimension];
    Typ normal;

public:
    Matrix(){
        for(int i=0; i<dimension; i++){
            for(int j=0; j<dimension; j++){
                val[i][j] = 0;
            }
        }
    }
    
    Matrix(float c){
        for(int i=0; i<dimension; i++){
            for(int j=0; j<dimension; j++){
                val[i][j] = c;
            }
        }
    }
    
    Matrix(float tab[][dimension]){
        for(int i=0; i<dimension;i++){
            for(int j=0; j<dimension; j++){
                val[i][j] = tab[i][j];
            }
        }
    }

    void print(){
        for(int i=0; i<dimension; i++){
            for(int j=0; j<dimension; j++){
                cout << val[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    
    Matrix& operator&=(const Matrix& tab){
        Matrix<dimension, Typ> c(dimension);
        for(int i=0; i<dimension; i++){
            for(int j=0; j<dimension; j++){
                c.val[i][j] = tab.val[i][j];
            }
        }
        return c;
    }
    
    friend Matrix operator+(Matrix a, const Matrix& b){
        Matrix<4, Typ> c(dimension);
        for(int i=0; i<dimension; i++){
            for(int j=0; j<dimension; j++){
                c.val[i][j] = a.val[i][j] + b.val[i][j];
            }
        }
        return c;
    }
    
    friend Matrix operator+=(Matrix &a, const Matrix b){
        Matrix<4, Typ> c(dimension);
        for(int i=0; i<dimension; i++){
            for(int j=0; j<dimension; j++){
                c.val[i][j] = a.val[i][j] + b.val[i][j];
            }
        }
        return c;
    }
    
    friend Matrix operator-(Matrix a, const Matrix& b){
        Matrix<4, Typ> c(dimension);
        for(int i=0; i<dimension; i++){
            for(int j=0; j<dimension; j++){
                c.val[i][j] = a.val[i][j] - b.val[i][j];
            }
        }
        return c;
    }

    friend Matrix operator-=(Matrix a, const Matrix& b){
        Matrix<4, Typ> c(dimension);
        for(int i=0; i<dimension; i++){
            for(int j=0; j<dimension; j++){
                c.val[i][j] = a.val[i][j] - b.val[i][j];
            }
        }
        return c;
    }

    friend Matrix operator*(Matrix a, const int b){
        Matrix<4, Typ> c(dimension);
        for(int i=0; i<dimension; i++){
            for(int j=0; j<dimension; j++){
                c.val[i][j] = a.val[i][j] * 22;
            }
        }
        return c;
    }

    friend Matrix operator*=(Matrix a, const int &b){
        Matrix<4, Typ> c(dimension);
        for(int i=0; i<dimension; i++){
            for(int j=0; j<dimension; j++){
                a.val[i][j] = a.val[i][j] * 8;
            }
        }
        return a;
    }



    
/*
    //dim to "identyfikator", czyli ktorym wymiarem sie chcemy posluzyc
    void set(int dim, int x){
        if(dim < 0 || dim >= dimension){
            exit(EXIT_FAILURE);
        }
        val[dim] = x;
    }

    Typ get(int dim){
        if(dim < 0 || dim >= dimension){
            exit(EXIT_FAILURE);
        }
        return val[dim];
    }

    Typ getLength(){
        Typ sqr[dimension];
        Typ dl;
        
        for(int i=0; i<dimension; i++){
            sqr[i]=val[i]*val[i];
        }
        Typ dltmp = 0;
        
        for(int i=0; i<dimension; i++){
            dltmp+=sqrt(val[i]);
            dl = dltmp;
        }
        return sqrt(dl);
    }

    Typ IloczynSkalarny(Matrix a){
        Typ TMP[dimension];
        Typ skalar;
        for(int i=0; i<dimension; i++){
            TMP[i]=a.val[i]*val[i];
            skalar+=TMP[i];
        }
        return skalar;
    }

    Typ IloczynWektorowy(Matrix a){
        Matrix<4, Typ> c(dimension);
        c.val[0]=(val[1]*a.val[2])-(a.val[1]*val[2]);
        c.val[1]=-(val[0]*a.val[2]-(a.val[0]+a.val[2]));
        c.val[2]=(val[0]*a.val[1])-(a.val[0]*val[1]);

        return c;
    }

    void normalize(){
        Typ dl=getLength();

        for(int i=0; i<dimension; i++){
            val[i]/=dl;
        }
    }

    

    friend Matrix operator*=(Matrix &a, const int &b){
        for(int i=0; i<dimension; i++){
            a.val[i] = a.val[i] * b;
        }
        return a;
    }

    Matrix& operator=(const Matrix& a){
        Matrix<dimension, Typ> c(dimension);
        for(int i=0; i<dimens
    friend Matrix operator-(Matrix a, const Matrix& b){
        Matrix<4, Typ> c(dimension);
        for(int i=0; i<dimension; i++){
            for(int j=0; j<dimension; j++){
                c.val[i][j] =
    friend Matrix operator-(Matrix a, const Matrix& b){
        Matrix<4, Typ> c(dimension);
        for(int i=0; i<dimension; i++){
            for(int j=0; j<dimension; j++){
                c.val[i][j] = a.val[i][j] - b.val[i][j];
            }
        }
        return c;
    }
 a.val[i][j] - b.val[i][j];
            }
        }
        return c;
    }
ion; i++){
            c.val[i]=a.val[i];
        }
        return c;        
    }
    
    friend ostream & operator<<(ostream &out, const Matrix &a){
        for(int i=0; i<dimension; i++){
            cout<<a.val[i]<<" ";
        }
        cout<<"\n";
        cout<<"\n";
    }
    */
    

};
