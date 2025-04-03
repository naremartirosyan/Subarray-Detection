#include <stdio.h> 
#include <gtest/gtest.h>
#include "declarations.h"

TEST(SubArrayDetection, BothArraysContainOne1)
{
    int array1[1] = {1};
    int array2[1] = {1};
    ASSERT_EQ(is_sub_array(array1, 1, array2, 1), 1);
}

TEST(SubArrayDetection, Array1ContainsTwo1sArray2ContainsOne1)
{
    int array1[2] = {1, 1};
    int array2[1] = {1};
    ASSERT_EQ(is_sub_array(array1, 2, array2, 1), 1);
}

TEST(SubArrayDetection, Array1ContainsOne1Array2ContainsTwo1s)
{
    int array1[1] = {1};
    int array2[2] = {1, 1};
    ASSERT_EQ(is_sub_array(array1, 1, array2, 2), 0);
}

TEST(SubArrayDetection, Array1ContainsTwo1sArray2ContainsOne2)
{
    int array1[2] = {1, 1};
    int array2[1] = {2};
    ASSERT_EQ(is_sub_array(array1, 2, array2, 1), 0);
}

TEST(SubArrayDetection, Array1ContainsTwo1sAndOne2Array2ContainsOne2)
{
    int array1[3] = {1, 1, 2};
    int array2[1] = {2};
    ASSERT_EQ(is_sub_array(array1, 3, array2, 1), 1);
}

TEST(SubArrayDetection, Array1ContainsOne1AndOne2Array2ContainsOne1AndOne2)
{
    int array1[2] = {1, 2};
    int array2[2] = {1, 2};
    ASSERT_EQ(is_sub_array(array1, 2, array2, 2), 1);
}

TEST(SubArrayDetection, Array1ContainsTwo1sAndOne2Array2ContainsOne1AndOne2)
{
    int array1[3] = {1, 1, 2};
    int array2[2] = {1, 2};
    ASSERT_EQ(is_sub_array(array1, 3, array2, 2), 1);
}

TEST(SubArrayDetection, Array1Contains1234Array2Contains23)
{
    int array1[4] = {1, 2, 3, 4};
    int array2[2] = {2, 3};
    ASSERT_EQ(is_sub_array(array1, 4, array2, 2), 1);
}

TEST(SubArrayDetection, Array1Contains234567Array2Contains456)
{
    int array1[6] = {2, 3, 4, 5, 6, 7};
    int array2[3] = {4, 5, 6};
    ASSERT_EQ(is_sub_array(array1, 6, array2, 3), 1);
}