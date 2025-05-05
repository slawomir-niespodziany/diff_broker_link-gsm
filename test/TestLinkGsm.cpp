#include <LinkGsm.h>
#include <gtest/gtest.h>

using namespace std::string_literals;

TEST(TestLinkGsm, TestLinkGsm70) {
    LinkGsm linkGsm = diff::Instantiator<LinkGsm>("testId"s)   //
                          .config<int>("linkReliability"s, 70)
                          .make_instance();

    EXPECT_EQ(1u, 1u);
}

TEST(TestLinkGsm, TestLinkGsm10) {
    LinkGsm linkGsm = diff::Instantiator<LinkGsm>("testId"s)   //
                          .config<int>("linkReliability"s, 10)
                          .make_instance();

    EXPECT_EQ(1u, 1u);
}