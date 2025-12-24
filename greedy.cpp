//jump game
#include <iostream>
#include <vector>
using namespace std;
bool canJump(vector<int> jump){
    int n = jump.size();
    int minindex =0;
    for(int i = 0 ; i<n;i++){
        if(i>minindex)return false;
        minindex = max(minindex,i+jump[i]);
    }
    return true;
}

int main(){
int n;
cin>>n;
vector<int> jump(n);
for(int i = 0 ; i <n;i++){
    cin>>jump[i];
}
if(canJump(jump)){
    cout<<"True";
}else{
    cout<<"False";
}

return 0;
}