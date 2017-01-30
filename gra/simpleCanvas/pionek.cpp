#include "pionek.h"
#include "gra.h"
Pionek::Pionek(string kolordomka,int nr)
{
    this->nr=nr;
    this->kolordomka=kolordomka;
    set_wDomku(true);
}

int Pionek::get_X(){return x;}
int Pionek::get_Y(){return y;}
void Pionek::set_X(int x){this->x=x;}
void Pionek::set_Y(int y){this->y=y;}
string Pionek::get_Kolor(){return kolordomka;}
int Pionek::getNr(){return nr;}
void Pionek::setNr(int nrr){this->nr=nrr;}
bool Pionek::get_wDomku(){return wDomku;}
void Pionek::set_wDomku(bool wD){
    if (wD==true){
        setwDomek();
        this->wDomku=true;
    }else {
        this->wDomku=false;
    }

}
void Pionek::wyjdzzDomu(){
    if (this->get_Kolor()=="czerwony"){
        this->set_X(600);this->set_Y(400);
    }
    if (this->get_Kolor()=="zielony"){
        this->set_X(300);this->set_Y(600);
    }
    if (this->get_Kolor()=="niebieski"){
        this->set_X(100);this->set_Y(300);
    }
    if (this->get_Kolor()=="zolty"){
        this->set_X(400);this->set_Y(100);
    }
}
void Pionek::setwDomek(){
    if (this->get_Kolor()=="czerwony"){
        if (this->getNr()==0){
              this->set_X(475);this->set_Y(475);}
        if (this->getNr()==1){
              this->set_X(475);this->set_Y(575);}
        if (this->getNr()==2){
              this->set_X(575);this->set_Y(475);}
        if (this->getNr()==3){
              this->set_X(575);this->set_Y(575);}
    }
    if (this->get_Kolor()=="zielony"){
        if (this->getNr()==0){
              this->set_X(125);this->set_Y(475);}
        if (this->getNr()==1){
              this->set_X(125);this->set_Y(575);}
        if (this->getNr()==2){
              this->set_X(225);this->set_Y(475);}
        if (this->getNr()==3){
              this->set_X(225);this->set_Y(575);}
    }
    if (this->get_Kolor()=="niebieski"){
        if (this->getNr()==0){
              this->set_X(125);this->set_Y(125);}
        if (this->getNr()==1){
              this->set_X(125);this->set_Y(225);}
        if (this->getNr()==2){
              this->set_X(225);this->set_Y(125);}
        if (this->getNr()==3){
              this->set_X(225);this->set_Y(225);}
    }
    if (this->get_Kolor()=="zolty"){
        if (this->getNr()==0){
              this->set_X(475);this->set_Y(125);}
        if (this->getNr()==1){
              this->set_X(475);this->set_Y(225);}
        if (this->getNr()==2){
              this->set_X(575);this->set_Y(125);}
        if (this->getNr()==3){
              this->set_X(575);this->set_Y(225);}
    }
}
