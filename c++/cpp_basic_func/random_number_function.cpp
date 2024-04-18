#include <bits/stdc++.h>
using namespace std;
//pseudorandomness fuction c++11 整數隨機數生成器

int main() {
    std::mt19937 mt_rand1(std::random_device{}()); //real random number
    std::mt19937 mt_rand2(time(0)); //take current time to be a number, the disadvantage is the same time produce the same number
    std::mt19937 mt_rand3(std::chrono::system_clock::now().time_since_epoch().count()); //以時刻計算的時間間隔的計數值作為種子

    for (int i = 0; i < 5; ++i) 
        cout << mt_rand1() << endl;
    cout << endl;
    

    std::mt19937 rng(std::random_device{}());
    std::normal_distribution<double> nd(5, 2); //常態分布 詳細內容 : https://zh.cppreference.com/w/cpp/numeric/random
    for (int i = 0; i < 5; i++) 
        cout << nd(rng) << endl;
    
}
