//-------------selection sort------------------ in this we pick minimum value and swap it with first index
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>a1;
    a1.push_back(10);
    a1.push_back(15);
    a1.push_back(5);
    a1.push_back(7);
    a1.push_back(18);
    int n=a1.size();
   for(int i=0;i<=n-2;i++){
        int mini=i;
        for(int j=i;j<=n-1;j++){
            if(a1[j]<a1[mini])mini=j;
        }
        swap(a1[mini],a1[i]);
   }
   for(int i=0;i<n;i++){
    cout<<a1[i]<<" ";
   }
}*/
//-------------Bubble sort-------------------push the maximum ------------to the last by adjacent swaping--------------
#include<bits/stdc++.h>
using namespace std;
void bubble_sort(vector <int>&arr){
    int n=arr.size();
   for(int i=n-1;i>=0;i--){
      for(int j=0;j<=i-1;j++){
          if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
          }
      }
  }
}
int main(){
    vector<int>a1;
    a1.push_back(10);
    a1.push_back(15);
    a1.push_back(5);
    a1.push_back(7);
    a1.push_back(18);
    int n=a1.size();
    bubble_sort(a1);
    for(int i=0;i<n;i++){
       cout<<a1[i]<<" "; 
   }
return 0;
}