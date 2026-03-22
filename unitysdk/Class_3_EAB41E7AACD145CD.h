#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/OpenUIPageTaskBase_1.h"

namespace RPG::GameCore { class OpenCocoon; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_3_EAB41E7AACD145CD_METHOD_3_5C6304499FC2ECE9_OFFSET UNITYSDK_OFFSET(0xEEB7A30)
#define CLASS_3_EAB41E7AACD145CD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xEEB7050)
#define CLASS_3_EAB41E7AACD145CD__CTOR_OFFSET UNITYSDK_OFFSET(0xEEB7000)
#define CLASS_3_EAB41E7AACD145CD__ONPAGECANCELCLOSE_OFFSET UNITYSDK_OFFSET(0xEEB7BC0)
#define CLASS_3_EAB41E7AACD145CD__ONPAGECONFIRMCLOSE_OFFSET UNITYSDK_OFFSET(0xEEB7AD0)
#define CLASS_3_EAB41E7AACD145CD___IFIXBASEPROXY_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xEEB7C70)
#define CLASS_3_EAB41E7AACD145CD___IFIXBASEPROXY__ONPAGECANCELCLOSE_OFFSET UNITYSDK_OFFSET(0xEEB7C90)
#define CLASS_3_EAB41E7AACD145CD___IFIXBASEPROXY__ONPAGECONFIRMCLOSE_OFFSET UNITYSDK_OFFSET(0xEEB7C80)

inline static constexpr unsigned int Class_3_EAB41E7AACD145CD_TypeDefinitionIndex = 45911;

class Class_3_EAB41E7AACD145CD : public ::RPG::GameCore::OpenUIPageTaskBase_1<::RPG::GameCore::OpenCocoon*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::OpenCocoon* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::OpenCocoon*))((::PBYTE)hIl2Cpp + CLASS_3_EAB41E7AACD145CD__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EAB41E7AACD145CD_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Boolean Method_3_5C6304499FC2ECE9(::RPG::GameCore::PropComponent* a1, ::System::UInt32& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::PropComponent*, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_3_EAB41E7AACD145CD_METHOD_3_5C6304499FC2ECE9_OFFSET))(this, a1, a2);
	}

	::System::Void _OnPageConfirmClose(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_EAB41E7AACD145CD__ONPAGECONFIRMCLOSE_OFFSET))(this, a1);
	}

	::System::Void _OnPageCancelClose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EAB41E7AACD145CD__ONPAGECANCELCLOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EAB41E7AACD145CD___IFIXBASEPROXY_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnPageConfirmClose(::System::Object* P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_EAB41E7AACD145CD___IFIXBASEPROXY__ONPAGECONFIRMCLOSE_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy__OnPageCancelClose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EAB41E7AACD145CD___IFIXBASEPROXY__ONPAGECANCELCLOSE_OFFSET))(this);
	}
};
