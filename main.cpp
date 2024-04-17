#include <fstream>
#include <iostream>

int main() {
    std::ifstream in("area.in");
    std::ofstream out("area.out");
    int n;
    in>>n;
    int points[n][2];
    for (int i = 0; i < n; ++i) {
        in>>points[i][0]>>points[i][1];
    }
    long long sum=(points[n-1][1]+points[0][1])*(points[0][0]-points[n-1][0]);
    for (int i = 0; i < n-1; ++i) {
        sum += (points[i][1]+points[i+1][1])*(points[i+1][0]-points[i][0]);
    }
    if (sum<0){
        sum*=-1;
    }
    out<<sum/2;
    if ((sum&1)){
        out<<'.'<<'5';
    }
    return 0;
}
