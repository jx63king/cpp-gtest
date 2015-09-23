/**
 * Unit Tests for Rando Test
 **/

#include <gtest/gtest.h>
#include "rando.h"

/*  
    FUNCTIONS WE NEED TO TEST:

    bool shouldWorry(bool,bool,bool);
    bool isDivisbleBy(int,int);
    bool isPrime(int);
    int nearestToZero(int,int);
    */

class RandoTest : public ::testing::Test
{
  protected:
    RandoTest(){} //constructor runs before each test
    virtual ~RandoTest(){} //destructor cleans up after tests
    virtual void SetUp(){} //sets up before each test (after constructor)
    virtual void TearDown(){} //clean up after each test, (before destructor) 
};

TEST(RandoTest, allChildrenSmile)
{
  Rando rando;
  ASSERT_TRUE( rando.shouldWorry(true,true,true) );
}


//TEST Case 1 isDivisbleBy
TEST(RandoTest, Division_One)
{
  Rando rando;
  ASSERT_TRUE(rando.isDivisbleBy(20,10));
}

//TEST Case 2 isDivisbleBy
TEST(RandoTest, Division_Two)
{
  Rando rando;
  ASSERT_FALSE(rando.isDivisbleBy(20,3));
}

//TEST Case 1 isPrime
TEST(RandoTest, Prime_One)
{
  Rando rando;
  ASSERT_TRUE(rando.isPrime(2));
}



//TEST Case 2 isPrime
TEST(RandoTest, Prime_Two)
{
  Rando rando;
  ASSERT_FALSE(rando.isPrime(4));
}

//TEST Case 3 isPrime
TEST(RandoTest, Prime_Three)
{
  Rando rando;
  ASSERT_TRUE(rando.isPrime(5));
}

//TEST Case 4 isPrime
TEST(RandoTest, Prime_Four)
{
  Rando rando;
  ASSERT_FALSE(rando.isPrime(121));
}

//TEST Case 5 isPrime
TEST(RandoTest, Prime_Five)
{
  Rando rando;
  ASSERT_FALSE(rando.isPrime(99999999));
}

//TEST Case 1 nearestToZero
TEST(RandoTest, nearestToZero_One)
{
  Rando rando;
  int result = rando.nearestToZero(3,2);
  ASSERT_TRUE(result == 2);
}

//TEST Case 2 nearestToZero
TEST(RandoTest, nearestToZero_Two)
{
  Rando rando;
  int result = rando.nearestToZero(-200,-22);
  ASSERT_TRUE(result == -22);
}

//TEST Case 3 nearestToZero
TEST(RandoTest, nearestToZero_Three)
{
  Rando rando;
  int result = rando.nearestToZero(-200,22);
  ASSERT_TRUE(result == 22);
}


//TEST Case 4 nearestToZero
TEST(RandoTest, nearestToZero_Four)
{
  Rando rando;
  int result = rando.nearestToZero(200,-22);
  ASSERT_TRUE(result == -22);
}
