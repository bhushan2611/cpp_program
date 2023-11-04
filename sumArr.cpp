#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v{1,2,3,4,5,6,7,8,9,10};
    int sum=0;
    for(int i=0; i<v.size(); i++)
        sum += v[i];
    cout<<sum;
}