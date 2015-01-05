/*
 * =====================================================================================
 *
 *       Filename:  test.cc
 *
 *    Description:  test examples
 *
 *        Version:  1.0
 *        Created:  12/26/14 23:25:13
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include <vector>
#include <iterator>
#include "remove_duplate_stl.h"

int main(int argc, char* argv[]) {
    int array[] = {1,1,1,3,4,4,6,8,8,8,9};
    std::copy(array, array + sizeof(array) / sizeof(int), std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;
    std::cout << RemoveDuplicate(array, sizeof(array) / sizeof(int)) << std::endl;
    return 0;
}
