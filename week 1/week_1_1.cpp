#include<bits/stdc++.h>
using namespace std;
int LinearSearch(int *,int,int);
int main(){
    vector<int> cmp;
    int n,*arr,inputs,key;
    cin >> inputs;
    while(inputs>0){
        cin >> n;
        arr = new int[n];
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        cin >> key;
        cmp.push_back(LinearSearch(arr,n,key));
        inputs--;
    }
    for(int i=0;i<cmp.size();i++){
        cmp[i] != -1 ? cout << "Present " << cmp[i] : cout << "Not Present";
        cout << endl;
    }
    return 0;
}

int  LinearSearch(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i] == key){
            return i+1;
        }
    }
    return -1;
}