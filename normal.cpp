#include<iostream>
#include<chrono>
using namespace std::chrono;
int n,a[1200000],sum;
int main(){
    freopen("in.in","r",stdin);
    freopen("out3.txt","w",stdout);
    int T=20;
    while(T--){
        std::cin>>n;
        for(int i=1;i<=n;i++){
            std::cin>>a[i];
        }
        auto start = high_resolution_clock::now();
        for(int i=1;i<=n;i++){
            sum=sum+a[i];
        }
        auto end = high_resolution_clock::now();
        auto duration = duration_cast<microseconds>(end - start);
        std::cout<<n<<","<<duration.count()<<'\n';
    }
    return 0;
}