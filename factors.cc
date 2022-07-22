#include <iostream>
#include<vector>

using namespace std;


vector<int> arr;


void numFactors(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            arr.push_back(i);
        }
    }
}



void printNumbers(){
    int res;
    for(int i=arr.size()-1;i>=0;i--){
        int diff;
         diff = arr[i] - arr[i-1];
    }


}

// void printDeference(){
//       for()
// }

int main()
{

    int n;

    cout << "Enter number " << endl;
    cin >> n;

    numFactors(n);
    printNumbers();

    return 0;
}