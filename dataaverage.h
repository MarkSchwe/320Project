#include <iostream>
#include <vector>
#include "dataPoint.h"

using namespace std;

class datavg{
private:
double averagefunction;
double atzero;
public:

void setavgs(vector<data> &d){
double meanInst,meanDate;
for(int i = 0; i < d.size(); i++){
meanInst += d[i].getinstance();
meanDate += d[i].getdate();
}
meanInst = meanInst/d.size();
meanDate = meanDate/d.size();
double sumSq, SumY;
for(int i = 0; i < d.size(); i++){
    sumSq += (d[i].getdate()-meanDate)*(d[i].getdate()-meanDate);
}
for(int i = 0; i < d.size(); i++){
    SumY += (d[i].getdate()-meanDate)*(d[i].getinstance()-meanInst);
}
averagefunction = SumY/sumSq;
atzero = meanInst - (averagefunction * meanDate);
}
double avgfunc(){
return averagefunction;
}


double getZero(){
    return atzero;
}

friend ostream &operator<<(ostream &ostr, datavg &d){
    if(d.avgfunc() == 0){
        ostr << "A pattern could not be found or the rate of change is zero.";
    } else {
    ostr << "Average change in function is: " << d.avgfunc() << "x + " << d.getZero();
    }
    return ostr;
}
};
