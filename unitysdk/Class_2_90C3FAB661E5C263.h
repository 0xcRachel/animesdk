#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_90C3FAB661E5C263_ReferenceSource.h"
#include "unitysdk/Class_2_90C3FAB661E5C263_ReferenceType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_2CAAA2FDF9170110;
namespace RPG::GameCore { class DynamicJsonConfig; }
namespace RPG::GameCore { class GameEntityList; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_90C3FAB661E5C263_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB8DBC20)
#define CLASS_2_90C3FAB661E5C263_METHOD_2_0869E1192F8E01DF_OFFSET UNITYSDK_OFFSET(0xB8DB380)
#define CLASS_2_90C3FAB661E5C263_METHOD_2_146C3E7311763B1B_OFFSET UNITYSDK_OFFSET(0xB8DA780)
#define CLASS_2_90C3FAB661E5C263_METHOD_2_37D45C6251C9E5C1_OFFSET UNITYSDK_OFFSET(0xB8DB180)
#define CLASS_2_90C3FAB661E5C263_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0xB8DB650)
#define CLASS_2_90C3FAB661E5C263_METHOD_2_8691C17EC356A1A1_1_OFFSET UNITYSDK_OFFSET(0xB8DA590)
#define CLASS_2_90C3FAB661E5C263_METHOD_2_8691C17EC356A1A1_OFFSET UNITYSDK_OFFSET(0xB8DA3D0)
#define CLASS_2_90C3FAB661E5C263_METHOD_2_912CD6A43BF0D575_OFFSET UNITYSDK_OFFSET(0xB8DA700)
#define CLASS_2_90C3FAB661E5C263_METHOD_2_9873EE85585D09C9_OFFSET UNITYSDK_OFFSET(0xB8DA970)
#define CLASS_2_90C3FAB661E5C263_METHOD_2_988EE78A892C77F3_OFFSET UNITYSDK_OFFSET(0xB8DAA00)
#define CLASS_2_90C3FAB661E5C263_METHOD_2_A546BF9AF16A6444_OFFSET UNITYSDK_OFFSET(0xB8DB020)
#define CLASS_2_90C3FAB661E5C263_METHOD_2_D52B05457CF2F5DE_OFFSET UNITYSDK_OFFSET(0xB8DAA80)
#define CLASS_2_90C3FAB661E5C263__CCTOR_OFFSET UNITYSDK_OFFSET(0xB8DC0B0)
#define CLASS_2_90C3FAB661E5C263__CTOR_OFFSET UNITYSDK_OFFSET(0xB8DB760)

inline static constexpr unsigned int Class_2_90C3FAB661E5C263_TypeDefinitionIndex = 45511;

class Class_2_90C3FAB661E5C263 : public ::RPG::GameCore::GameComponentBase
{
public:
	static ::System::String** StaticGet_Field_2_3()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_90C3FAB661E5C263_TypeDefinitionIndex)->GetStaticField(0x46BA0);
	}
	::System::Collections::Generic::HashSet_1<::RPG::GameCore::StringHash>* Field_2_2; // 0x18
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::Action*>* Field_2_0; // 0x20
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::Il2CppArray<::RPG::GameCore::DynamicJsonConfig*>*>* Field_2_11; // 0x28
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::UInt32>* Field_2_5; // 0x30
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::RPG::GameCore::DynamicJsonConfig*>* Field_2_10; // 0x38
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::Boolean>* Field_2_6; // 0x40
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::RPG::GameCore::GameEntityList*>* Field_2_8; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::ValueTuple_3<::RPG::GameCore::StringHash, ::Class_2_90C3FAB661E5C263_ReferenceType, ::Class_2_90C3FAB661E5C263_ReferenceSource>>* Field_2_1; // 0x50
	::Class_1_2CAAA2FDF9170110* Field_2_4; // 0x58
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::Il2CppArray<::System::String*>*>* Field_2_9; // 0x60
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::String*>* Field_2_7; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_90C3FAB661E5C263__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_90C3FAB661E5C263__CCTOR_OFFSET))();
	}

	::System::Void Method_2_8691C17EC356A1A1(::RPG::GameCore::StringHash a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StringHash, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_90C3FAB661E5C263_METHOD_2_8691C17EC356A1A1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8691C17EC356A1A1_1(::RPG::GameCore::StringHash a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StringHash, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_90C3FAB661E5C263_METHOD_2_8691C17EC356A1A1_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_912CD6A43BF0D575(::RPG::GameCore::StringHash a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StringHash, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_90C3FAB661E5C263_METHOD_2_912CD6A43BF0D575_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9873EE85585D09C9(::RPG::GameCore::StringHash a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StringHash, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_90C3FAB661E5C263_METHOD_2_9873EE85585D09C9_OFFSET))(this, a1, a2);
	}

	static ::System::Boolean Method_2_988EE78A892C77F3(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_90C3FAB661E5C263_METHOD_2_988EE78A892C77F3_OFFSET))(a1);
	}

	::System::Void Method_2_D52B05457CF2F5DE(::System::String* a1, ::Class_2_90C3FAB661E5C263_ReferenceType a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_2_90C3FAB661E5C263_ReferenceType))((::PBYTE)hIl2Cpp + CLASS_2_90C3FAB661E5C263_METHOD_2_D52B05457CF2F5DE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_146C3E7311763B1B(::RPG::GameCore::StringHash a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StringHash, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_90C3FAB661E5C263_METHOD_2_146C3E7311763B1B_OFFSET))(this, a1, a2);
	}

	static ::System::ValueTuple_2<::Class_2_90C3FAB661E5C263_ReferenceSource, ::System::String*> Method_2_A546BF9AF16A6444(::System::String* a1)
	{
		return ((::System::ValueTuple_2<::Class_2_90C3FAB661E5C263_ReferenceSource, ::System::String*>(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_90C3FAB661E5C263_METHOD_2_A546BF9AF16A6444_OFFSET))(a1);
	}

	::System::Void Method_2_37D45C6251C9E5C1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_90C3FAB661E5C263_METHOD_2_37D45C6251C9E5C1_OFFSET))(this, a1);
	}

	::System::Void Method_2_0869E1192F8E01DF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_90C3FAB661E5C263_METHOD_2_0869E1192F8E01DF_OFFSET))(this);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_90C3FAB661E5C263_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_90C3FAB661E5C263_DISPOSE_OFFSET))(this);
	}
};
