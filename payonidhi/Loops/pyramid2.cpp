#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter any natural number"<<endl;
    cin>>n;
    int i,j;
    int count = 1;
   for(i=1; i<=n; i++){
       for(j=1; j<=(n-i); j++){
           cout<<" ";
       }
       for(j=1; j<=i; j++){
           cout<<count<<" ";
            count++;
       }
       cout<<endl;
   }
   return 0;
}
