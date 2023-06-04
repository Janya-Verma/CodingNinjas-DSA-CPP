/*
Number Pattern 1

Print the following pattern

Pattern for N = 4
1
23
345
4567

Input Format :
N (Total no. of rows)

Output Format :
Pattern in N lines

Sample Input 1 :
3
Sample Output 1 :
1
23
345
*/

#include<iostream>
using namespace std;


int main(){
	int N;
	cin>>N;

	int i=1;

	while(i<=N){
		int k=i;
        int j=1;

		while(j<=i){
			cout<<k;
            k++;
            j++;
		}
		cout<<endl;
        i++;
	}
}
