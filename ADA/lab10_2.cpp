////
////  lab10_2.cpp
////  ADA
////
////  Created by kxlv on 2020/5/6.
////  Copyright © 2020 kxlv. All rights reserved.
////
//
//#include <iostream>
//#include <algorithm>
//#include <math.h>
//#include <cmath>
//#include <climits>
//#define MAX_NUM 100010
//#define endl "\n" // 习惯endl结尾的同学可以这样
//long long DBL_MAX=10000000000;
//
//
//double minDistance=100000000000.0;
//using namespace std;
//
//int n1,de;
//long long x[100010],y[100010],z[100010];
////
//////点对结构体
////struct Pair
////{
////    long long d;//点对距离
////    long long d1,d2;//点对坐标
////};
////点结构
//struct Point{
//    Point(){}
//    Point(long long x, long long y){this->x=x;this->y=y;}
//    long long x;//x坐标
//    long long y;//y坐标
//};
//
//class point
//{
//public:
//    long long x;
//    long long y;
//    long long z;
//};
//
//template <class T>
//inline bool scan_d(T &ret) {
//    char c; int sgn;
//    if(c=getchar(),c==EOF) return 0; //EOF
//    while(c!=' '&&(c<'0'||c>'9')) c=getchar();
//    sgn=(c==' ')? 1:1;
//    ret=(c==' ')?0:(c-'0');
//    while(c=getchar(),c>='0'&&c<='9') ret=ret*10+(c-'0');
//    ret*=sgn;
//    return 1;
//}
//
//inline void out(int x) {
//    if(x>9) out(x/10);
//    putchar(x%10+'0');
//}
//void swap(long long & a, long long & b)
//{
//    long long tmp=a;
//    a=b;
//    b=tmp;
//}
//
//
////Y坐标定义
//struct axisY{
//    int ID;//点编号
//    long long Yvalue;//y坐标
//};
//
//bool cmpY(axisY y1, axisY y2){
//    return y1.Yvalue<y2.Yvalue;
//}
//bool cmpPoint(Point p1, Point p2){
//    return p1.x<p2.x;
//}
////
////
////long long Max(long long s[],int l,int r)//返回s[]中的最大值
////{
////    long long s_max=s[l];
////    for(int i=l+1;i<=r;++i)
////        if(s_max<s[i])
////            s_max=s[i];
////    return s_max;
////}
////
////long long Min(long long s[],int l,int r)//返回s[]中的最小值
////{
////    long long s_min=s[l];
////    for(int i=l+1;i<=r;++i)
////        if(s_min>s[i])
////            s_min=s[i];
////    return s_min;
////}
////
////template <class Type>
////void Swap(Type &x,Type &y)
////{
////    Type temp = x;
////    x = y;
////    y = temp;
////}
////
////template <class Type>
////int Partition(Type s[],Type x,int l,int r)//快速排序中的一次划分
////{
////    int i = l - 1,j = r + 1;
////    while(true)
////    {
////        while(s[++i]<x && i<r);
////        while(s[--j]>x);
////        if(i>=j)
////        {
////            break;
////        }
////        Swap(s[i],s[j]);
////    }
////    return j;
////}
////
//////返回s[]中的具有最近距离的点对及其距离
////Pair Cpair(long long s[],int l,int r)
////{
////    Pair min_d={10000000000,0,0};//最短距离
////    if(r-l<1) return min_d;
////
////    long long m1=Max(s,l,r),m2=Min(s,l,r);
////    long long m=(m1+m2)/2;//找出点集中的中位数
////
////    //将点集中的各元素按与m的大小关系分组
////    int j = Partition(s,m,l,r);
////
////    Pair d1=Cpair(s,l,j),d2=Cpair(s,j+1,r);//递归，求左边最小距离，右边最小距离
////    long long p=Max(s,l,j),q=Min(s,j+1,r);//左边最大值，右边最小值
////
////    //返回s[]中的具有最近距离的点对及其距离
////    if(d1.d<d2.d)
////    {
////        if((q-p)<d1.d)
////        {
////            min_d.d=(q-p);
////            min_d.d1=q;
////            min_d.d2=p;
////            return min_d;
////        }
////        else return d1;
////    }
////    else
////    {
////        if((q-p)<d2.d)
////        {
////            min_d.d=(q-p);
////            min_d.d1=q;
////            min_d.d2=p;
////            return min_d;
////        }
////        else return d2;
////    }
////
////}
//
////求两点p1和p2之间的距离
//double getDistance(Point p1,Point p2){
//    double distance;
//    
//    distance=sqrt(pow(p1.x-p2.x,2)+pow(p1.y-p2.y,2));
//    return distance;
//}
//
//
////当点数小于等于三点时暴力求解
//double getDisLessThree(Point points[], int start, int end, Point& point1, Point& point2){
//    int len;
//    double min;
//    
//    len=end-start+1;
//    if(len==1){
//        min=-1;
//    }
//    else if(len==2){//有两个点
//        min=getDistance(points[start], points[end]);
//        point1=points[start];
//        point2=points[end];
//    }
//    else{//有三个点
//        double dis1,dis2,dis3;
//        
//        dis1=getDistance(points[start],points[start+1]);
//        dis2=getDistance(points[start],points[end]);
//        dis3=getDistance(points[start+1],points[end]);
//        min=dis1;
//        point1=points[start];point2=points[start+1];
//        if(dis2<min){
//            min=dis2;
//            point1=points[start];point2=points[end];
//        }
//        if(dis3<min){
//            min=dis3;
//            point1=points[start+1];point2=points[end];
//        }
//    }
//    return min;
//}
//
////返回交叉区域最短距离
//double getMinCross(Point points[], axisY Y_2d[],int count, Point& point1, Point& point2){
//    double min_across=DBL_MAX;
//    double this_min;
//    double this_dis;
//    int i=0,j=0;
//    int p1,p2;
//    Point cur_point1,cur_point2;
//    
//    if(count==0){
//        return min_across;
//    }
//    for(i=0;i<count;++i){
//        this_min=DBL_MAX;
//        p1=Y_2d[i].ID;
//        cur_point1=points[p1];
//        cur_point2=points[p1];
//        for(j=1;j<8&&(i+j)<count;++j){
//            p2=Y_2d[i+j].ID;
//            this_dis=getDistance(points[p1], points[p2]);
//            if(this_dis<this_min){
//                this_min=this_dis;
//                cur_point2=points[p2];
//            }
//        }
//        if(this_min<min_across){
//            min_across=this_min;
//            point1=cur_point1;
//            point2=cur_point2;
//        }
//    }
//    return min_across;
//}
//
//
////返回最小距离
//double getMinDis(Point points[], axisY Y[], int left, int right, Point& point1, Point& point2){
//    int num_point;
//    int mid;
//    double min,min_left,min_right,min_cross;
//    int lenL,lenR;
//    Point *PL,*PR;
//    axisY *YL,*YR,*Y_2d;
//    double xleft,xright;
//    
//    num_point=right-left+1;
//    Y_2d=new axisY[num_point];//为Y_2d分配存储空间
//    if(num_point<=3){         //递归出口
//        return getDisLessThree(points, left, right,point1,point2);
//    }
//    mid=(left+right)/2;
//    lenL=mid-left+1;
//    lenR=right-mid;
//    PL=new Point[lenL];
//    YL=new axisY[lenL];
//    PR=new Point[lenR];
//    YR=new axisY[lenR];
//    //求PL
//    for(int i=left,j=0;i<=mid;++i){
//        PL[++j]=points[i];
//    }
//    //求PR
//    for(int i=mid+1,j=0;i<=right;++i){
//        PR[++j]=points[i];
//    }
//    //求YL和YR
//    for(int i=0,jl=0,jr=0;i<num_point;++i){
//        if(Y[i].ID<=mid)  //插入YL
//            YL[jl++]=Y[i];
//        else
//            YR[jr++]=Y[i];  //插入YR
//    }
//    //递归求解
//    Point point_L1,point_L2;
//    Point point_R1,point_R2;
//    min_left=getMinDis(points, YL, left, mid, point_L1, point_L2);
//    min_right=getMinDis(points,YR,mid+1,right, point_R1, point_R2);
//    min=min_left;point1=point_L1;point2=point_L2;
//    if(min_right<min){
//        min=min_right;point1=point_R1;point2=point_R2;
//    }
//    //求Y_2d
//    int count=0;
//    xleft=points[mid].x-min;
//    xright=points[mid].x+min;
//    for(int i=0;i<num_point;){
//        if((points[Y[i].ID].x<xleft) || (points[Y[i].ID].x>xright)){
//            ++i;
//        }
//        else{
//            Y_2d[count++]=Y[i];
//            ++i;
//        }
//    }
//    //求min_cross;
//    Point point_M1,point_M2;
//    min_cross=getMinCross(points, Y_2d, count, point_M1, point_M2);
//    if(min_cross<min){
//        point1=point_M1;point2=point_M2;min=min_cross;
//    }
//    return min;
//}
//
//
//// [low, high]
//int randomInteger(int low, int high)
//{
//    return low+rand()%(high-low+1);
//}
//
//void swap(double & a, double & b)
//{
//    double tmp=a;
//    a=b;
//    b=tmp;
//}
//
//int quickSortPartition(point * p, int low, int high)
//{
//    int random=randomInteger(low, high);
//    swap(p[random], p[low]);
//    int i, j;
//    i=low; j=high;
//    double pivot=p[low].y;
//    for(j=low; j<=high; ++j)
//    {
//        if(pivot>p[j].y)
//        {
//            i=i+1;
//            swap(p[i], p[j]);
//        }
//    }
//    swap(p[i], p[low]);
//    return i;
//}
//
//
//int partition(double * p, int len, int low, int high)
//{
//    int i, j;
//    int random=randomInteger(low, high);
//    swap(p[low], p[random]);
//    i=low; j=high;
//    double pivot=p[low];
//    for(j=low; j<=high; ++j)
//    {
//        if(pivot>p[j])
//        {
//            i=i+1;
//        }
//    }
//    swap(p[random], p[low]);
//    return i;
//}
//
//void quickSort(point * p, int low, int high)
//{
//    if(low<high)
//    {
//        int par=quickSortPartition(p, low, high);
//        quickSort(p, low, par-1);
//        quickSort(p, par+1, high);
//    }
//}
//
//double findMiddle(double * p, int len, int ith)
//{
//    if(len==1)
//        return p[0];
//    int random=partition(p, len, 0, len-1);
//    if(random == ith)
//    {
//        return p[random];
//    }
//    else if(random < ith)
//    {
//        return findMiddle(p+random+1, len-random-1, ith-random-1);
//    }
//    else
//    {
//        return findMiddle(p, random, ith);
//    }
//}
//
//
//
//double Distance(const point & p1, const point & p2)
//{
//    return sqrt( (p1.x-p2.x)*(p1.x-p2.x) + (p1.y-p2.y)*(p1.y-p2.y) + (p1.z-p2.z)*(p1.z-p2.z) );
//}
//
//double findMinDistance(point * p, double * arrayX, double * arrayY, double * arrayZ, int n, point & des1, point & des2)
//{
//
//
//    if(n<=3)
//    {
////        cout <<des1.x<<" "<<des1.y<<" "<<des1.z<<" "<<endl;
////        cout <<des2.x<<" "<<des2.y<<" "<<des2.z<<" "<<endl;
//        for(int i=0; i<n; ++i)
//        {
//            for(int j=0; j<n; ++j)
//            {
//                if(j != i)
//                {
//                    if(Distance(p[i], p[j])<minDistance)
//                    {
//                        minDistance=Distance(p[i], p[j]);
//                        des1=p[i]; des2=p[j];
//                    }
//                }
//            }
//
//        }
//         return minDistance;
//    }
//    else
//    {
//        double middleY=findMiddle(arrayY, n, (int)floor((double)(n/2)));
//        // partition P set into PL and PR according to the middle value of y
//        point * pL=new point[n];
//        point * pR=new point[n];
//        int lIndex=0, rIndex=0;
//        double * leftArrayX=new double[n];
//        double * leftArrayY=new double[n];
//        double * leftArrayZ=new double[n];
//        double * rightArrayX=new double[n];
//        double * rightArrayY=new double[n];
//        double * rightArrayZ=new double[n];
//        for(int i=0; i<n; ++i)
//        {
//            if(p[i].y<middleY)
//            {
//                pL[lIndex]=p[i];
//                leftArrayX[lIndex]=p[i].x;
//                leftArrayY[lIndex]=p[i].y;
//                leftArrayZ[lIndex]=p[i].z;
//                lIndex++;
//            }
//            else
//            {
//                pR[rIndex]=p[i];
//                rightArrayX[rIndex]=p[i].x;
//                rightArrayY[rIndex]=p[i].y;
//                rightArrayZ[rIndex]=p[i].z;
//                rIndex++;
//            }
//        }
//        // divide and conquer
////        cout <<des1.x<<" "<<des1.y<<" "<<des1.z<<" "<<endl;
////        cout <<des2.x<<" "<<des2.y<<" "<<des2.z<<" "<<endl;
//        double lMinDistance=findMinDistance(pL, leftArrayX, leftArrayY, leftArrayZ, lIndex, des1, des2);
//        double rMinDistance=findMinDistance(pR, rightArrayX, rightArrayY, rightArrayZ, rIndex, des1, des2);
//        double currentMinDistance=lMinDistance<rMinDistance ? lMinDistance : rMinDistance;
//        point * middleP=new point[n];
//        double * middleArrayY=new double[n];
//        int middleIndex=(lIndex+rIndex/2);
//        for(int i=0; i<n; ++i)
//        {
//            if(fabs(p[i].y-middleY)<=currentMinDistance)
//            {
//                middleP[middleIndex]=p[i];
//                middleArrayY[middleIndex]=p[i].y;
//            }
//        }
//        for(int i=0; i<middleIndex; ++i)
//        {
//            for(int j=1; i+j<n; ++j)
//            {
//                if(Distance(p[i], p[i+j])<currentMinDistance)
//                {
//                    currentMinDistance=Distance(p[i], p[i+j]);
//                    des1=p[i];
//                    des2=p[i+j];
//                }
//            }
//        }
//        minDistance=currentMinDistance;
//        delete [] pL;
//        delete [] pR;
//        delete [] leftArrayX;
//        delete [] leftArrayY;
//        delete [] leftArrayZ;
//        delete [] rightArrayX;
//        delete [] rightArrayY;
//        delete [] rightArrayZ;
//        delete [] middleP;
//        delete [] middleArrayY;
//    }
//    return minDistance;
//}
//
//int main()
//{
//    ios_base::sync_with_stdio(0); // 不要和 `scanf`，`printf` 混用
//    cin.tie(0);
//    cout.tie(0);
//    cin>>n1>>de;
//    for(int i=0;i<n1;++i){
//        switch (de) {
//            case 1:
//                cin>>x[i];
//                break;
//            case 2:
//                cin>>x[i]>>y[i];
//                break;
//            case 3:
//                cin>>x[i]>>y[i]>>z[i];
//                break;
//            default:
//                break;
//        }
//    }
//    
//    switch (de) {
//        case 1:{
//            sort(x,x+n1);
//            long long  min1=10000000000;
//            long long ans1=0,ans2=0;
//            for(int i=0;i<n1-1;++i)
//            {
//                if(min1>x[i+1]-x[i]){
//                    min1=x[i+1]-x[i];
//                    ans1=x[i];
//                    ans2=x[i+1];
//                }
//            }
////            Pair d;
////            d=Cpair(x,0,n-1);
//            cout<<ans1<<endl<<ans2;
//            break;
//        }
//        case 2:{
//            long long min;
//            Point points[n1];//存储所有点,排序后下标表示ID
//            //axisX X[MAX_NUM];//存储所有点x坐标
//            axisY Y[n1];//存储所有点y坐标
//            Point point1,point2;
//            
//            for(int i=0;i<n1;++i){
//                points[i].x=x[i];
//                points[i].y=y[i];
//            }
//            
//            sort(points,points+n1,cmpPoint);// points按x坐标有序
//            for(int i=0;i<n1;++i){
//                Y[i].ID=i;
//                Y[i].Yvalue=points[i].y;
//            }
//            sort(Y,Y+n1,cmpY);
//            min=getMinDis(points, Y, 0, n1-1,point1, point2);
//            cout << point1.x << " " << point1.y <<endl<<point2.x<< " " << point2.y << endl;
//            break;}
//        case 3:
//        {
//               point * p=new point[n1];
//                            for(int i=0; i<n1; ++i)
//                            {
//                                p[i].x=x[i];
//                                p[i].y=y[i];
//                                p[i].z=z[i];
//                            }
//                            quickSort(p, 0, n1-1);
//                            double * arrayX, * arrayY, * arrayZ;
//                            arrayX=new double[n1];
//                            arrayY=new double[n1];
//                            arrayZ=new double[n1];
//                            for(int i=0; i<n1; ++i)
//                            {
//                                arrayX[i]=p[i].x;
//                                arrayY[i]=p[i].y;
//                                arrayZ[i]=p[i].z;
//                            }
//            //                for(int i=0;i<n1;++i){
//            //                    for(int j=0;j<n1;++j)
//            //                    cout<<arrayX[i]<<" "<<arrayX[j]<<" "<<Distance(p[i], p[j])<<endl;
//            //                }
//                            double minDistance;
//                            point des1, des2;
//                            minDistance=findMinDistance(p, arrayX, arrayY, arrayZ, n1, des1, des2);
//                            cout <<des1.x<<" "<<des1.y<<" "<<des1.z<<" "<<endl;
//                            cout <<des2.x<<" "<<des2.y<<" "<<des2.z<<" "<<endl;
//
//            
//        }
//        default:
//            break;
//    }
//    return 0;
//}
