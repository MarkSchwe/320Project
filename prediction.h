#include "dataaverage.h"


class prediction{
    private:
double pred;
double function;
double atzer;
double years;

public:

void insertDat(datavg dat){
function = dat.avgfunc();
atzer = dat.getZero();
}

void predict(double yrs,vector<data> d){
pred = ((d[d.size()-1].getdate()+yrs) * function) + atzer;
years = yrs;
}

double getPred(){
    return pred;
}

double yars(){
    return years;
}

double random(double predi){
double rando = rand() % 100000;
double random = rand() % 10;
cout << endl;
if(random == 0){
cout << "A freak accident occured and a bunch of crabs fell from the sky. + " << rando << " of whatever." << endl;
}
if(random == 1){
cout << "You win a poker game after your opponent attempted to rig the game but accidentally gave you the winning cards. + " << rando << " of whatever." << endl;
}
if(random == 2){
cout << "You slip into a hole and fall into wonderland. You are presumed dead for 2 years but then come back and claim your own life insurance money, committing the most heinous of crimes: fraud. + " << rando << " of whatever." << endl;
}
if(random == 3){
cout << "You go to smoke your juul pod but then it explodes, covering you in ash but somehow leaving you uninjured. + " << rando << " of whatever." << endl;
}
if(random == 4){
cout << "You ever try to catch a bull shark? + " << rando << " of whatever." << endl;
}
if(random == 5){
cout << "You wander along and find a card on the ground that says 'gullible', when suddenly an anvil falls on your head. its actually just a pillow so it falls harmlessly onto the ground. + " << rando << " of whatever." << endl;
}
if(random == 6){
cout << "You win the lottery but lose all your money in a freak boating accident. + " << rando << " of whatever." << endl;
}
if(random == 7){
cout << "You invest into a company that specializes in farming potatos. In antartica. But its in an enclosed enviornment so its all good. + " << rando << " of whatever." << endl;
}
if(random == 8){
cout << "You are cursed with a perfect form of clairvoyance, but for things that are completely mundane and useless. + " << rando << " of whatever." << endl;
}
if(random == 9){
cout << "You somehow roll zeros for every roll of a dice you make. How...? + " << rando << " of whatever." << endl;
}

return predi + rando;
}

friend ostream &operator <<(ostream &ostr, prediction predi){  
    ostr << "The conputer's prediction of the progression of the given values in " << predi.yars() << " years is " << predi.getPred() << " However, " << predi.random(predi.getPred()) << " making the 100% serious total " << predi.getPred();

    return ostr;
}
};
