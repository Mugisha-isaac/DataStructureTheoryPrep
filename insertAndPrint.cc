#include<iostream>

using namespace std;


void insertAndPrintArray(){
    cout<<"Array manipulation"<<endl;
    cout<<"----------------"<<endl;

    int arr [20] = {};
    int marks;
    int sum =0;

    for(int i=0; i<5; i++){
        cout<<"Enter "<<i<<" marks "<<endl;
        cin>>marks;
        arr[i] = marks;
        sum = sum + arr[i];
    }

    for(int m=0;m<5;m++){
        cout<<arr[m]<<endl;
    }

    cout<< "Sum of elements in array is: "<<sum<<endl;

}

int main(){
    insertAndPrintArray();
    return 0;
}