#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_019938BC9C50B169_2.h"
#include "unitysdk/System/Collections/Generic/Dictionary_2_Enumerator.h"
#include "unitysdk/System/Object.h"

class Class_1_F730CFFB290B1944;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class AvatarProxy; }
namespace System { template <typename T> class Predicate_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_1_F730CFFB290B1944__ENUMERATESPECIFICPATHAVATARS_D__16_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x178DE130)
#define CLASS_1_F730CFFB290B1944__ENUMERATESPECIFICPATHAVATARS_D__16_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_AVATARSYSTEM_IAVATAR__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x178DE310)
#define CLASS_1_F730CFFB290B1944__ENUMERATESPECIFICPATHAVATARS_D__16_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_AVATARSYSTEM_IAVATAR__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x178DE2A0)
#define CLASS_1_F730CFFB290B1944__ENUMERATESPECIFICPATHAVATARS_D__16_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x178DE370)
#define CLASS_1_F730CFFB290B1944__ENUMERATESPECIFICPATHAVATARS_D__16_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x178DE300)
#define CLASS_1_F730CFFB290B1944__ENUMERATESPECIFICPATHAVATARS_D__16_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x178DE2B0)
#define CLASS_1_F730CFFB290B1944__ENUMERATESPECIFICPATHAVATARS_D__16_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x178DE110)
#define CLASS_1_F730CFFB290B1944__ENUMERATESPECIFICPATHAVATARS_D__16__CTOR_OFFSET UNITYSDK_OFFSET(0x178DD3D0)
#define CLASS_1_F730CFFB290B1944__ENUMERATESPECIFICPATHAVATARS_D__16___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x178DE120)

inline static constexpr unsigned int Class_1_F730CFFB290B1944__EnumerateSpecificPathAvatars_d__16_TypeDefinitionIndex = 58635;

class Class_1_F730CFFB290B1944__EnumerateSpecificPathAvatars_d__16 : public ::System::Object
{
public:
	::Class_1_F730CFFB290B1944* __4__this; // 0x10
	::System::Predicate_1<::RPG::AvatarSystem::IAvatar*>* __3__predicate; // 0x18
	::RPG::AvatarSystem::IAvatar* __2__current; // 0x20
	::System::Predicate_1<::RPG::AvatarSystem::IAvatar*>* predicate; // 0x28
	::System::Collections::Generic::Dictionary_2_Enumerator<::Struct_2_019938BC9C50B169_2, ::RPG::Client::AvatarProxy*> __7__wrap1; // 0x30
	::System::Int32 __l__initialThreadId; // 0x58
	::System::Int32 __1__state; // 0x5C

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F730CFFB290B1944__ENUMERATESPECIFICPATHAVATARS_D__16__CTOR_OFFSET))(this, a1);
	}

	::System::Void System_IDisposable_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F730CFFB290B1944__ENUMERATESPECIFICPATHAVATARS_D__16_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F730CFFB290B1944__ENUMERATESPECIFICPATHAVATARS_D__16_MOVENEXT_OFFSET))(this);
	}

	::System::Void __m__Finally1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F730CFFB290B1944__ENUMERATESPECIFICPATHAVATARS_D__16___M__FINALLY1_OFFSET))(this);
	}

	::RPG::AvatarSystem::IAvatar* System_Collections_Generic_IEnumerator_RPG_AvatarSystem_IAvatar__get_Current()
	{
		return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F730CFFB290B1944__ENUMERATESPECIFICPATHAVATARS_D__16_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_AVATARSYSTEM_IAVATAR__GET_CURRENT_OFFSET))(this);
	}

	::System::Void System_Collections_IEnumerator_Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F730CFFB290B1944__ENUMERATESPECIFICPATHAVATARS_D__16_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
	}

	::System::Object* System_Collections_IEnumerator_get_Current()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F730CFFB290B1944__ENUMERATESPECIFICPATHAVATARS_D__16_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::RPG::AvatarSystem::IAvatar*>* System_Collections_Generic_IEnumerable_RPG_AvatarSystem_IAvatar__GetEnumerator()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F730CFFB290B1944__ENUMERATESPECIFICPATHAVATARS_D__16_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_AVATARSYSTEM_IAVATAR__GETENUMERATOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F730CFFB290B1944__ENUMERATESPECIFICPATHAVATARS_D__16_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
	}
};
