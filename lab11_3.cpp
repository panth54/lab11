#include <iostream>
#include <fstream>
#include <string.h>
#include <iomanip>
#include <math.h>
using namespace std;

int main(){
    ifstream source;
    source.open("score.txt");
    string textline;
    

    double sumAv, sumSD, average, SD;
    int n=0;
    while(getline(source, textline)){
        sumSD += pow(stod(textline), 2);
        sumAv += stod(textline);
        n++;
    }
    
    average = sumAv/n;
    SD = sqrt((sumSD/n) - pow(average, 2));


    cout << "Number of data = " <<n <<endl;
    cout << setprecision(3);
    cout << "Mean = " <<average <<endl;
    cout << "Standard deviation = " <<SD <<endl;

    return 0;
}
