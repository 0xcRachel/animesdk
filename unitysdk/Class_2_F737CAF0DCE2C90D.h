#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1835888C1E19F013.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_0AD6129525BF5F86;
namespace RPG::GameCore { class BezierProjectileData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_F737CAF0DCE2C90D_METHOD_2_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0x1041F0D0)
#define CLASS_2_F737CAF0DCE2C90D_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x1041EF10)
#define CLASS_2_F737CAF0DCE2C90D_METHOD_2_25A6D6D1C622BFDB_OFFSET UNITYSDK_OFFSET(0x1041E470)
#define CLASS_2_F737CAF0DCE2C90D_METHOD_2_4D70E3D849E4E16D_OFFSET UNITYSDK_OFFSET(0x1041EE20)
#define CLASS_2_F737CAF0DCE2C90D_METHOD_2_4EA6B1791DACA9CC_OFFSET UNITYSDK_OFFSET(0x1041EB40)
#define CLASS_2_F737CAF0DCE2C90D_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x1041F070)
#define CLASS_2_F737CAF0DCE2C90D_METHOD_2_7DFB4B9C80198D98_OFFSET UNITYSDK_OFFSET(0x1041F040)
#define CLASS_2_F737CAF0DCE2C90D_METHOD_2_A678846DF98684D3_OFFSET UNITYSDK_OFFSET(0x1041E050)
#define CLASS_2_F737CAF0DCE2C90D_METHOD_2_FE1A1A30B3CE9C46_OFFSET UNITYSDK_OFFSET(0x1041ED30)
#define CLASS_2_F737CAF0DCE2C90D__CTOR_OFFSET UNITYSDK_OFFSET(0x1041DFB0)

inline static constexpr unsigned int Class_2_F737CAF0DCE2C90D_TypeDefinitionIndex = 50502;

class Class_2_F737CAF0DCE2C90D : public ::Class_1_1835888C1E19F013
{
public:
	::RPG::GameCore::BezierProjectileData* Field_2_0; // 0x48
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_2_3; // 0x50
	::UnityEngine::Vector3 Field_2_1; // 0x58
	::UnityEngine::Vector3 Field_2_2; // 0x64

	::System::Void _ctor(::Class_1_0AD6129525BF5F86* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0AD6129525BF5F86*))((::PBYTE)hIl2Cpp + CLASS_2_F737CAF0DCE2C90D__CTOR_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_A678846DF98684D3()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F737CAF0DCE2C90D_METHOD_2_A678846DF98684D3_OFFSET))(this);
	}

	::System::Void Method_2_4EA6B1791DACA9CC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F737CAF0DCE2C90D_METHOD_2_4EA6B1791DACA9CC_OFFSET))(this);
	}

	::System::Void Method_2_FE1A1A30B3CE9C46(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_F737CAF0DCE2C90D_METHOD_2_FE1A1A30B3CE9C46_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4D70E3D849E4E16D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F737CAF0DCE2C90D_METHOD_2_4D70E3D849E4E16D_OFFSET))(this, a1);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F737CAF0DCE2C90D_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_2_25A6D6D1C622BFDB(::System::Single a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_2_F737CAF0DCE2C90D_METHOD_2_25A6D6D1C622BFDB_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Vector3 Method_2_7DFB4B9C80198D98()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F737CAF0DCE2C90D_METHOD_2_7DFB4B9C80198D98_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F737CAF0DCE2C90D_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_06330CD58CB602B6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F737CAF0DCE2C90D_METHOD_2_06330CD58CB602B6_OFFSET))(this);
	}
};
