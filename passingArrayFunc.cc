#include<iostream>
#include<string.h>

using namespace std;


void printNames(string names[5]){
    for(int i=0;i<5;i++){
        cout<<names[i]<<endl;
    }
}

int main(){
    string names[5] = {"Mugisha","Isaac","Byiringiro","Benefait","Parfait"};

    printNames(names);

    return 0;
}