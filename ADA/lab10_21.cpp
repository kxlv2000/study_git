//#include <iostream>
//#include <cstdio>
//#include <cstdlib>
//#include <cmath>
//
//using namespace std;
//int n1,de;
//double x[100010],y[100010],z[100010];
//double minDistance=100000000000.0;
//class point
//{
//public:
//    double x;
//    double y;
//    double z;
//};
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
//    for(j=low; j<=high; j++)
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
//    for(j=low; j<=high; j++)
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
//        for(int i=0; i<n; i++)
//        {
//            for(int j=0; j<n; j++)
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
//        for(int i=0; i<n; i++)
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
//        int middleIndex=n;
//        for(int i=0; i<n; i++)
//        {
//            if(fabs(p[i].y-middleY)<=currentMinDistance)
//            {
//                middleP[middleIndex]=p[i];
//                middleArrayY[middleIndex]=p[i].y;
//            }
//        }
//        for(int i=0; i<middleIndex; i++)
//        {
//            for(int j=1; j<=15; j++)
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
//    cin>>n1>>de;
//        for(int i=0;i<n1;i++){
//            switch (de) {
//                case 1:
//                    cin>>x[i];
//                    break;
//                case 2:
//                    cin>>x[i]>>y[i];
//                    break;
//                case 3:
//                    cin>>x[i]>>y[i]>>z[i];
//                    break;
//                default:
//                    break;
//            }
//        }
//    point * p=new point[n1];
//                for(int i=0; i<n1; i++)
//                {
//                    p[i].x=x[i];
//                    p[i].y=y[i];
//                    p[i].z=z[i];
//                }
//                quickSort(p, 0, n1-1);
//                double * arrayX, * arrayY, * arrayZ;
//                arrayX=new double[n1];
//                arrayY=new double[n1];
//                arrayZ=new double[n1];
//                for(int i=0; i<n1; i++)
//                {
//                    arrayX[i]=p[i].x;
//                    arrayY[i]=p[i].y;
//                    arrayZ[i]=p[i].z;
//                }
////                for(int i=0;i<n1;i++){
////                    for(int j=0;j<n1;j++)
////                    cout<<arrayX[i]<<" "<<arrayX[j]<<" "<<Distance(p[i], p[j])<<endl;
////                }
//                double minDistance;
//                point des1, des2;
//                minDistance=findMinDistance(p, arrayX, arrayY, arrayZ, n1, des1, des2);
//                cout <<des1.x<<" "<<des1.y<<" "<<des1.z<<" "<<endl;
//                cout <<des2.x<<" "<<des2.y<<" "<<des2.z<<" "<<endl;
//
//    return 0;
//}
