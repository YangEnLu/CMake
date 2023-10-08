 
#include <gtest/gtest.h>
#include "A/A.h"
TEST (ALibraryTests, Print) {
    EXPECT_EQ(2, 2);
}

TEST (ALibraryTests, HandlesPositiveInput) {
    EXPECT_EQ(2, multiply(2,1));
}
