#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main(){
    ifstream cheerbook;
    ofstream cheerbook_copy;
    string text;
    cheerbook.open("D:\\lab9-2562-2-WizAom\\cheerbook.txt");
    cheerbook_copy.open("D:\\lab9-2562-2-WizAom\\cheerbook_copy.txt");
    cheerbook_copy << "-------------------- SOTUS ---------------------\n";
    while(getline(cheerbook,text)){
        cheerbook_copy << text << "\n" ;
    }
    cheerbook.close();
    cheerbook_copy << "-------------------- SOTUS ---------------------";
    cheerbook_copy.close();
    return 0;
}
