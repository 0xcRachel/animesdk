#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/Struct_2_019938BC9C50B169_2.h"
#include "unitysdk/Struct_2_BC950E36747FB4C9.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class IPromise; }

#define CLASS_1_C2A0CAEC87CD69A2_METHOD_1_54CB40DFE1B56BBE_OFFSET UNITYSDK_OFFSET(0x10ABECA0)
#define CLASS_1_C2A0CAEC87CD69A2_METHOD_1_5AA17B9E82DBE3F8_OFFSET UNITYSDK_OFFSET(0x10ABEBC0)
#define CLASS_1_C2A0CAEC87CD69A2_METHOD_1_640338D6080652D6_OFFSET UNITYSDK_OFFSET(0x10ABEA10)
#define CLASS_1_C2A0CAEC87CD69A2_METHOD_1_F934EECDEDB1262B_OFFSET UNITYSDK_OFFSET(0x10ABEAF0)
#define CLASS_1_C2A0CAEC87CD69A2__CTOR_OFFSET UNITYSDK_OFFSET(0x10ABED30)

inline static constexpr unsigned int Class_1_C2A0CAEC87CD69A2_TypeDefinitionIndex = 49837;

class Class_1_C2A0CAEC87CD69A2 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2A0CAEC87CD69A2__CTOR_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_1_640338D6080652D6(::Struct_2_019938BC9C50B169_2& a1, ::System::UInt32 a2)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Struct_2_019938BC9C50B169_2&, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C2A0CAEC87CD69A2_METHOD_1_640338D6080652D6_OFFSET))(this, a1, a2);
	}

	::RPG::Client::Promises::IPromise* Method_1_F934EECDEDB1262B(::Struct_2_019938BC9C50B169_2& a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Struct_2_019938BC9C50B169_2&))((::PBYTE)hIl2Cpp + CLASS_1_C2A0CAEC87CD69A2_METHOD_1_F934EECDEDB1262B_OFFSET))(this, a1);
	}

	::RPG::Client::Promises::IPromise* Method_1_5AA17B9E82DBE3F8(::Struct_2_BC950E36747FB4C9& a1, ::Il2CppArray<::RPG::GameCore::RelicType>* a2)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Struct_2_BC950E36747FB4C9&, ::Il2CppArray<::RPG::GameCore::RelicType>*))((::PBYTE)hIl2Cpp + CLASS_1_C2A0CAEC87CD69A2_METHOD_1_5AA17B9E82DBE3F8_OFFSET))(this, a1, a2);
	}

	::RPG::Client::Promises::IPromise* Method_1_54CB40DFE1B56BBE(::Struct_2_BC950E36747FB4C9& a1, ::System::UInt32 a2)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Struct_2_BC950E36747FB4C9&, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C2A0CAEC87CD69A2_METHOD_1_54CB40DFE1B56BBE_OFFSET))(this, a1, a2);
	}
};
