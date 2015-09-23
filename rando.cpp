#include "rando.h"
#include <iostream>
//#include <stdlib.h>

using namespace std;

/**
 * Worry if only one child is smiling or if all children are smiling
 **/
bool Rando::shouldWorry(bool childASmile, bool childBSmile, bool childCSmile)
{
  if( childASmile && childBSmile && childCSmile )
    return true;
  else if( childASmile ^ childBSmile ^ childCSmile )
    return true;
  else
    return false;
}
/**
 * Determines if first or second are evenly divisible by the other.
 **/
bool Rando::isDivisbleBy(int first, int second)
{
  int result = first % second;

  if(result == 0)
    return true;
  else
    return false;
}

/**
 * Given a number, num, says whether or not that number is prime
 * (that is, only evenly divisible by itself and 1. For the sake
 * of this function, do NOT consider 0 prime)
 **/
bool Rando::isPrime(int num)
{
  int i = 1;
  int j=0;
  while(num != i)
  {
    if(num % i ==0)
      j=j+1;

    i++;
  }
  if(j<2)
  {
    //cout << num  << " is a prime number" << endl;
    return true;
  }
  else
  { 
    //cout << num  << " is not a prime number" << endl;
    return false;
  }
}

/**
 * Given two numbers, first and second, return the value of the one
 * that is closest to zero without actually being zero.
 **/
int Rando::nearestToZero(int a, int b)
{ 
  if((abs(a) - 0) > (abs(b)))
    return b;
  if((abs(a) - 0) < (abs(b)))
    return a;

  //return 0;
}
