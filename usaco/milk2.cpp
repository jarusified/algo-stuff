/*ID: jarus301
  PROG: milk2
  LANG: C++
*/

#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;
typedef struct time time;
struct time{
	int start,end;
};
time times[10000];

int compare( const void *a,const void *b){
	times *aa,*bb;
	aa=(times*)a;
	bb=(times*)b;
	if(a->begin>b->begin) return 1;
	if(a->begin<b->begin) return -1;
	return 0;
}
int main(){
	int n;
	cin>>n;
	int milk=0,idle=0;
	int a,b;
	for(int i=0;i<n;i++){
		cin>>times[i].start,times[i].end;
	}
	qsort(times,n,sizeof(times),compare);
	

}
