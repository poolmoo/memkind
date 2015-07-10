/*
* Copyright (C) 2014, 2015 Intel Corporation.
* All rights reserved.
*
* Redistribution and use in source and binary forms, with or without
* modification, are permitted provided that the following conditions are met:
* 1. Redistributions of source code must retain the above copyright notice(s),
*    this list of conditions and the following disclaimer.
* 2. Redistributions in binary form must reproduce the above copyright notice(s),
*    this list of conditions and the following disclaimer in the documentation
*    and/or other materials provided with the distribution.
*
* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDER(S) ``AS IS'' AND ANY EXPRESS
* OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
* MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO
* EVENT SHALL THE COPYRIGHT HOLDER(S) BE LIABLE FOR ANY DIRECT, INDIRECT,
* INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
* LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
* PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
* LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
* OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
* ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

#include "perf_tests.hpp"

// Jemalloc performance tests (comparative)

#ifndef SYSTEM_JEMALLOC_PREFIX
// Use internal memkind jemalloc
#define JemallocOperation JemkmallocOperation
#endif
// Jemalloc tests
class JemallocPerfTest : public PerfTest<JemallocOperation>
{
};

PERF_TEST(Jemalloc, single_op_single_iter)
{
    singleOpSingleIterPerfTest();
    runTest();
    EXPECT_TRUE(true);
}

PERF_TEST(Jemalloc, many_ops_single_iter)
{
    manyOpsSingleIterPerfTest();
    runTest();
    EXPECT_TRUE(true);
}

PERF_TEST(Jemalloc, many_ops_single_iter_huge_alloc)
{
    manyOpsSingleIterHugeAllocPerfTest();
    runTest();
    EXPECT_TRUE(true);
}

PERF_TEST(Jemalloc, single_op_many_iters)
{
    singleOpManyItersPerfTest();
    runTest();
    EXPECT_TRUE(true);
}

PERF_TEST(Jemalloc, many_ops_many_iters)
{
    manyOpsManyItersPerfTest();
    runTest();
    EXPECT_TRUE(true);
}
