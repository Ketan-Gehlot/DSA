#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Till how many numbers u want to print ";
    cin>>size;
    
    for(int i=0;i<size;i++){
        
        for(int j=0;j<=i;j++){
            cout<<j+1;
          
           
        }
        cout<<endl;
    }
}
