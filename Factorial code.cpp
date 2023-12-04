#include <iostream>
#include <chrono>

using namespace std;
using namespace chrono;


long long factit(long long n){


 long long f=1;
 for(long long i=1;i<=n;i++)
    f*=i;

 return f;


}

long long factR(long long n){
 if (n==1){

 return 1;

}


 return n*factR(n-1);


}

int main(){

long long n;
cout<<"Please inter a number n to find the factorial : ";
cin>>n;

  auto start = high_resolution_clock::now();

      //cout<<"n! by Iterative Method is "<<factit(n)<<endl;

     cout<<"n! by Recursive Method is "<<factR(n)<<endl;

  auto finish = high_resolution_clock::now();

// Calculating execution time taken by the program.

  auto duration= duration_cast<microseconds>(finish - start);

    cout << "Time taken in microseconds : "<< (double)(duration.count() / 1000.0) << endl;

    return 0;





}
