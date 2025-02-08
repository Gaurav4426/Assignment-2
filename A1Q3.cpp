#include<iostream>
using namespace std;
bool checkpalindrome(string str){
    int left=0;
    int right=str.length()-1;
    while(left<=right){
      if(str[left]!=str[right]){
        return false;
      }
      else{
        left++;
        right--;
      }

    }return true;

}
int main(){
 string str ;
cout<<"Enter the string "<<endl;
cin>>str;
bool ans=checkpalindrome(str);
if(ans){
 cout<<"String is palindrome "<<endl;
}else{
    cout<<"String is not palindrome "<<endl;
}
}