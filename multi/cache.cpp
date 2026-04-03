#include<iostream>
#include<chrono>
using namespace std::chrono;

int n,a[5000][5000],p[5000],ans[5000];
int main(){
    freopen("in.in","r",stdin);
    freopen("out1.txt","w",stdout);
    int T=20;
    while(T--){
        std::cin>>n;
        std::cout<<n<<",";
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++)
            std::cin>>a[i][j];
        }
        for(int i=1;i<=n;i++){
            std::cin>>p[i];
        }
        auto start = high_resolution_clock::now();
        for(int k=1;k<=10;k++){
            for(int i=1;i<=n;i++){
                for(int j=1;j<=n;j++){
                    ans[j]=(ans[j]+p[i]*a[i][j]);
                }
            }
        }
        auto end = high_resolution_clock::now();
        auto duration = duration_cast<microseconds>(end - start);
        std::cout<<duration.count()<<'\n';
    }
    return 0;
}