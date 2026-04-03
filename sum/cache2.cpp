#include<iostream>
#include<chrono>
using namespace std::chrono;
int n,a[1200000],sum1,sum2,sum;
void getsum(int n){
    if(n==1) return ;
    for(int i=1;i<n/2;i++){
        a[i]+=a[n-i+1];
    }
    getsum(n>>1);
}
int main(){
    freopen("in.in","r",stdin);
    freopen("out2.txt","w",stdout);
    int T=20;
    while(T--){
        std::cin>>n;
        for(int i=1;i<=n;i++){
            std::cin>>a[i];
        }
        auto start = high_resolution_clock::now();
        getsum(n);
        auto end = high_resolution_clock::now();
        auto duration = duration_cast<microseconds>(end - start);
        std::cout<<n<<","<<duration.count()<<'\n';
    }
    return 0;
}
