#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_52DCEE691286F89A;
class Class_1_76FC7D9EAE4C806C;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class CharacterInputData; }
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_ECB14761320DCADE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14C18000)
#define CLASS_2_ECB14761320DCADE_METHOD_2_0798AB0C5AC86AC4_OFFSET UNITYSDK_OFFSET(0x14C19B70)
#define CLASS_2_ECB14761320DCADE_METHOD_2_57B4BB10B5AF51CF_OFFSET UNITYSDK_OFFSET(0x14C1A0D0)
#define CLASS_2_ECB14761320DCADE_METHOD_2_94FEADEC518F57E3_OFFSET UNITYSDK_OFFSET(0x14C197D0)
#define CLASS_2_ECB14761320DCADE_METHOD_2_9D15F3CC656181B8_OFFSET UNITYSDK_OFFSET(0x14C19A00)
#define CLASS_2_ECB14761320DCADE_METHOD_2_A1C464B05BB7A5C1_OFFSET UNITYSDK_OFFSET(0x14C19AC0)
#define CLASS_2_ECB14761320DCADE_METHOD_2_AF14BA3464547DD1_OFFSET UNITYSDK_OFFSET(0x14C188D0)
#define CLASS_2_ECB14761320DCADE_METHOD_2_B1C7F8106B274B7A_OFFSET UNITYSDK_OFFSET(0x14C19DA0)
#define CLASS_2_ECB14761320DCADE_METHOD_2_B2132A128C7D87E2_OFFSET UNITYSDK_OFFSET(0x14C180C0)
#define CLASS_2_ECB14761320DCADE_METHOD_2_B42F49ED64984212_OFFSET UNITYSDK_OFFSET(0x14C17EA0)
#define CLASS_2_ECB14761320DCADE_METHOD_2_BE1D74FB34792AB9_OFFSET UNITYSDK_OFFSET(0x14C1A560)
#define CLASS_2_ECB14761320DCADE_METHOD_2_EBEE0D0A222A8264_OFFSET UNITYSDK_OFFSET(0x14C18830)
#define CLASS_2_ECB14761320DCADE_METHOD_2_F21573B680787589_OFFSET UNITYSDK_OFFSET(0x14C19B90)
#define CLASS_2_ECB14761320DCADE__CCTOR_OFFSET UNITYSDK_OFFSET(0x14C1A600)
#define CLASS_2_ECB14761320DCADE__CTOR_OFFSET UNITYSDK_OFFSET(0x14C17E50)

inline static constexpr unsigned int Class_2_ECB14761320DCADE_TypeDefinitionIndex = 62077;

class Class_2_ECB14761320DCADE : public ::RPG::GameCore::GameComponentBase
{
public:
	static ::System::UInt32* StaticGet_Field_2_0()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_ECB14761320DCADE_TypeDefinitionIndex)->GetStaticField(0x14270);
	}
	::System::Collections::Generic::List_1<::Class_1_52DCEE691286F89A*>* Field_2_1; // 0x18
	::RPG::GameCore::AdventureCharacterController* Field_2_2; // 0x20
	::System::UInt32 Field_2_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ECB14761320DCADE__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_ECB14761320DCADE__CCTOR_OFFSET))();
	}

	::System::Void Method_2_B42F49ED64984212(::RPG::GameCore::AdventureCharacterController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureCharacterController*))((::PBYTE)hIl2Cpp + CLASS_2_ECB14761320DCADE_METHOD_2_B42F49ED64984212_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ECB14761320DCADE_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_B2132A128C7D87E2(::System::Collections::Generic::IEnumerable_1<::Class_1_52DCEE691286F89A*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_52DCEE691286F89A*>*))((::PBYTE)hIl2Cpp + CLASS_2_ECB14761320DCADE_METHOD_2_B2132A128C7D87E2_OFFSET))(this, a1);
	}

	::System::Void Method_2_EBEE0D0A222A8264()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ECB14761320DCADE_METHOD_2_EBEE0D0A222A8264_OFFSET))(this);
	}

	::System::Boolean Method_2_AF14BA3464547DD1(::RPG::GameCore::AdventureCharacterController* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AdventureCharacterController*))((::PBYTE)hIl2Cpp + CLASS_2_ECB14761320DCADE_METHOD_2_AF14BA3464547DD1_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_A1C464B05BB7A5C1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ECB14761320DCADE_METHOD_2_A1C464B05BB7A5C1_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_2_0798AB0C5AC86AC4()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ECB14761320DCADE_METHOD_2_0798AB0C5AC86AC4_OFFSET))(this);
	}

	::System::Void Method_2_F21573B680787589(::RPG::GameCore::CharacterInputData* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_ECB14761320DCADE_METHOD_2_F21573B680787589_OFFSET))(this, a1, a2);
	}

	::Class_1_52DCEE691286F89A* Method_2_94FEADEC518F57E3()
	{
		return ((::Class_1_52DCEE691286F89A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ECB14761320DCADE_METHOD_2_94FEADEC518F57E3_OFFSET))(this);
	}

	::Class_1_52DCEE691286F89A* Method_2_B1C7F8106B274B7A(::Class_1_52DCEE691286F89A* a1, ::Class_1_52DCEE691286F89A* a2, ::System::Single a3)
	{
		return ((::Class_1_52DCEE691286F89A*(*)(::PVOID, ::Class_1_52DCEE691286F89A*, ::Class_1_52DCEE691286F89A*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_ECB14761320DCADE_METHOD_2_B1C7F8106B274B7A_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_52DCEE691286F89A* Method_2_57B4BB10B5AF51CF(::Class_1_52DCEE691286F89A* a1, ::System::Int64 a2)
	{
		return ((::Class_1_52DCEE691286F89A*(*)(::PVOID, ::Class_1_52DCEE691286F89A*, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_2_ECB14761320DCADE_METHOD_2_57B4BB10B5AF51CF_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_2_9D15F3CC656181B8(::Class_1_76FC7D9EAE4C806C* a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_1_76FC7D9EAE4C806C*))((::PBYTE)hIl2Cpp + CLASS_2_ECB14761320DCADE_METHOD_2_9D15F3CC656181B8_OFFSET))(this, a1);
	}

	::Class_1_76FC7D9EAE4C806C* Method_2_BE1D74FB34792AB9(::UnityEngine::Vector3 a1)
	{
		return ((::Class_1_76FC7D9EAE4C806C*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_ECB14761320DCADE_METHOD_2_BE1D74FB34792AB9_OFFSET))(this, a1);
	}
};
