//#include <bits/stdc++.h>
#include<iostream>
#define LL long long
using namespace std;

//const int maxn = 1e3 + 5;

//int main()
//{
//    double n, x[maxn], y[maxn];
//    cin >> n;
//    LL sumX = 0, sumY = 0;
//    for (int i = 0; i < n; i++) {
//        cin >> x[i] >> y[i];
//        sumX += x[i];
//        sumY += y[i];
//    }
//    int X = sumX / n, Y = sumY / n;
//    int preX = X, preY = Y;
//
//    while (true) {
//        double sum1 = 0, sum2 = 0, sum3 = 0;
//        for (int i = 0; i < n; i++) {
//            double dis = sqrt((x[i] - X) * (x[i] - X) + (y[i] - Y) * (y[i] - Y));
//            sum1 += x[i] / dis;
//            sum2 += y[i] / dis;
//            sum3 += 1 / dis;
//        }
//        preX = X, preY = Y;
//        X = sum1 / sum3;
//        Y = sum2 / sum3;
//        if (abs(X - preX) > 2 || abs(Y - preY) > 2) break;
//    }
//
//    double ans = 0;
//    for (int i = 0; i < n; i++) {
//        double dis = sqrt((x[i] - preX) * (x[i] - preX) + (y[i] - preY) * (y[i] - preY));
//        ans += dis;
//    }
//    cout << ans << endl;
//    cout << endl << preX << " " << preY;
//    return 0;
//}