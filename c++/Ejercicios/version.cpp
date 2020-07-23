#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N, A[100000], i;
    cin>>N;
    for(i=0;i<N;i++)
        cin>>A[i];
    i-=1;
    while(i>=0) 
        cout<<A[i--]<<" ";
    return 0;
}