/*there is given number of bottles and exchange rate means how many empty water bottles should 
be need to fulfill one new water full bottle and then you have to tell how many number of bottles
you could drink .
*/
#include <iostream>
using namespace std;
int numBottles,numExchange;
int drin_B(int numBottles,int numExchange){
          int total_B = numBottles;
          int empty = numBottles;
          while(empty >= numExchange){
                    int newfull = empty/numExchange;
                    total_B += newfull;
                    empty=empty%numExchange+newfull;
          }
          return total_B;
}
int main(){
          cout<<"Enter the bottles: "<<endl;
          cin>>numBottles;
          cout<<"Enter the Exchange: "<<endl;
          cin>>numExchange;
          cout<<drin_B(numBottles,numExchange);
          return 0;
}
// time complexity = O(1)
// space complexity = O{1} because number of operations still constant