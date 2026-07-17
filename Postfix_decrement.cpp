//Postfix Decrement

#include <iostream>
using namespace std;

int main(){
  int a;
  cin>>a;

  while(a--){
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
This line will print 0 times

Analysis:
In post-decrement first loop checks 6 is true or not.
As it is true, it immedietly decrese a's  value 1 and a becomes 5 and print "This line will print 5 times". 
*/
