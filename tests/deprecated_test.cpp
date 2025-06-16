/*******************************************************************************
 * tests/deprecated_test.cpp
 *
 * Part of tlx - http://panthema.net/tlx
 *
 * Copyright (C) 2018 Manuel Penschuck <tlx@manuel.jetzt>
 *
 * All rights reserved. Published under the Boost Software License, Version 1.0
 ******************************************************************************/

#include <tlx/define/deprecated.hpp>
#include <iostream>

TLX_DEPRECATED(void do_not_use_me_anymore());

void do_not_use_me_anymore()
{
}

TLX_DEPRECATED_FUNC_DEF(int also_do_not_use())
{
    return 0;
}



#if defined(BUILD_MONOLITHIC)
#define main(cnt, arr)      tlx_btree_test_deprecated_main(cnt, arr)
#endif

int main(int argc, const char** argv)
{
    do_not_use_me_anymore();
    also_do_not_use();

    std::cout << "This test takes place during compilation.\n"
              << "Nothing to see here, move on!\n";
    return 0;
}

/******************************************************************************/
