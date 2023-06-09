/*
Code : Triangle of Numbers

Print the following pattern for the given number of rows.
Pattern for N = 4
   1
  232
 34543
4567654

The dots represent spaces.

Input format :
Integer N (Total no. of rows)

Output format :
Pattern in N lines

Constraints :
0 <= N <= 50

Sample Input 1:
5

Sample Output 1:
    1
   232
  34543
 4567654
567898765

Sample Input 2:
4

Sample Output 2:
   1
  232
 34543
4567654
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i=1;

    while(i<=n){
        int sps=1;
        while(sps<n-i+1){
            cout<<" ";
            sps++;
        }
        int j=i;
        while(j<=(2*i-1)){
            cout<<j;
            j++;
        }
        j=j-2;
        while(j>=i){
            cout<<j;
            j--;
        }
        cout<<endl;
        i++;
    }
}