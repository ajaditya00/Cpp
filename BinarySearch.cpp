/*
#include<bits/stdc++.h>
using namespace std;
int Binarry_search(vector<int>&v,int n,int x){
    int low=0;
    int high=n-1;
    while (low<=high)
    {
        int mid=(low+high)/2;
        if(v[mid]==x) return mid;
        else if(x>v[mid]){
            low=mid+1;
        }
        else
        high=mid-1;
    }
    return -1;
    
}
int main(){
    vector<int>a;
    a.push_back(2);
    a.push_back(3);
    a.push_back(25);
    a.push_back(26);
    a.push_back(6);
    sort(a.begin(),a.end());
    int n=a.size();
    int target;
    cout<<"Enter the taget ";
    cin>>target;
    cout<<Binarry_search(a,n,target);
return 0;
}
//-------------------------------Upper_bound---------------------------
#include<bits/stdc++.h>
using namespace std;
int Lower_bound(vector<int>&v,int n,int x){
    int low=0;
    int high=n-1;
    int ans=n;
    while (low<=high)
    {
        int mid=(low+high)/2;
        if(v[mid]>=x){
            ans=mid;
            high=mid-1;
        }
        else
        low=mid+1;
    }
    return ans;
    //another technique
    auto lb=lower_bound(v.begin(),v.end(),x)
    return lb-v.end(); 
    
}
int main(){
    vector<int>a;
    a.push_back(2);
    a.push_back(3);
    a.push_back(25);
    a.push_back(26);
    a.push_back(6);
    sort(a.begin(),a.end());
    int n=a.size();
    int target;
    cout<<"Enter the taget ";
    cin>>target;
    cout<<Lower_bound(a,n,target);
return 0;
}*/

#include<bits/stdc++.h>
using namespace std;
int Upper_bound(vector<int>&v,int n,int x){
    int low=0;
    int high=n-1;
    int ans=n;
    while (low<=high)
    {
        int mid=(low+high)/2;
        if(v[mid]>x){
            ans=mid;
            high=mid-1;
        }
        else
        low=mid+1;
    }
    return ans;
    //another technique
    // auto lb=lower_bound(v.begin(),v.end(),x)
    // return lb-v.end(); 
    
}
int main(){
    vector<int>a;
    a.push_back(2);
    a.push_back(3);
    a.push_back(25);
    a.push_back(26);
    a.push_back(6);
    sort(a.begin(),a.end());
    int n=a.size();
    int target;
    cout<<"Enter the taget ";
    cin>>target;
    cout<<Upper_bound(a,n,target);
return 0;
}