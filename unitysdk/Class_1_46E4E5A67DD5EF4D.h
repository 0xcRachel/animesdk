#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_319;
class Class_0_16E4307DCC419505_322;
class Class_0_16E4307DCC419505_344;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_46E4E5A67DD5EF4D_METHOD_1_18E36BE453A35E53_1_OFFSET UNITYSDK_OFFSET(0x1057ED60)
#define CLASS_1_46E4E5A67DD5EF4D_METHOD_1_18E36BE453A35E53_OFFSET UNITYSDK_OFFSET(0x1057EBC0)
#define CLASS_1_46E4E5A67DD5EF4D_METHOD_1_8EAA72FB6E563B06_OFFSET UNITYSDK_OFFSET(0x1057EB20)
#define CLASS_1_46E4E5A67DD5EF4D__CTOR_OFFSET UNITYSDK_OFFSET(0x1057EF00)

inline static constexpr unsigned int Class_1_46E4E5A67DD5EF4D_TypeDefinitionIndex = 40976;

class Class_1_46E4E5A67DD5EF4D : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::Class_0_16E4307DCC419505_319*, ::Class_0_16E4307DCC419505_344*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46E4E5A67DD5EF4D__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8EAA72FB6E563B06(::Class_0_16E4307DCC419505_319* a1, ::Class_0_16E4307DCC419505_344* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_319*, ::Class_0_16E4307DCC419505_344*))((::PBYTE)hIl2Cpp + CLASS_1_46E4E5A67DD5EF4D_METHOD_1_8EAA72FB6E563B06_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_1_18E36BE453A35E53(::Class_0_16E4307DCC419505_319* a1, ::Class_0_16E4307DCC419505_322* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::Class_0_16E4307DCC419505_319*, ::Class_0_16E4307DCC419505_322*))((::PBYTE)hIl2Cpp + CLASS_1_46E4E5A67DD5EF4D_METHOD_1_18E36BE453A35E53_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_1_18E36BE453A35E53_1(::Class_0_16E4307DCC419505_319* a1, ::Class_0_16E4307DCC419505_322* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::Class_0_16E4307DCC419505_319*, ::Class_0_16E4307DCC419505_322*))((::PBYTE)hIl2Cpp + CLASS_1_46E4E5A67DD5EF4D_METHOD_1_18E36BE453A35E53_1_OFFSET))(this, a1, a2);
	}
};
