#ifndef TTKBIG5CHECKER
#define TTKBIG5CHECKER

/* =================================================
 * This file is part of the TTK Tiny Tools project
 * Copyright (C) 2015 - 2021 Greedysky Studio

 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License along
 * with this program; If not, see <http://www.gnu.org/licenses/>.
 ================================================= */

#include "checker.h"

class TTK_MODULE_EXPORT Big5Checker : public CheckerBase
{
public:
    Big5Checker();
    virtual bool detect(const string &str) const override;

private:
    bool checkTwoBytes(const unsigned char *buffer) const;

};

#endif // TTKBIG5CHECKER
