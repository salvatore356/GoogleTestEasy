//
//  main.cpp
//  GoogleTestEasy
//
//  Created by Salvatore on 2/4/24.
//

#include <gtest/gtest.h>
#include "Simple/Fibonacci.hpp"
#include "Fixture/FileManagerTestFixture.hpp"

int main(int argc, const char * argv[]) {
    testing::InitGoogleTest(&argc, (char**)argv);
    return RUN_ALL_TESTS();
}
