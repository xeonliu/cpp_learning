#include <iostream>
using namespace std;

//此处填补2行代码
char *myfun(int &a,int &b);
char ans[3]={' ',' ','\0'};
int myfun(int* a, int* b);
int main() {
    int x, y;
    cin >> x >> y;
    cout << myfun(x, y);
    cout << x << ' ' << y;
    return 0;
}
int myfun(int* a, int* b) {
    int c = *a - *b;
    *a *= 2;
    *b *= 3;
    return c;
}

//此处定义一个函数
char *myfun(int &a,int &b){
    ans[0] = -(myfun(&b,&a))%10+'0';
    return ans;
}

