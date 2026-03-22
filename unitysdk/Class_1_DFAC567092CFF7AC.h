#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_61D036A13B263279;
class Class_1_A1B90D06083FBF14;
class Class_3_6AF1E5B02897ED63;
namespace RPG::GameCore { class LevelSmartObjectInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_DFAC567092CFF7AC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10982360)
#define CLASS_1_DFAC567092CFF7AC_METHOD_1_0A4B9B2045975F53_OFFSET UNITYSDK_OFFSET(0x109825F0)
#define CLASS_1_DFAC567092CFF7AC_METHOD_1_50C28BACDA4A6A63_OFFSET UNITYSDK_OFFSET(0x10982CF0)
#define CLASS_1_DFAC567092CFF7AC_METHOD_1_52675038485BC592_OFFSET UNITYSDK_OFFSET(0x10982740)
#define CLASS_1_DFAC567092CFF7AC_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x10982E90)
#define CLASS_1_DFAC567092CFF7AC_METHOD_1_A2FECA576332B43B_OFFSET UNITYSDK_OFFSET(0x109827F0)
#define CLASS_1_DFAC567092CFF7AC_METHOD_1_AB1C1193BCC64C43_OFFSET UNITYSDK_OFFSET(0x109829F0)
#define CLASS_1_DFAC567092CFF7AC_METHOD_1_CCB93DB5F893C716_OFFSET UNITYSDK_OFFSET(0x10982AE0)
#define CLASS_1_DFAC567092CFF7AC_METHOD_1_CE81D059476B1F49_OFFSET UNITYSDK_OFFSET(0x10982E60)
#define CLASS_1_DFAC567092CFF7AC_METHOD_1_D37FAD0A6AA04B25_OFFSET UNITYSDK_OFFSET(0x10982E70)
#define CLASS_1_DFAC567092CFF7AC_METHOD_1_DCE4FE848CE6F3B5_OFFSET UNITYSDK_OFFSET(0x10982C30)
#define CLASS_1_DFAC567092CFF7AC_METHOD_1_F4F61B09D32675B2_OFFSET UNITYSDK_OFFSET(0x109828B0)
#define CLASS_1_DFAC567092CFF7AC_METHOD_1_F9B553A15D44C375_OFFSET UNITYSDK_OFFSET(0x109824B0)
#define CLASS_1_DFAC567092CFF7AC_METHOD_1_FDB878EE730B6AA4_OFFSET UNITYSDK_OFFSET(0x10982970)
#define CLASS_1_DFAC567092CFF7AC__CTOR_OFFSET UNITYSDK_OFFSET(0x10982130)

inline static constexpr unsigned int Class_1_DFAC567092CFF7AC_TypeDefinitionIndex = 41090;

class Class_1_DFAC567092CFF7AC : public ::System::Object
{
public:
	::Class_3_6AF1E5B02897ED63* Field_1_6; // 0x10
	::System::Collections::Generic::List_1<::Class_1_61D036A13B263279*>* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::UInt32>>* Field_1_5; // 0x20
	::System::Collections::Generic::List_1<::Class_1_A1B90D06083FBF14*>* Field_1_0; // 0x28
	::UnityEngine::Vector3 Field_1_3; // 0x30
	::System::Single Field_1_4; // 0x3C
	::System::UInt64 Field_1_2; // 0x40

	::System::Void _ctor(::RPG::GameCore::LevelSmartObjectInfo* a1, ::System::UInt64 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelSmartObjectInfo*, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_DFAC567092CFF7AC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DFAC567092CFF7AC_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_1_F9B553A15D44C375(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DFAC567092CFF7AC_METHOD_1_F9B553A15D44C375_OFFSET))(this, a1);
	}

	::System::Void Method_1_0A4B9B2045975F53(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DFAC567092CFF7AC_METHOD_1_0A4B9B2045975F53_OFFSET))(this, a1);
	}

	::System::Void Method_1_A2FECA576332B43B(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DFAC567092CFF7AC_METHOD_1_A2FECA576332B43B_OFFSET))(this, a1);
	}

	::System::Void Method_1_F4F61B09D32675B2(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DFAC567092CFF7AC_METHOD_1_F4F61B09D32675B2_OFFSET))(this, a1);
	}

	::Class_1_A1B90D06083FBF14* Method_1_FDB878EE730B6AA4(::System::UInt32 a1)
	{
		return ((::Class_1_A1B90D06083FBF14*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DFAC567092CFF7AC_METHOD_1_FDB878EE730B6AA4_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_AB1C1193BCC64C43(::System::UInt32& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_1_DFAC567092CFF7AC_METHOD_1_AB1C1193BCC64C43_OFFSET))(this, a1);
	}

	::Class_1_61D036A13B263279* Method_1_CCB93DB5F893C716(::System::UInt32 a1)
	{
		return ((::Class_1_61D036A13B263279*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DFAC567092CFF7AC_METHOD_1_CCB93DB5F893C716_OFFSET))(this, a1);
	}

	::System::Void Method_1_DCE4FE848CE6F3B5(::System::String* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DFAC567092CFF7AC_METHOD_1_DCE4FE848CE6F3B5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_52675038485BC592(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DFAC567092CFF7AC_METHOD_1_52675038485BC592_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_50C28BACDA4A6A63(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DFAC567092CFF7AC_METHOD_1_50C28BACDA4A6A63_OFFSET))(this, a1);
	}

	::System::UInt64 Method_1_CE81D059476B1F49()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DFAC567092CFF7AC_METHOD_1_CE81D059476B1F49_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_D37FAD0A6AA04B25()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DFAC567092CFF7AC_METHOD_1_D37FAD0A6AA04B25_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DFAC567092CFF7AC_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}
};
