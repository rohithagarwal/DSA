/*#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i = 2; i <= n; i += 2){
        cout << i << " ";
    }
    return 0;
}
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=2;i<=n;i++){
        if(i%2==1){
            cout<<i <<" ";
        }
    }
}