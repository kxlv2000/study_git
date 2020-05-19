////
////  main.cpp
////  ADA
////
////  Created by kxlv on 2020/5/5.
////  Copyright © 2020 kxlv. All rights reserved.
////
//
//#include <iostream>
//#include <algorithm>
//#include <math.h>
//#include <cmath>
//using namespace std;
//int n,top,start,p1,p2,ans;
//int stack[500100];
//int a,b;
//long long minx,miny;
//long long mi=1e9,mii;
//class node
//{
//public:
//    long long x,y;
//    double pol;
//};
//bool com(node o1, node o2)
//{
//    return o1.pol<o2.pol;
//}
//node nodes[500100];
//bool IsRightTuring(int a,int b,int c)
//{
//    
//    if((nodes[b].x-nodes[a].x) * (nodes[c].y-nodes[a].y) - (nodes[c].x-nodes[a].x) * (nodes[b].y-nodes[a].y)>=0){
////                cout<<"t"<<endl;
//        return true;
//
//    }
////    cout<<"f"<<endl;
//    return false;
//}
//
//
//int main() {
//    cin>>n;
//    for(int i=0;i<n;i++)
//    {
//        cin>>a>>b;
//        nodes[i].x=a;
//        nodes[i].y=b;
//        
//        
//        if(mi>b)
//        {
//            mii=i;
//            mi=b;
//        }
//    }
//    minx=nodes[mii].x;
//    miny=nodes[mii].y;
//    for(int i=0;i<n;i++){
//        if(nodes[i].y==miny) {
//            if(nodes[i].x==minx)
//                nodes[i].pol=0;
//            //                   else
//            //                       pol[i]=180;
//        }
//        //90度
//        else if(nodes[i].x==minx)
//            nodes[i].pol=90;
//        //其他
//        else
//            nodes[i].pol=atan2(nodes[i].y-miny,nodes[i].x-minx)*180/3.14159265358979;
//    }
//    sort(nodes,nodes+n,com);
//    for(int i=0;i<n;i++){
//        cout<<nodes[i].x<<nodes[i].y<<nodes[i].pol<<endl;
//    }
//    
//    top=0;
//    start=0;
//    ans=3;
//    stack[top++]=start++;
//    stack[top++]=start++;
//    stack[top++]=start++;
//    while(start!=n+1) {
//            //获取p1和p2
//            p2=stack[top-1];
//            p1=stack[top-2];
//     
//            //右转，弹出p2,压入p1
//            while(IsRightTuring(start,p2,p1)) {
//                if(top<=2)
//                    break;
//                top--;
//                ans--;
//                p2=stack[top-1];
//                p1=stack[top-2];
//            }
//     
//            //压入新的点
//            stack[top++]=start++;
//        ans++;
//        }cout<<ans;
//    return 0;
//
//}
//
//
//
//
