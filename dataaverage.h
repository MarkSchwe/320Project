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
    vector<double> v1,v2;
for(int i = 0; i < d.size(); i++){
    v1.push_back(d[i].getinstance());
}
for(int i = 0; i < d.size(); i++){
    v2.push_back(d[i].getdate());
}
double meanInst,meanDate;
for(int i = 0; i < v1.size(); i++){
meanInst += v1[i];
}
for(int i = 0; i < v2.size(); i++){
meanDate += v2[i];
}
meanInst = meanInst/v1.size();
meanDate = meanDate/v2.size();
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
