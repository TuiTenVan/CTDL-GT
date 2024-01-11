#include<bits/stdc++.h>

using namespace std; 

long long tuyentinh(long long a[], long long n, long long x){
	for(long long i=0; i<n; i++){
		if(a[i]==x){
			return i; 
		} 
	}
	return -1; 
} 

long long nhiphan(long long a[], long long n, long long x){
	long long l=0, h=n-1, m=(l+h)/2;
	while(l<=x){
		m=(l+h)/2;
		if(a[m]>x){
			h=m-1;
		}else if(a[m]<x){
			l=m+1;	 
		}else{
			return m; 
		}
	}
	return -1; 
} 

long long tamphan(long long a[], long long n, long long x){
	long long l=0, h=n-1;
	long long m1=(l+h)/3, m2=(l+h)*2/3;
	while(l<=h){
		if(x<a[m1]){
			h=m1-1; 
		}else if(x=a[m1]){
			return m1; 
		}else if(a[m1]<x && x<a[m2]){
			l=m1+1;
			h=m2-1; 
		}else if(x==a[m2]){
			return m2;
		}else{
			l=m2+1;
		}
		m1=(l+h)/3;
		m2=(l+h)*2/3;
	} 
	return -1;
} 

long long noisuy(long long a[], long long n, long long x){
	long long l=0, h=n-1;
	if(x<a[l] || a[h]<x){
		return -1;
	}
	while(l<=h){
		long long p=l+(x-a[l])*(h-l)/(a[h]-a[l]);
		if(a[p]==x){
			return p;
		}else if(a[p]<x){
			l=p+1;
		}else{
			h=p-1;
		}
	}
	return -1;
}

long long jumping(long long a[], long long n, long long x){
	long long s=(long long)sqrt(n);
	long long p=0;
	long long r=min(s,n)-1;
	while(a[r]<x){
		p=s;
		s+=(long long)sqrt(n);
		if(p>=n){
			return -1;
		}
		r=min(s,n)-1;
	}
	while(a[p]<x){
		p++;
		if(p==min(s,n)){
			return -1;
		}
	}
	if(a[p]==x){
		return p;
	}
	return -1;
}

void TaoMang( long long a[],  long long n){
    for( long long i=0; i<n; i++){
        a[i]=n-i;
    }
}

int main(){
	long long n=2500; 
	long long x=n/3; 
    long long a[n];
    TaoMang(a, n);
	clock_t Start= clock();
		tuyentinh(a, n, x);
	clock_t End= clock();
	double t=(double)(End-Start)/CLOCKS_PER_SEC;
    printf("%.10f", t);	
}