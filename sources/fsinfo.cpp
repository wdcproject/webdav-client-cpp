/*#***************************************************************************
#                         __    __   _____       _____
#   Project              |  |  |  | |     \     /  ___|
#                        |  |__|  | |  |\  \   /  /
#                        |        | |  | )  ) (  (     
#                        |   /\   | |  |/  /   \  \___
#                         \_/  \_/  |_____/     \_____|
#
# Copyright (C) 2016, The WDC Project, <designerror@yandex.ru>, et al.
#
# This software is licensed as described in the file LICENSE, which
# you should have received as part of this distribution. 
#
# You may opt to use, copy, modify, merge, publish, distribute and/or sell
# copies of the Software, and permit persons to whom the Software is
# furnished to do so, under the terms of the LICENSE file.
#
# This software is distributed on an "AS IS" basis, WITHOUT WARRANTY OF ANY
# KIND, either express or implied.
#
############################################################################*/

#include "stdafx.h"
#include "fsinfo.hpp"

namespace WebDAV
{
	namespace FileInfo
	{
		auto exists(const std::string& path) -> bool
		{
			std::ifstream file(path);
			return file.good();
		}
	
		auto size(const std::string& path_file) -> unsigned long long 
		{
			std::ifstream file(path_file, std::ios::binary | std::ios::ate);
			return (unsigned long long)file.tellg();
		}
	}
}
