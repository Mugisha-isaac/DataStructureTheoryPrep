#include<iostream>
#include<fstream>
#include<string>

using namespace std;

void copyFileContents(){

    string line;

     ifstream  originalFile;

     originalFile.open("original.txt");

     ofstream copyFile;
     copyFile.open("copy.txt",ios::app);

     if(originalFile && copyFile){
        while (getline(originalFile,line))
        {
            copyFile<<line<<"\n";
        }
        cout<<"Contents copied........."<<endl;
     }
}

int main(){

   copyFileContents();

    return 0;
}