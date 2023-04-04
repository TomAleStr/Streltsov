/*время старта и время финиша*/
#include <iostream>
using namespace std;
int main()
{
    int h, m, s;
    int h2, m2, s2;
    int resh, resm, ress;
    cin >> h >> m >> s;
    cin >> h2 >> m2 >> s2;
    if(h>h2){
        resh=h-h2;
    }
    else{
    resh=h2-h;
    }
    if(m>=m2){
        resm=m-m2;
    }
    else{
        --resh;
        resm=m2-m;
    }
    if(s>=s2){
    ress=s-s2;
    }
    else{
        --resm;
        ress=s2-s;
    }
    cout << resh << ":" << resm << ":" << ress;

    return 0;
}