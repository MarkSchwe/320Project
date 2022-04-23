#include <iostream>
#include <fstream>
using namespace std;

class data{
    private:
    double date = 0;
double instance = 0; 
public:
data(double Odate, double Oinstance){
    date = Odate;
    instance = Oinstance;
}
void set(double dateO,double instanceO){
    date = dateO;
    instance = instanceO;
}
double getdate(){
return date;
}
double getinstance(){
return instance;
}
void setdate(double Odate){
date = Odate;
}
void setinstance(double Oinstance){
    instance = Oinstance;
}
friend ostream &operator<<(ostream &ostr, data &d){
    ostr << d.getdate() << " " << d.getinstance();
    return ostr;
}
};
