#include<iostream>
#include<limits.h>
using namespace std;
int main(){
int arr[3][3];
int temp;
cout<<"Enter the elements of your matrix "<<endl;
for(int i=0;i<3;i++){
  for(int j=0;j<3;j++){
    cin>>arr[i][j];
  }
}
 cout<<"Original matrix is : "<<endl;
 for(int i=0;i<3;i++){
  for(int j=0;j<3;j++){
    cout<<"\t"<<arr[i][j];
  }
  cout<<endl;
}
for(int i=0;i<3;i++){
  for(int j=i;j<3;j++){
    swap(arr[i][j],arr[j][i]);

  }
}
  for(int i=0;i<3;i++){
    temp=arr[i][0];
    arr[i][0]=arr[i][2];
    arr[i][2]=temp;
  }
   cout<<"Rotated Matrix is : "<<endl;
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      cout<<"\t"<<arr[i][j];
    }
    cout<<endl;
  }
}