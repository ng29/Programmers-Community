#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,k;
	cin>>n>>k;
	vector<int>v;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		v.push_back(x);
	}
	priority_queue<int, std::vector<int>, greater<int>> pq;

    for(int i = 0;i<k;++i){
        pq.push(v[i]);
    }
    cout<<"Kth Smallest Element IS "<<endl;
    cout<< pq.top()<<endl;
}