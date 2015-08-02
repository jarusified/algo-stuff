#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int t;
	cin>>t;
	int n,d,k;
	cin>>n>>d>>k;
	float a[n][d];
	for(int i=0;i<n;i++){
		for(int j=0;j<d;j++){
			cin>>a[i][j];			
		}
	}
	int index[n];
	float maximum[n];
	for(int i=0;i<n;i++){
		float max=0.0;
		for(int j=0;j<d;j++){
				for(int h=0;h<n;h++){
					if(j==index[h]) break;
				}
				if(a[i][j]>max) { 
					max=a[i][j];
					maximum[i]=a[i][j];
					index[i]=j;	
					cout<<"i:"<<i<<" "<<"j:"<<j<<"\n";
				}
		}
	}
	sort(maximum,maximum+n);
	cout<<maximum[0]<<"\n";
	for(int i=0;i<n;i++){
		cout<<index[i]+1<<" ";
	}
	cout<<"\n";
	return 0;
}
