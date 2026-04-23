#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CakeBubbleOffset.h"
#include "unitysdk/RPG/Client/CakeCatchBubbleType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_CAKECATCHBUBBLENOTIFYPARAM_GET_BUBBLETYPE_OFFSET UNITYSDK_OFFSET(0x15FCBD10)
#define RPG_CLIENT_CAKECATCHBUBBLENOTIFYPARAM_GET_CONTENTTEXTID_OFFSET UNITYSDK_OFFSET(0x15FCBD30)
#define RPG_CLIENT_CAKECATCHBUBBLENOTIFYPARAM_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x15FCBCA0)
#define RPG_CLIENT_CAKECATCHBUBBLENOTIFYPARAM_GET_ISSHOWPIC_OFFSET UNITYSDK_OFFSET(0x15FCBCC0)
#define RPG_CLIENT_CAKECATCHBUBBLENOTIFYPARAM_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0x15FCBCE0)
#define RPG_CLIENT_CAKECATCHBUBBLENOTIFYPARAM_GET_RUNTIMEID_OFFSET UNITYSDK_OFFSET(0x15FCBC80)
#define RPG_CLIENT_CAKECATCHBUBBLENOTIFYPARAM_SET_BUBBLETYPE_OFFSET UNITYSDK_OFFSET(0x15FCBD20)
#define RPG_CLIENT_CAKECATCHBUBBLENOTIFYPARAM_SET_CONTENTTEXTID_OFFSET UNITYSDK_OFFSET(0x15FCBD40)
#define RPG_CLIENT_CAKECATCHBUBBLENOTIFYPARAM_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x15FCBCB0)
#define RPG_CLIENT_CAKECATCHBUBBLENOTIFYPARAM_SET_ISSHOWPIC_OFFSET UNITYSDK_OFFSET(0x15FCBCD0)
#define RPG_CLIENT_CAKECATCHBUBBLENOTIFYPARAM_SET_OFFSET_OFFSET UNITYSDK_OFFSET(0x15FCBD00)
#define RPG_CLIENT_CAKECATCHBUBBLENOTIFYPARAM_SET_RUNTIMEID_OFFSET UNITYSDK_OFFSET(0x15FCBC90)
#define RPG_CLIENT_CAKECATCHBUBBLENOTIFYPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x15FCB520)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeCatchBubbleNotifyParam_TypeDefinitionIndex = 57996;

	class CakeCatchBubbleNotifyParam : public ::System::Object
	{
	public:
		::System::String* _IconPath_k__BackingField; // 0x10
		::RPG::Client::CakeCatchBubbleType _BubbleType_k__BackingField; // 0x18
		::System::Boolean _IsShowPic_k__BackingField; // 0x1C
		::RPG::Client::TextID _ContentTextID_k__BackingField; // 0x20
		::System::UInt32 _RuntimeID_k__BackingField; // 0x30
		::RPG::Client::CakeBubbleOffset _Offset_k__BackingField; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHBUBBLENOTIFYPARAM__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_RuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHBUBBLENOTIFYPARAM_GET_RUNTIMEID_OFFSET))(this);
		}

		::System::Void set_RuntimeID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHBUBBLENOTIFYPARAM_SET_RUNTIMEID_OFFSET))(this, value);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHBUBBLENOTIFYPARAM_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHBUBBLENOTIFYPARAM_SET_ICONPATH_OFFSET))(this, value);
		}

		::System::Boolean get_IsShowPic()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHBUBBLENOTIFYPARAM_GET_ISSHOWPIC_OFFSET))(this);
		}

		::System::Void set_IsShowPic(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHBUBBLENOTIFYPARAM_SET_ISSHOWPIC_OFFSET))(this, value);
		}

		::RPG::Client::CakeBubbleOffset get_Offset()
		{
			return ((::RPG::Client::CakeBubbleOffset(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHBUBBLENOTIFYPARAM_GET_OFFSET_OFFSET))(this);
		}

		::System::Void set_Offset(::RPG::Client::CakeBubbleOffset value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeBubbleOffset))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHBUBBLENOTIFYPARAM_SET_OFFSET_OFFSET))(this, value);
		}

		::RPG::Client::CakeCatchBubbleType get_BubbleType()
		{
			return ((::RPG::Client::CakeCatchBubbleType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHBUBBLENOTIFYPARAM_GET_BUBBLETYPE_OFFSET))(this);
		}

		::System::Void set_BubbleType(::RPG::Client::CakeCatchBubbleType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeCatchBubbleType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHBUBBLENOTIFYPARAM_SET_BUBBLETYPE_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_ContentTextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHBUBBLENOTIFYPARAM_GET_CONTENTTEXTID_OFFSET))(this);
		}

		::System::Void set_ContentTextID(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHBUBBLENOTIFYPARAM_SET_CONTENTTEXTID_OFFSET))(this, value);
		}
	};
}
