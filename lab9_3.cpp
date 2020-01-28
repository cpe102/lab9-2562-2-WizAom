#include<iostream>
#include<string>
#include<fstream>
#include<cmath>
using namespace std;
int main(){
    ifstream score;
    double m,x,n=0,sum=0,sum2=0;
    string text;
    score.open("D:\\lab9-2562-2-WizAom\\score.txt");
    while(getline(score,text)){
        sum+=atof(text.c_str());
        n++;
        sum2+=pow(atof(text.c_str()),2);
    }
    m=(1/n)*sum;
    cout << "Number of data = " << n << "\n";
    cout << "Mean = " << m << "\n";
    cout << "Standard deviation = " << sqrt(((1/n)*sum2)-pow(m,2)) << "\n";
    score.close();
    return 0;
}
