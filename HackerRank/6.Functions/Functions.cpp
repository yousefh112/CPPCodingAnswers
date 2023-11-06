#include<iostream>
using namespace std ;

int greatest_of_four(int a , int b , int c , int d){
    if (a > b && a > c && a > d ){
        return a;
    }
    else if (b > a && b > c && b > d){
        return b;
    }
    else if (c > a && c > b && c > d){
        return c;
    }
    else{
        return d;
    }
}
int main(){
int a,b,c,d,g;
cin >> a >> b >> c >> d;
g = greatest_of_four(a,b,c,d);
cout << g << endl;

    return 0;
}
