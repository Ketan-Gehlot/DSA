#include<iostream>
using namespace std;
int main(){
    float pencil;
    cout<<"Enter the value of pencil ";
    cin>>pencil;
    float pen;
     cout<<"Enter the value of pen ";
    cin>>pen;
    float book;
     cout<<"Enter the value of book ";
    cin>>book;

float sum;
sum=pencil+pen+book;
cout<<"THE TOTAL OF YOUR items is "<<sum;
float gst;
gst=sum*18/100;

cout<<"THE total GST of items is "<<gst<<endl;

return 0;

}
