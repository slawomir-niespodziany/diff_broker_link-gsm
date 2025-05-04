#include <LinkGsm.h>

using namespace std::string_literals;

int main(int argc, char *argv[]) {
    LinkGsm linkGsmR70 = diff::Instantiator<LinkGsm>("testId"s)   //
                             .config<int>("linkReliability"s, 70)
                             .make_instance();

    // run tests here

    LinkGsm linkGsmR10 = diff::Instantiator<LinkGsm>("testId"s)   //
                             .config<int>("linkReliability"s, 10)
                             .make_instance();

    // run tests here

    return 0;
}
