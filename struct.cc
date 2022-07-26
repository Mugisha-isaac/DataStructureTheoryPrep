#include<iostream>

using namespace std;

struct point{
    int x;
    int y;
};

struct point *func(int a, int b){
    struct point *p = new struct point;
    p->x = a;
    p->y = b+7;
    return p;
};

void print(struct point *p){
    cout << p->x << " " << p->y << endl;
}

int main(){
    struct point *ptr1, *ptr2;
    ptr1 = func(17,17);
    ptr2 = func(22,22);

    print(ptr1);
    print(ptr2);
    return 0;
}