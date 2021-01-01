#include "MyComponent.h"

#include <AzCore/Serialization/EditContext.h>
#include <MyProject/MyInterface.h>

using namespace MyProject;

void MyComponent::Activate()
{
    if (MyInterface* myInteface = AZ::Interface<MyInterface>::Get())
    {
        AZ_Printf(__FUNCTION__, "%s", myInteface->GetMyProjectName());
    }
    else
    {
        AZ_Printf(__FUNCTION__, "MyInterface wasn't ready :(");
    }
}

void MyComponent::Reflect(AZ::ReflectContext* reflection)
{
    auto sc = azrtti_cast<AZ::SerializeContext*>(reflection);
    if (!sc) return;

    sc->Class<MyComponent, Component>()
        ->Version(1);

    AZ::EditContext* ec = sc->GetEditContext();
    if (!ec) return;

    using namespace AZ::Edit::Attributes;
    // reflection of this component for Lumberyard Editor
    ec->Class<MyComponent>("My Component", "[my description]")
        ->ClassElement(AZ::Edit::ClassElements::EditorData, "")
        ->Attribute(AppearsInAddComponentMenu, AZ_CRC("Game"))
        ->Attribute(Category, "My Project");
}