#include <iostream>
#include <cmath>

using namespace std;

// Using characters to fill in the second heart shape
// x^2 + (5.0*y/4.0-sqrt(|x|))^2 = 1
// y ~ (-1.1 , 1.3 )
// x ~ (-1.1 , 1.1 )
int main() {

    string s = "I love you!";
    for( float y = 1.3 ; y >= -1.1 ; y -= 0.06 ){
        int index = 0;
        for( float x = -1.1 ; x <= 1.1 ; x += 0.025 )
            if( x*x + pow(5.0*y/4.0-sqrt(fabs(x)),2) - 1 <= 0.0 )
                cout<<s[(index++)%s.size()];
            else
                cout<<' ';
        cout<<endl;
    }

    return 0;
}