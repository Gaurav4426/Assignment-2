#include<iostream>
using namespace std;
void reversearray(int a[],int n){
  int left=0;
  int right=n-1;
  while (left<=right)
  {
    swap(a[left],a[right]);
    left++;
    right--;
  }
   cout<<"Reversed array is: "<<endl;
  for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
  }
}   
int maximumarray(int a[],int n){
   int max=0;
    for(int i=0;i<n;i++){
      if(a[i]>max){
        max=a[i];
      }
    }
      return max;

}
int minimumarray(int a[],int n){
  int min=0;
   for(int i=0;i<n;i++){
     if(a[i]<min){
       min=a[i];
     }
   }
     return min;

}
  int main(){
    int n;
    cout<<"Enter the size of array "<<endl;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
      cout<<"Enter the element at "<<i<<" th index"<<endl;
      cin>>a[i];
    }
    reversearray(a,n);
    int ans=maximumarray(a,n);
    int result=minimumarray(a,n);
    cout<<"Maximum element in the array is "<<ans<<endl;
    cout<<"Minimum element in the array is "<<result<<endl;     
  }

