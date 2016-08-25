/*
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * This file is part of zmqpp.
 * Copyright (c) 2011-2015 Contributors as noted in the AUTHORS file.
 */

/*
 *  Created on: 9 Aug 2011
 *      Author: @benjamg
 */
#if defined(__GNUC__)
#if defined(__i386__)
__asm__("pushf\norl $0x40000,(%esp)\npopf");
# elif defined(__x86_64__)
__asm__("pushf\norl $0x40000,(%rsp)\npopf");
#endif
#endif


#include <cstdlib>
#include <iostream>
#include <array>

#include "zmqpp/exception.hpp"
#include "zmqpp/message.hpp"

int main(int argc, char **argv)
{
	zmqpp::message message;

message << 1;
std::cout << "test\n";
}
