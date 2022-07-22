#include<iostream>

using namespace std;


void insertAndPrintArray(){
    cout<<"Array manipulation"<<endl;
    cout<<"----------------"<<endl;

    int arr [20] = {};
    int marks;

    for(int i=0; i<5; i++){
        cout<<"Enter "<<i<<" marks "<<endl;
        cin>>marks;
        arr[i] = marks;
    }

    for(int m=0;m<5;m++){
        cout<<arr[m]<<endl;
    }

}

int main(){
    insertAndPrintArray();
    return 0;
}