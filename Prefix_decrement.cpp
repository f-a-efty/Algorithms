//Prefix Decrement

#include <iostream>
using namespace std;

int main(){
  int a;
  cin>>a;

  while(--a){
    cout<<"This line will print "<<a<<" times\n";
  }
}


//Result
/*
6
This line will print 5 times
This line will print 4 times
This line will print 3 times
This line will print 2 times
This line will print 1 times

Analysis:
In pre-decrement, first loop decreases a's value becomes 5 then it checks 5 is true or not.
As it is true, then loop runs and prints "This line will print 5 times". 
*/
