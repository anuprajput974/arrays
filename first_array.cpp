#include<iostream>
using namespace std;

//creating an array with the help of functions
void printArray(int arr[],int size)
     {
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
     }

int main(){
    
    //creating an array
    int arr[15]={2,3,4};
    int n=15;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }

    //using functions
    int third[10]={2,3,4,5,6};
     n=10;
    printArray(third,13);

    int fourth[4]={2,6,8,3};
    n=4;
    printArray(fourth,4);

    //calculating size off an array
    int thirdsize=sizeof(third)/sizeof(int);
    cout<<thirdsize<<endl;

    char ch[5]={'a','b','c','d','e'};
    cout<<"printing the array"<<endl;
    for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
    
}