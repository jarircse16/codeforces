#include <bits/stdc++.h>
using namespace std;

int main()
{
    int game[1100];
    int n , p , q;
    cin >> n >> p;
    int counter = 0;
    for(int i =  0 ; i < p ; i++){
        cin >> game[i];
    }
    cin >> q;
    for(int i = p ; i < p + q ; i++){
        cin >> game[i];
    }
    sort(game , game+(p+q));
    for(int i = 0 ; i < p+q ; i++){
        if(game[i] != game[i+1]){
            counter++;
        }
    }

    if(n == (counter)){
        cout << "I become the guy." <<endl;
    }else{
        cout << "Oh, my keyboard!" << endl;
    }

    return 0;
}
