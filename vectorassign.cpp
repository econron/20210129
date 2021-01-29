#include <array>
#include <vector>
#include <iostream>

using namespace std;

int main(){
    vector<int> data = {6,7,8,9};
    vector<int> a = {1,2,3,4};
    a.assign(data.begin(), data.end());
}