//
//#include <iostream>
//#include <algorithm>
//#include <math.h>
//#include <cmath>
//#include <climits>
//
//using namespace std;
//
//long long p,N;
//long long NUM = 1600008;
//long long prime[400002];
//bool f[1600008];
//long long pNum = 0;
//
//long long e_r[400010];
//long long r_e[400010];
//long long input[400010];
//long long ex[400010];
//long long cnt[400010];
//long long res[400010];
//long long ans[400010];
//long long zeros=0;
//
//void getPrime()//线性筛选素数
//{
//    for (long long i = 2; i < NUM; ++ i)
//    {
//        if (!f[i])
//        {
//            f[i] = true;
//            prime[pNum++] = i;
//        }
//        for (long long j = 0; j < pNum && i*prime[j] < NUM; ++ j)
//        {
//            f[i*prime[j]] = true;
//            if (i%prime[j] == 0)
//            {
//                break;
//            }
//        }
//    }
//}
//
//long long getProduct(long long a,long long b,long long P)//快速求次幂mod
//{
//    long long ans = 1;
//    long long tmp = a;
//    while (b>0)
//    {
//        if ((b&1)>0)
//        {
//            ans = ans*tmp%P;
//        }
//        tmp = tmp*tmp%P;
//        b>>=1;
//    }
//    return ans;
//}
//bool judge(long long num)//求num的所有的质因子
//{
//    long long elem[100010];
//    long long elemNum = 0;
//    long long k = p - 1;
//    for (long long i = 0; i < pNum; ++ i)
//    {
//        bool flag = false;
//        while ((k%prime[i])==0)
//        {
//            flag = true;
//            k /= prime[i];
//        }
//        if (flag)
//        {
//            elem[elemNum ++] = prime[i];
//        }
//        if (k==1)
//        {
//            break;
//        }
//        if (k/prime[i]<prime[i])
//        {
//            elem[elemNum ++] = prime[i];
//            break;
//        }
//    }
//    
//    bool flag = true;
//    for (long long i = 0; i < elemNum; ++ i)
//    {
//        if (getProduct(num,(p-1)/elem[i],p) == 1)
//        {
//            flag = false;
//            break;
//        }
//    }
//    return flag;
//}
//
//
//int main()
//{
//    cin>>N;
//    cin>>p;
//
//        for (long long i=0;i<N;i++){
//            cin>>input[i];
//        }
//        getPrime();
//        bool find=false;
//        long long proot=0;
//        while (p>0&&!find)
//        {
//            for (long long i = 2;!find;++i)
//            {
//                if (judge(i))
//                {
//                    proot=i;
//                    find=true;
//                }
//            }
//        }
////    cout<<proot;
//        long long tmp=1;
//        for(long long i=1;i<p;i++){
//            tmp=tmp*proot;
//            e_r[i]=tmp%p;
//        }
//        for(long long i=1;i<p;i++){
//            r_e[(long long)e_r[i]]=i;
//        }
//    
//        for(long long i=0;i<N;i++){
//            long long tp2=input[i]%p;
//            if(tp2==0)zeros++;
//            else
//            ex[i]=r_e[tp2];
//            //cout<<ex[i];
//        }
//    
//    for(long long i=0;i<N;i++){
//        cnt[ex[i]]++;
//    }
////    for(long long i=0;i<p;i++){
////        cout<<cnt[i];
////    }
//        ans[0]=N*N;
//    for(long long i=1;i<p;i++){
//        for(long long j=1;j<p;j++){
//            res[i+j]+=cnt[i]*cnt[j];
//            ans[0]-=cnt[i]*cnt[j];
//        }
//    }
////        for(long long i=0;i<2*p;i++){
////            cout<<i<<" "<<res[i]<<endl;
////        }
//    for(long long i=2;i<2*p-1;i++){
//        long long tp=i%(p-1);
//        if(tp==0)tp=p-1;
//        ans[e_r[tp]]+=res[i];
//    }
//
//    for(long long i=0;i<p;i++){
//        cout<<ans[i]<<endl;
//    }
//
//
////        for (long long i=1;i<p;i++){
////            System.out.prlong longln(e_r[i]+" "+r_e[i]);
////        }
//    }
//
//
