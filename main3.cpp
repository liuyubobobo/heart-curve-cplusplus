#include <iostream>
#include <cmath>

using namespace std;

// 另外一个心形曲线
// x^2 + (5.0*y/4.0-sqrt(|x|))^2 = 1
// y ~ (-1.1 , 1.3 )
// x ~ (-1.1 , 1.1 )
int main() {

    for( float y = 1.3 ; y >= -1.1 ; y -= 0.06 ){
        for( float x = -1.1 ; x <= 1.1 ; x += 0.025 )
            if( x*x + pow(5.0*y/4.0-sqrt(fabs(x)),2) - 1 <= 0.0 )
                cout<<'*';
            else
                cout<<' ';
        cout<<endl;
    }

    return 0;
}