#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_318;

#define CLASS_1_5CFFC1E8AA986672_METHOD_1_6D38A288B76C7EDD_OFFSET UNITYSDK_OFFSET(0x88DF460)
#define CLASS_1_5CFFC1E8AA986672_METHOD_1_C099BFAC7CD3CF58_OFFSET UNITYSDK_OFFSET(0x88DF410)
#define CLASS_1_5CFFC1E8AA986672_METHOD_1_C4BFBB1BE6C0430A_OFFSET UNITYSDK_OFFSET(0x88DF370)
#define CLASS_1_5CFFC1E8AA986672_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x88DF4B0)
#define CLASS_1_5CFFC1E8AA986672__CTOR_OFFSET UNITYSDK_OFFSET(0x88DF400)

inline static constexpr unsigned int Class_1_5CFFC1E8AA986672_TypeDefinitionIndex = 40985;

class Class_1_5CFFC1E8AA986672 : public ::System::Object
{
public:
	static ::Class_1_5CFFC1E8AA986672** StaticGet_Field_1_0()
	{
		return (::Class_1_5CFFC1E8AA986672**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5CFFC1E8AA986672_TypeDefinitionIndex)->GetStaticField(0x46F20);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CFFC1E8AA986672__CTOR_OFFSET))(this);
	}

	static ::Class_1_5CFFC1E8AA986672* Method_1_C4BFBB1BE6C0430A()
	{
		return ((::Class_1_5CFFC1E8AA986672*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5CFFC1E8AA986672_METHOD_1_C4BFBB1BE6C0430A_OFFSET))();
	}

	::RPG::GameCore::FixPoint Method_1_C099BFAC7CD3CF58(::RPG::GameCore::FixPoint a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_5CFFC1E8AA986672_METHOD_1_C099BFAC7CD3CF58_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_318* Method_1_6D38A288B76C7EDD(::RPG::GameCore::FixPoint a1)
	{
		return ((::Class_0_16E4307DCC419505_318*(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_5CFFC1E8AA986672_METHOD_1_6D38A288B76C7EDD_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CFFC1E8AA986672_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
