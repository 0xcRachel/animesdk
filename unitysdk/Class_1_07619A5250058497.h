#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector3Int.h"

class Class_1_3D780034EB92FF7C;
class Class_1_7BCD0D3615CD642E;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_07619A5250058497_GET_REPLAYFILEPATH_OFFSET UNITYSDK_OFFSET(0x1535DC90)
#define CLASS_1_07619A5250058497_GET_SCREENDEBUGLOGOWNERID_OFFSET UNITYSDK_OFFSET(0x1535DD50)
#define CLASS_1_07619A5250058497_METHOD_1_407E16A0D11675B6_OFFSET UNITYSDK_OFFSET(0x1535DEC0)
#define CLASS_1_07619A5250058497_METHOD_1_74D9C5B754FBFE09_OFFSET UNITYSDK_OFFSET(0x1535E020)
#define CLASS_1_07619A5250058497_METHOD_1_7C4EC501A54093A0_OFFSET UNITYSDK_OFFSET(0x1535D9A0)
#define CLASS_1_07619A5250058497_METHOD_1_82ABFE24D5168B0C_OFFSET UNITYSDK_OFFSET(0x1535DB80)
#define CLASS_1_07619A5250058497_METHOD_1_858FB56063A4B767_OFFSET UNITYSDK_OFFSET(0x1535DC30)
#define CLASS_1_07619A5250058497_METHOD_1_89FD8D54DD0955AF_OFFSET UNITYSDK_OFFSET(0x1535E320)
#define CLASS_1_07619A5250058497_METHOD_1_957AD698AE6A3456_OFFSET UNITYSDK_OFFSET(0x1535DE10)
#define CLASS_1_07619A5250058497_METHOD_1_A05E7972E48397E0_OFFSET UNITYSDK_OFFSET(0x1535DAA0)
#define CLASS_1_07619A5250058497_METHOD_1_B161A956457A0954_OFFSET UNITYSDK_OFFSET(0x1535E190)
#define CLASS_1_07619A5250058497_SET_REPLAYFILEPATH_OFFSET UNITYSDK_OFFSET(0x1535DCF0)
#define CLASS_1_07619A5250058497_SET_SCREENDEBUGLOGOWNERID_OFFSET UNITYSDK_OFFSET(0x1535DDB0)
#define CLASS_1_07619A5250058497__CCTOR_OFFSET UNITYSDK_OFFSET(0x1535E400)

inline static constexpr unsigned int Class_1_07619A5250058497_TypeDefinitionIndex = 71005;

class Class_1_07619A5250058497 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_07619A5250058497_TypeDefinitionIndex)->GetStaticField(0x24370);
	}
	static ::System::String** StaticGet__ReplayFilePath_k__BackingField()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_07619A5250058497_TypeDefinitionIndex)->GetStaticField(0x24378);
	}
	static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::HashSet_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_07619A5250058497_TypeDefinitionIndex)->GetStaticField(0x24380);
	}
	static ::System::Int32* StaticGet__ScreenDebugLogOwnerID_k__BackingField()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_07619A5250058497_TypeDefinitionIndex)->GetStaticField(0x9170);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_07619A5250058497__CCTOR_OFFSET))();
	}

	static ::Class_1_7BCD0D3615CD642E* Method_1_7C4EC501A54093A0(::UnityEngine::Vector3 a1, ::System::UInt64 a2)
	{
		return ((::Class_1_7BCD0D3615CD642E*(*)(::UnityEngine::Vector3, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_07619A5250058497_METHOD_1_7C4EC501A54093A0_OFFSET))(a1, a2);
	}

	static ::Class_1_7BCD0D3615CD642E* Method_1_A05E7972E48397E0(::UnityEngine::Vector3 a1, ::System::Single a2, ::UnityEngine::Vector3Int a3, ::System::UInt64 a4)
	{
		return ((::Class_1_7BCD0D3615CD642E*(*)(::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3Int, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_07619A5250058497_METHOD_1_A05E7972E48397E0_OFFSET))(a1, a2, a3, a4);
	}

	static ::Class_1_3D780034EB92FF7C* Method_1_82ABFE24D5168B0C()
	{
		return ((::Class_1_3D780034EB92FF7C*(*)())((::PBYTE)hIl2Cpp + CLASS_1_07619A5250058497_METHOD_1_82ABFE24D5168B0C_OFFSET))();
	}

	static ::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::System::String*>* Method_1_858FB56063A4B767()
	{
		return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::System::String*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_07619A5250058497_METHOD_1_858FB56063A4B767_OFFSET))();
	}

	static ::System::String* get_ReplayFilePath()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_07619A5250058497_GET_REPLAYFILEPATH_OFFSET))();
	}

	static ::System::Void set_ReplayFilePath(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_07619A5250058497_SET_REPLAYFILEPATH_OFFSET))(a1);
	}

	static ::System::Int32 get_ScreenDebugLogOwnerID()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_07619A5250058497_GET_SCREENDEBUGLOGOWNERID_OFFSET))();
	}

	static ::System::Void set_ScreenDebugLogOwnerID(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_07619A5250058497_SET_SCREENDEBUGLOGOWNERID_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_957AD698AE6A3456(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_07619A5250058497_METHOD_1_957AD698AE6A3456_OFFSET))(a1);
	}

	static ::System::Void Method_1_407E16A0D11675B6(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_07619A5250058497_METHOD_1_407E16A0D11675B6_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_74D9C5B754FBFE09(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_07619A5250058497_METHOD_1_74D9C5B754FBFE09_OFFSET))(a1);
	}

	static ::System::Void Method_1_B161A956457A0954(::System::String* a1, ::System::String* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_07619A5250058497_METHOD_1_B161A956457A0954_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_89FD8D54DD0955AF(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_07619A5250058497_METHOD_1_89FD8D54DD0955AF_OFFSET))(a1, a2);
	}
};
