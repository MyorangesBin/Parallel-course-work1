#include<iostream>
#include<chrono>
using namespace std::chrono;
int n,a[1200000],sum1,sum2,sum;
int main(){
    freopen("in.in","r",stdin);
    freopen("out1.txt","w",stdout);
    int T=20;
    while(T--){
        std::cin>>n;
        for(int i=1;i<=n;i++){
            std::cin>>a[i];
        }
        auto start = high_resolution_clock::now();
        for(int i=1;i<=n;i+=2){
            sum1=sum1+a[i];
            sum2=sum2+a[i+1];
        }
        sum=sum1+sum2;
        auto end = high_resolution_clock::now();
        auto duration = duration_cast<microseconds>(end - start);
        std::cout<<n<<","<<duration.count()<<'\n';
    }
    return 0;
}