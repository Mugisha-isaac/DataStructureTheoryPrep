#include<iostream>
#include<string>

using namespace std;

struct Student{
    double rollNumber;
    double age;
    float marks;
    string names;
};

struct Student* createStudent(double roll,double age,double marks, string names){
    struct Student *ptr = new Student;
    ptr->rollNumber = roll;
    ptr->age = age;
    ptr->marks = marks;
    ptr->names = names;

    return ptr;
};


void print(struct Student *ptr){
    cout<<ptr->rollNumber<<","<<" "<<ptr->names<<","<<" "<<ptr->age<<","<<" "<<ptr->marks<<endl;
}

int main(){
    struct Student *student1,*student2;
    student1 = createStudent(201901,17,89.9,"Mahoro Peace");
    student2 = createStudent(201902,17,92.50,"Juru Ethan");

    print(student1);
    print(student2);
    
    return 0;
}