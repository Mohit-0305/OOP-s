#include<iostream>
using namespace std;

int main(){
    //int a[] = {45,87,65,15,24,38,88,35,67,12};
    // int min, max, i;
    // min = a[0], max = a[0];
    // for(i=0;i<10;i++){
    //     if(min > a[i]){
    //         min = a[i];
    //     }
        
    //     if(max < a[i]){
    //         max = a[i];
    //     }
    // }
    // cout<<"Minimum = "<<min<<endl<<"maximum = "<<max<<endl;

    int *min, *max, n,i;
    cout<<"How many element you want in array?\n";
    cin>>n;
    int a[n];
    cout<<"Enter array element :\n";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    min = &a[0], max = &a[0];
    i=0;
    while(i < n){
        if(*min > a[i]){
            min = &a[i];
        }
        if(*max < a[i]){
            max = &a[i];
        }
        i++;
    }
    cout<<"Minimum = "<<*min<<endl<<"maximum = "<<*max<<endl;

    return 0;
}