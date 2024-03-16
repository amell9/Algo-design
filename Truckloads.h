#include <iostream>
using namespace std;

class Truckloads{

public:
int numTrucks(int numCrates, int loadSize){

if (numCrates <= loadSize ){
 return 1; 
} else {
return numTrucks(numCrates / 2, loadSize) + numTrucks((numCrates + 1) / 2, loadSize);


  }
 }
};