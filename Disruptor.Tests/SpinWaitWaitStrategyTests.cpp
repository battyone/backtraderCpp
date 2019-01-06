#include "stdafx.h"

#include "Disruptor/SpinWaitWaitStrategy.h"
#include "WaitStrategyTestUtil.h"


using namespace Disruptor;
using namespace Disruptor::Tests;


BOOST_AUTO_TEST_SUITE(SpinWaitWaitStrategyTests)

BOOST_AUTO_TEST_CASE(ShouldWaitForValue)
{
    assertWaitForWithDelayOf(50, std::make_shared< SpinWaitWaitStrategy >());
}

BOOST_AUTO_TEST_SUITE_END()
