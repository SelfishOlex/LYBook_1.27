/*
 * All or portions of this file Copyright (c) Amazon.com, Inc. or its affiliates or
 * its licensors.
 *
 * For complete copyright and license terms please see the LICENSE at the root of this
 * distribution (the "License"). All use of this software is governed by the License,
 * or, if provided, by the license below or the license accompanying this file. Do not
 * remove or modify any license notices. This file is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *
 */

#pragma once

#include <AzCore/Interface/Interface.h>

namespace MyProject
{
    class MyInterface
    {
    public:
        AZ_TYPE_INFO(MyInterface, "{D43D438B-39E6-4D44-B92B-E004FEE64A95}");

        virtual ~MyInterface() = default;

        virtual const char* GetMyProjectName() = 0;
    };
} // namespace MyProject
