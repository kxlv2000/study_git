//
//  lab11_2_1.cpp
//  ADA
//
//  Created by kxlv on 2020/5/13.
//  Copyright © 2020 kxlv. All rights reserved.
//

#include <iostream>
#define endl "\n" // 习惯endl结尾的同学可以这样

using namespace std;
long long n,p,input[100010],ans[100010];

inline void out(int x) {
    if(x>9) out(x/10);
    putchar(x%10+'0');
}

int main()
{
    ios_base::sync_with_stdio(0); // 不要和 `scanf`，`printf` 混用
    cin.tie(0);
    cout.tie(0);
    cin>>n>>p;
    for(int i=0;i<n;++i){
        cin>>input[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;++j){
            ans[input[i]*input[j]%p]++;
        }
    }
    for(int i=0;i<p;i++){
        out(ans[i]);
        cout<<"\n";
    }
    return 0;
}

