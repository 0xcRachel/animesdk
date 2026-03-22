#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_173;
class Class_1_F9EBB5A401350F78;
class Class_1_F9FBCC956DFCF137_13;
namespace RPG::Client::LittleGame::ChimeraDuel { class ChimeraDuelChimeraCache; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_29A3D88F869B3D8E_EXECUTE_OFFSET UNITYSDK_OFFSET(0x10B1A9A0)
#define CLASS_1_29A3D88F869B3D8E_METHOD_1_DADAD1E5C2385F02_OFFSET UNITYSDK_OFFSET(0x10B1AC90)
#define CLASS_1_29A3D88F869B3D8E_METHOD_1_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0x10B1AC50)
#define CLASS_1_29A3D88F869B3D8E_TICK_OFFSET UNITYSDK_OFFSET(0x10B1AD40)
#define CLASS_1_29A3D88F869B3D8E__CTOR_OFFSET UNITYSDK_OFFSET(0x10B1A990)

inline static constexpr unsigned int Class_1_29A3D88F869B3D8E_TypeDefinitionIndex = 61199;

class Class_1_29A3D88F869B3D8E : public ::System::Object
{
public:
	::Class_1_F9EBB5A401350F78* Field_1_2; // 0x10
	::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_173*>* Field_1_0; // 0x20

	::System::Void _ctor(::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_173*>* a1, ::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_173*>*, ::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*))((::PBYTE)hIl2Cpp + CLASS_1_29A3D88F869B3D8E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Execute(::Class_1_F9FBCC956DFCF137_13* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_13*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_29A3D88F869B3D8E_EXECUTE_OFFSET))(this, a1, a2);
	}

	::Class_1_F9EBB5A401350F78* Method_1_F8B73ECE7F883AC1()
	{
		return ((::Class_1_F9EBB5A401350F78*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29A3D88F869B3D8E_METHOD_1_F8B73ECE7F883AC1_OFFSET))(this);
	}

	::System::Void Method_1_DADAD1E5C2385F02(::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_173*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_43BD383C98B4C0C5_173*>*))((::PBYTE)hIl2Cpp + CLASS_1_29A3D88F869B3D8E_METHOD_1_DADAD1E5C2385F02_OFFSET))(this, a1);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_29A3D88F869B3D8E_TICK_OFFSET))(this, a1);
	}
};
