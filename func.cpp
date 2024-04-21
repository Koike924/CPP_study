#include <cmath>
#include "func.h"

unsigned int sum(const unsigned int m, const unsigned int n) {
    unsigned int sum_result = 0;

    if (m <= n) {     //mとnの大きさを比較(以下2つでも)
        for (unsigned int i = m; i <= n; i++) {
            sum_result += i;
        }
    }
    else {
        for (unsigned int i = n; i <= m; i++) {
            sum_result += i;
        }
    }
    return sum_result;
}

double ave(const unsigned int m, const unsigned int n){
    double ave_result = 0.0; //double型
    if (m <= n){
        ave_result = (double) sum(m, n) / (n - m + 1);
    }
    else{
        ave_result = (double) sum(m, n) / (m - n + 1);
    }
    return ave_result;

}

double stddev(const unsigned int m, const unsigned int n){
    double mean = ave(m, n);
    double sum_squ = 0.0;
    double mean_of_squ = 0.0;

    if (m <= n){
        for(unsigned int i = m; i <= n; i++){
            sum_squ += i * i;
        }

        mean_of_squ =sum_squ / (n - m + 1);
    }
    else{
        for(unsigned int i = n; i <= m; i++){
            sum_squ += i * i;
        }

        mean_of_squ = sum_squ / (m - n + 1);
    }

    double stddev_result = sqrt(mean_of_squ - (mean * mean));//分散 = 二乗平均 - 平均の二乗

    return stddev_result;
}
