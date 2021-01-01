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

#include <AzCore/Component/Component.h>

#include <MyProject/MyProjectBus.h>
#include <MyProject/MyInterface.h>

namespace MyProject
{
    class MyProjectSystemComponent
        : public AZ::Component
        , public MyProjectRequestBus::Handler
        , public AZ::Interface<MyInterface>::Registrar
    {
    public:
        AZ_COMPONENT(MyProjectSystemComponent, "{B27944BF-0E67-4551-ABBD-95C415A3A94F}");

        static void Reflect(AZ::ReflectContext* context);

        // AZ::Component interface implementation
        void Activate() override;
        void Deactivate() override;

        // MyInterface
        const char* GetMyProjectName() override { return "MyProject"; }
    };

} // namespace MyProject
