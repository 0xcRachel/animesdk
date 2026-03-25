#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6852A427C81E3F96;
class Class_1_9E75A6F37EAB58DE;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_BATTLERESULAUTODECOMPOSEINFO_GETDECOMPOSEDELEMENT_OFFSET UNITYSDK_OFFSET(0x91DA520)
#define RPG_CLIENT_BATTLERESULAUTODECOMPOSEINFO_HASITEMDECOMPOSED_OFFSET UNITYSDK_OFFSET(0x91D9EF0)
#define RPG_CLIENT_BATTLERESULAUTODECOMPOSEINFO_ISITEMDECOMPOSED_OFFSET UNITYSDK_OFFSET(0x91D9E90)
#define RPG_CLIENT_BATTLERESULAUTODECOMPOSEINFO_MERGE_OFFSET UNITYSDK_OFFSET(0x91D9C50)
#define RPG_CLIENT_BATTLERESULAUTODECOMPOSEINFO_SETREWARDCOMPOSEDESCTEXT_OFFSET UNITYSDK_OFFSET(0x91D9F50)
#define RPG_CLIENT_BATTLERESULAUTODECOMPOSEINFO_SYNC_OFFSET UNITYSDK_OFFSET(0x91D9AA0)
#define RPG_CLIENT_BATTLERESULAUTODECOMPOSEINFO__CCTOR_OFFSET UNITYSDK_OFFSET(0x91DA5B0)
#define RPG_CLIENT_BATTLERESULAUTODECOMPOSEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x91D9A20)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleResulAutoDecomposeInfo_TypeDefinitionIndex = 51036;

	class BattleResulAutoDecomposeInfo : public ::System::Object
	{
	public:
		static ::RPG::Client::BattleResulAutoDecomposeInfo** StaticGet_DefaultDecomposeInfo()
		{
			return (::RPG::Client::BattleResulAutoDecomposeInfo**)Il2CppClass::FromTypeDefinitionIndex(BattleResulAutoDecomposeInfo_TypeDefinitionIndex)->GetStaticField(0x48580);
		}
		::System::Collections::Generic::List_1<::System::UInt32>* DecomposedRelicIDs; // 0x10
		::System::Collections::Generic::List_1<::Class_1_9E75A6F37EAB58DE*>* DecomposeElements; // 0x18
		::System::Boolean IsExceedLimit; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULAUTODECOMPOSEINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULAUTODECOMPOSEINFO__CCTOR_OFFSET))();
		}

		::System::Void Sync(::Class_1_6852A427C81E3F96* autoDecompose)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6852A427C81E3F96*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULAUTODECOMPOSEINFO_SYNC_OFFSET))(this, autoDecompose);
		}

		::System::Void Merge(::RPG::Client::BattleResulAutoDecomposeInfo* decomposeInfo)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleResulAutoDecomposeInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULAUTODECOMPOSEINFO_MERGE_OFFSET))(this, decomposeInfo);
		}

		::System::Boolean IsItemDecomposed(::System::UInt32 UID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULAUTODECOMPOSEINFO_ISITEMDECOMPOSED_OFFSET))(this, UID);
		}

		::System::Boolean HasItemDecomposed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULAUTODECOMPOSEINFO_HASITEMDECOMPOSED_OFFSET))(this);
		}

		::System::Void SetRewardComposeDescText(::UnityEngine::UI::Text* textBlock)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Text*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULAUTODECOMPOSEINFO_SETREWARDCOMPOSEDESCTEXT_OFFSET))(this, textBlock);
		}

		::Class_1_9E75A6F37EAB58DE* GetDecomposedElement(::System::UInt32 itemID)
		{
			return ((::Class_1_9E75A6F37EAB58DE*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULAUTODECOMPOSEINFO_GETDECOMPOSEDELEMENT_OFFSET))(this, itemID);
		}
	};
}
