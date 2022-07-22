#include<iostream>

using namespace std;


void insertAndPrintArray(){
    cout<<"Array manipulation"<<endl;
    cout<<"----------------"<<endl;

    int arr [20] = {};
    int marks;
    int sum =0;
    int count = 0;
    int average =0;

    for(int i=0; i<5; i++){
        cout<<"Enter "<<i<<" marks "<<endl;
        cin>>marks;
        arr[i] = marks;
        sum = sum + arr[i];
        count ++;
    }

    for(int m=0;m<5;m++){
        cout<<arr[m]<<endl;
    }

    average = sum/count;

    cout<< "Sum of elements in array is: "<<sum<<endl;
    cout<<"Counter is: "<<count<<endl;
    cout<<"Average is: "<< average<<endl;

}

int main(){
    insertAndPrintArray();
    return 0;
}