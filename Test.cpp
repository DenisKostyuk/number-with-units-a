#include "NumberWithUnits.hpp"
#include <iostream>
#include <string>
#include "doctest.h"
using namespace std;
using namespace ariel;

TEST_CASE("Using add/sub in different variations"){
    NumberWithUnits threeKM(3 , "km");
    NumberWithUnits oneKM(1 , "km");
    NumberWithUnits fiveKM(3 , "km");
    NumberWithUnits oneMeter(1 , "m");
    CHECK(oneKM - oneMeter == NumberWithUnits(999, "m"));
    CHECK(oneKM + oneMeter == NumberWithUnits(1001, "m"));
    CHECK(fiveKM + oneMeter == NumberWithUnits(5001 , "m"));
    CHECK(oneKM + fiveKM == NumberWithUnits(4,"km"));
    CHECK(threeKM + fiveKM == NumberWithUnits(8,"km"));
    CHECK(threeKM + oneKM == NumberWithUnits(4,"km"));
    CHECK(fiveKM - fiveKM == NumberWithUnits(0,"km"));
    CHECK(fiveKM - oneKM == NumberWithUnits(4,"km"));

    NumberWithUnits oneHr(1 , "hour");
    NumberWithUnits twoHr(2 , "hour");
    NumberWithUnits oneMin(1 , "min");
    CHECK(oneHr + twoHr == NumberWithUnits(3 , "hour"));
    CHECK(oneHr - oneMin == NumberWithUnits(59 , "min"));
    CHECK(twoHr - oneHr == NumberWithUnits(1 , "hour"));
    CHECK(twoHr + oneMin == NumberWithUnits(61 , "min"));

    NumberWithUnits threeUSD(3 ,"USD");
    NumberWithUnits oneUSD(1 ,"USD");
    NumberWithUnits tenUSD(10 ,"USD");
    CHECK(threeUSD + oneUSD == NumberWithUnits(4 , "USD"));
    CHECK(threeUSD + tenUSD == NumberWithUnits(13 , "USD"));
    CHECK(tenUSD - oneUSD == NumberWithUnits(9 , "USD"));
    CHECK(tenUSD - threeUSD == NumberWithUnits(7 , "USD"));
    CHECK((tenUSD-=NumberWithUnits(9 , "usd")) == NumberWithUnits(1 , "usd"));

    NumberWithUnits oneTON(1 , "ton");
    NumberWithUnits oneKG (1 , "kg");
    CHECK(oneTON - oneKG == NumberWithUnits(999, "kg"));
    CHECK(oneTON + oneKG == NumberWithUnits(1001, "kg"));
    CHECK((oneTON+=NumberWithUnits(1, "ton")) == NumberWithUnits(2 , "ton"));
    


}