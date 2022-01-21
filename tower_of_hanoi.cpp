// Sample Input 1 :
// 2

// Sample Output 1 :
// a b
// a c
// b c

// Sample Input 2 :
// 3

// Sample Output 2 :
// a c
// a b
// c b
// a c
// b a
// b c
// a c


#include <iostream>

using namespace std;

void toh(int n, char from_rod, char to_rod, char aux_rod){
     if (n == 0)
    {
        return;
    }
    toh(n - 1, from_rod, aux_rod, to_rod);
    cout << "Move disk " << n << " from rod " << from_rod <<
                                " to rod " << to_rod << endl;
    toh(n - 1, aux_rod, to_rod, from_rod); 

}

int main(){
    int n;
    char a,b,c;
    cin>>n;
    toh(n,'a','c','b');
}


 
 