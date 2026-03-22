#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AIStatus.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_63B0E79E5C3005C0_DISPOSE_OFFSET UNITYSDK_OFFSET(0x160432A0)
#define CLASS_1_63B0E79E5C3005C0_METHOD_1_460ED92A9D08B0B6_OFFSET UNITYSDK_OFFSET(0x16043660)
#define CLASS_1_63B0E79E5C3005C0_METHOD_1_56BD849FE2A95087_OFFSET UNITYSDK_OFFSET(0x16043510)
#define CLASS_1_63B0E79E5C3005C0_METHOD_1_89C03AF435ED2C78_OFFSET UNITYSDK_OFFSET(0x16043450)
#define CLASS_1_63B0E79E5C3005C0_METHOD_1_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x160432E0)
#define CLASS_1_63B0E79E5C3005C0_METHOD_1_F54DE9676CF851A4_OFFSET UNITYSDK_OFFSET(0x16043380)
#define CLASS_1_63B0E79E5C3005C0_METHOD_1_F9FCE3257A591892_OFFSET UNITYSDK_OFFSET(0x16043610)
#define CLASS_1_63B0E79E5C3005C0__CTOR_OFFSET UNITYSDK_OFFSET(0x16043930)

inline static constexpr unsigned int Class_1_63B0E79E5C3005C0_TypeDefinitionIndex = 27928;

class Class_1_63B0E79E5C3005C0 : public ::System::Object
{
public:
	::Il2CppArray<::System::UInt32>* Field_1_1; // 0x10
	::System::UInt32 Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_63B0E79E5C3005C0__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_63B0E79E5C3005C0_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_63B0E79E5C3005C0_METHOD_1_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Void Method_1_F54DE9676CF851A4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_63B0E79E5C3005C0_METHOD_1_F54DE9676CF851A4_OFFSET))(this, a1);
	}

	::System::Void Method_1_56BD849FE2A95087(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_63B0E79E5C3005C0_METHOD_1_56BD849FE2A95087_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F9FCE3257A591892(::RPG::GameCore::AIStatus a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AIStatus))((::PBYTE)hIl2Cpp + CLASS_1_63B0E79E5C3005C0_METHOD_1_F9FCE3257A591892_OFFSET))(this, a1);
	}

	::System::String* Method_1_460ED92A9D08B0B6()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_63B0E79E5C3005C0_METHOD_1_460ED92A9D08B0B6_OFFSET))(this);
	}

	::System::Void Method_1_89C03AF435ED2C78()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_63B0E79E5C3005C0_METHOD_1_89C03AF435ED2C78_OFFSET))(this);
	}
};
