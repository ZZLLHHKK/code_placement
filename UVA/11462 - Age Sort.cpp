#include <bits/stdc++.h>
using namespace std;

void cntSort(vector<int>& arr){
    int mxe = *max_element(arr.begin(), arr.end()); //find the biggest element

    vector<int> count(mxe + 1, 0); //initialize

    for(int num : arr) count[num]++; 
    for(int i = 1; i <= mxe; i++) count[i] += count[i-1]; //prefix sum

    vector<int> result(arr.size());

    for(int j = arr.size() - 1; j >= 0; j--){
        result[count[arr[j]] - 1] = arr[j];
        count[arr[j]]--;
    }
    for(int k = 0; k < arr.size(); k++) arr[k] = result[k];
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;

    while(cin >> t && t){
        vector<int> age(t);
        for(int i = 0; i < t; i++) cin >> age[i];

        cntSort(age);

        for(int num : age) cout << num << " ";
        cout << endl;
    }
}
