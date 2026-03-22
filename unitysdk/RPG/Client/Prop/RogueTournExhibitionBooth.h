#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture; }

#define RPG_CLIENT_PROP_ROGUETOURNEXHIBITIONBOOTH_METHOD_5_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x9CB6130)
#define RPG_CLIENT_PROP_ROGUETOURNEXHIBITIONBOOTH_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x9CB60B0)
#define RPG_CLIENT_PROP_ROGUETOURNEXHIBITIONBOOTH_SHOWEMPTYEXHIBITION_OFFSET UNITYSDK_OFFSET(0x9CB6390)
#define RPG_CLIENT_PROP_ROGUETOURNEXHIBITIONBOOTH_SHOWEXHIBITION_OFFSET UNITYSDK_OFFSET(0x9CB6190)
#define RPG_CLIENT_PROP_ROGUETOURNEXHIBITIONBOOTH__CCTOR_OFFSET UNITYSDK_OFFSET(0x9CB6480)
#define RPG_CLIENT_PROP_ROGUETOURNEXHIBITIONBOOTH__CTOR_OFFSET UNITYSDK_OFFSET(0x9CB6470)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int RogueTournExhibitionBooth_TypeDefinitionIndex = 62221;

	class RogueTournExhibitionBooth : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_Field_5_3()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RogueTournExhibitionBooth_TypeDefinitionIndex)->GetStaticField(0xF890);
		}
		::UnityEngine::Renderer* ExhibitionImageRenderer; // 0x18
		::UnityEngine::Texture* Field_5_1; // 0x20
		::System::String* Field_5_2; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUETOURNEXHIBITIONBOOTH__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUETOURNEXHIBITIONBOOTH__CCTOR_OFFSET))();
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUETOURNEXHIBITIONBOOTH_ONDESTROY_OFFSET))(this);
		}

		::System::Boolean ShowExhibition(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUETOURNEXHIBITIONBOOTH_SHOWEXHIBITION_OFFSET))(this, a1);
		}

		::System::Void ShowEmptyExhibition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUETOURNEXHIBITIONBOOTH_SHOWEMPTYEXHIBITION_OFFSET))(this);
		}

		::System::Void Method_5_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUETOURNEXHIBITIONBOOTH_METHOD_5_9681042564541CD6_OFFSET))(this);
		}
	};
}
