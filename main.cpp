#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> fillInputVector(int N){
    vector <int> aux;
    for (int i = 0, x; i < N ; ++i){
        cin >> x;
        aux.push_back(x);
    }
    return aux;
}

void findnum(int x, vector<int> I){
    for (unsigned long i = 0; i < I.size(); ++i){
        if (I[i] == x){
            cout << x << " found at " << i+1 << endl;
            return;
        }
    }
    cout << x << " not found" << endl;
}

void WhereIsTheMarble(int n, int q, int c){
    vector<int> marbles = fillInputVector(n);
    sort(marbles.begin(), marbles.end());

    vector<int> lookingfor = fillInputVector(q);
    cout << "CASE# " << c << ":" << endl;
    for (auto i : lookingfor){
        findnum(i,marbles);
    }
}

int main() {
    int N, Q, cont = 1;
    cin >> N >> Q;
    while (N != 0 or Q!=0){
        WhereIsTheMarble(N,Q, cont);
        cont++;
        cin >> N >> Q;
    }
    return 0;
}