#include <iostream>
#include <fstream>
#include <vector>
#include "prediction.h"
using namespace std;


int main(){
    srand(time(0));
vector<data> d;
ifstream file;
file.open("FileOut.dat");
double t1,t2;
while(!file.eof()){
    file >> t1;
    file >> t2;
d.push_back(data(t1,t2));
}
file.close();

for(int i = 0; i < d.size(); i++){
    cout << d[i] << endl;
}

datavg avg;
avg.setavgs(d);
cout << avg << endl;
prediction prod;
prod.insertDat(avg);
cout << "How many years ahead would you like the computer to predict? ";
double yrs;
cin >> yrs;
prod.predict(yrs,d);
cout << prod << endl;
    return 0;
}
