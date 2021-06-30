#ifndef PINYINRESOURCE_H
#define PINYINRESOURCE_H

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

#include <QMap>
#include <QStringList>
#include "ttkglobaldefine.h"

/*! @brief The class of the pinyin resource.
 * @author jiangXiaoBai <2499971906@qq.com>
 */
class TTK_MODULE_EXPORT PinyinResource
{
public:

    static TTKStringMap getPinyinResource();
    /*!
     * Get mutil pinyin resource.
     */
    static TTKStringMap getMutilPinyinResource();
    /*!
     * Get chinese resource.
     */
    static TTKStringMap getChineseResource();

private:
    /*!
     * Get resource.
     */
    static TTKStringMap getResource(const QString &resourceName);

};

#endif // PINYINRESOURCE_H
