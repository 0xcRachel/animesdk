#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueBuffCategory.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_656;
class Class_1_FA4F4A67B1C04320_163;
class Class_1_FA4F4A67B1C04320_693;
namespace RPG::GameCore { class MazeBuffRow; }
namespace RPG::GameCore { class RogueBuffTypeRow; }
namespace System { class String; }

#define RPG_CLIENT_ROGUEBUFFDATA_CHECKBUFFSTATEIFDROP_OFFSET UNITYSDK_OFFSET(0x9DD99A0)
#define RPG_CLIENT_ROGUEBUFFDATA_CHECKBUFFSTATEIFGET_OFFSET UNITYSDK_OFFSET(0x9DD9460)
#define RPG_CLIENT_ROGUEBUFFDATA_CREATE_1_OFFSET UNITYSDK_OFFSET(0x9DD8440)
#define RPG_CLIENT_ROGUEBUFFDATA_CREATE_2_OFFSET UNITYSDK_OFFSET(0x9DD84E0)
#define RPG_CLIENT_ROGUEBUFFDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9DD83A0)
#define RPG_CLIENT_ROGUEBUFFDATA_GETBUFFCATEGORY_OFFSET UNITYSDK_OFFSET(0x9DD9370)
#define RPG_CLIENT_ROGUEBUFFDATA_GETEXTRAEFFECTROWIDS_OFFSET UNITYSDK_OFFSET(0x9DD8BD0)
#define RPG_CLIENT_ROGUEBUFFDATA_GETMAZEBUFFROW_OFFSET UNITYSDK_OFFSET(0x9DD9220)
#define RPG_CLIENT_ROGUEBUFFDATA_GETROGUEAEONID_OFFSET UNITYSDK_OFFSET(0x9DD8E60)
#define RPG_CLIENT_ROGUEBUFFDATA_GETROGUEBUFFRARITY_OFFSET UNITYSDK_OFFSET(0x9DD8AE0)
#define RPG_CLIENT_ROGUEBUFFDATA_GETROGUEBUFFTAG_OFFSET UNITYSDK_OFFSET(0x9DD8F50)
#define RPG_CLIENT_ROGUEBUFFDATA_GETROGUEBUFFTYPEROW_OFFSET UNITYSDK_OFFSET(0x9DD88C0)
#define RPG_CLIENT_ROGUEBUFFDATA_GETROGUEBUFFTYPE_OFFSET UNITYSDK_OFFSET(0x9DD87D0)
#define RPG_CLIENT_ROGUEBUFFDATA_GET_AEONCROSSICON_OFFSET UNITYSDK_OFFSET(0x9DDA3D0)
#define RPG_CLIENT_ROGUEBUFFDATA_GET_BUFFID_OFFSET UNITYSDK_OFFSET(0x9DDA310)
#define RPG_CLIENT_ROGUEBUFFDATA_GET_ISINSUFFICIENTBUFF_OFFSET UNITYSDK_OFFSET(0x9DDA350)
#define RPG_CLIENT_ROGUEBUFFDATA_GET_ISNECESSARYBUFF_OFFSET UNITYSDK_OFFSET(0x9DDA390)
#define RPG_CLIENT_ROGUEBUFFDATA_GET_ISVERYINSUFFICIENTBUFF_OFFSET UNITYSDK_OFFSET(0x9DDA370)
#define RPG_CLIENT_ROGUEBUFFDATA_GET_ISVERYNECESSARYBUFF_OFFSET UNITYSDK_OFFSET(0x9DDA3B0)
#define RPG_CLIENT_ROGUEBUFFDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x9DDA330)
#define RPG_CLIENT_ROGUEBUFFDATA_ISBATTLEEVENTBUFFCROSS_OFFSET UNITYSDK_OFFSET(0x9DD9040)
#define RPG_CLIENT_ROGUEBUFFDATA_ISLEVELMAX_OFFSET UNITYSDK_OFFSET(0x9DD9310)
#define RPG_CLIENT_ROGUEBUFFDATA_ISNORMALBUFF_OFFSET UNITYSDK_OFFSET(0x9DD9130)
#define RPG_CLIENT_ROGUEBUFFDATA_REFRESHLEVEL_OFFSET UNITYSDK_OFFSET(0x9DD8580)
#define RPG_CLIENT_ROGUEBUFFDATA_SET_BUFFID_OFFSET UNITYSDK_OFFSET(0x9DDA320)
#define RPG_CLIENT_ROGUEBUFFDATA_SET_ISINSUFFICIENTBUFF_OFFSET UNITYSDK_OFFSET(0x9DDA360)
#define RPG_CLIENT_ROGUEBUFFDATA_SET_ISNECESSARYBUFF_OFFSET UNITYSDK_OFFSET(0x9DDA3A0)
#define RPG_CLIENT_ROGUEBUFFDATA_SET_ISVERYINSUFFICIENTBUFF_OFFSET UNITYSDK_OFFSET(0x9DDA380)
#define RPG_CLIENT_ROGUEBUFFDATA_SET_ISVERYNECESSARYBUFF_OFFSET UNITYSDK_OFFSET(0x9DDA3C0)
#define RPG_CLIENT_ROGUEBUFFDATA_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x9DDA340)
#define RPG_CLIENT_ROGUEBUFFDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9DD5C00)
#define RPG_CLIENT_ROGUEBUFFDATA__TRYINITROGUEBUFFROW_OFFSET UNITYSDK_OFFSET(0x9DD85D0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueBuffData_TypeDefinitionIndex = 53398;

	class RogueBuffData : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_656* _RowData; // 0x10
		::RPG::GameCore::MazeBuffRow* _MazeBuffRow; // 0x18
		::System::Boolean _IsVeryNecessaryBuff_k__BackingField; // 0x20
		::System::Boolean _IsInsufficientBuff_k__BackingField; // 0x21
		::System::Boolean _IsNecessaryBuff_k__BackingField; // 0x22
		::System::Boolean _IsVeryInsufficientBuff_k__BackingField; // 0x23
		::System::UInt32 _Level_k__BackingField; // 0x24
		::System::UInt32 _BuffID_k__BackingField; // 0x28

		::System::Void _ctor(::System::UInt32 rogueBuffID, ::System::UInt32 level)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA__CTOR_OFFSET))(this, rogueBuffID, level);
		}

		static ::RPG::Client::RogueBuffData* Create(::System::UInt32 rogueBuffID, ::System::UInt32 buffLevel)
		{
			return ((::RPG::Client::RogueBuffData*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_CREATE_OFFSET))(rogueBuffID, buffLevel);
		}

		static ::RPG::Client::RogueBuffData* Create_1(::Class_1_FA4F4A67B1C04320_693* rogueBuff)
		{
			return ((::RPG::Client::RogueBuffData*(*)(::Class_1_FA4F4A67B1C04320_693*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_CREATE_1_OFFSET))(rogueBuff);
		}

		static ::RPG::Client::RogueBuffData* Create_2(::Class_1_FA4F4A67B1C04320_163* rogueBuff)
		{
			return ((::RPG::Client::RogueBuffData*(*)(::Class_1_FA4F4A67B1C04320_163*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_CREATE_2_OFFSET))(rogueBuff);
		}

		::System::Void RefreshLevel(::System::UInt32 buffLevel)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_REFRESHLEVEL_OFFSET))(this, buffLevel);
		}

		::System::UInt32 GetRogueBuffType()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_GETROGUEBUFFTYPE_OFFSET))(this);
		}

		::RPG::GameCore::RogueBuffTypeRow* GetRogueBuffTypeRow()
		{
			return ((::RPG::GameCore::RogueBuffTypeRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_GETROGUEBUFFTYPEROW_OFFSET))(this);
		}

		::System::UInt32 GetRogueBuffRarity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_GETROGUEBUFFRARITY_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* GetExtraEffectRowIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_GETEXTRAEFFECTROWIDS_OFFSET))(this);
		}

		::System::UInt32 GetRogueAeonID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_GETROGUEAEONID_OFFSET))(this);
		}

		::System::UInt32 GetRogueBuffTag()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_GETROGUEBUFFTAG_OFFSET))(this);
		}

		::System::Boolean IsBattleEventBuffCross()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_ISBATTLEEVENTBUFFCROSS_OFFSET))(this);
		}

		::System::Boolean IsNormalBuff()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_ISNORMALBUFF_OFFSET))(this);
		}

		::RPG::GameCore::MazeBuffRow* GetMazeBuffRow()
		{
			return ((::RPG::GameCore::MazeBuffRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_GETMAZEBUFFROW_OFFSET))(this);
		}

		::System::Boolean IsLevelMax()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_ISLEVELMAX_OFFSET))(this);
		}

		::RPG::GameCore::RogueBuffCategory GetBuffCategory()
		{
			return ((::RPG::GameCore::RogueBuffCategory(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_GETBUFFCATEGORY_OFFSET))(this);
		}

		::System::Void CheckBuffStateIfGet()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_CHECKBUFFSTATEIFGET_OFFSET))(this);
		}

		::System::Void CheckBuffStateIfDrop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_CHECKBUFFSTATEIFDROP_OFFSET))(this);
		}

		::System::Void _TryInitRogueBuffRow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA__TRYINITROGUEBUFFROW_OFFSET))(this);
		}

		::System::UInt32 get_BuffID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_GET_BUFFID_OFFSET))(this);
		}

		::System::Void set_BuffID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_SET_BUFFID_OFFSET))(this, value);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_SET_LEVEL_OFFSET))(this, value);
		}

		::System::Boolean get_IsInsufficientBuff()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_GET_ISINSUFFICIENTBUFF_OFFSET))(this);
		}

		::System::Void set_IsInsufficientBuff(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_SET_ISINSUFFICIENTBUFF_OFFSET))(this, value);
		}

		::System::Boolean get_IsVeryInsufficientBuff()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_GET_ISVERYINSUFFICIENTBUFF_OFFSET))(this);
		}

		::System::Void set_IsVeryInsufficientBuff(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_SET_ISVERYINSUFFICIENTBUFF_OFFSET))(this, value);
		}

		::System::Boolean get_IsNecessaryBuff()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_GET_ISNECESSARYBUFF_OFFSET))(this);
		}

		::System::Void set_IsNecessaryBuff(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_SET_ISNECESSARYBUFF_OFFSET))(this, value);
		}

		::System::Boolean get_IsVeryNecessaryBuff()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_GET_ISVERYNECESSARYBUFF_OFFSET))(this);
		}

		::System::Void set_IsVeryNecessaryBuff(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_SET_ISVERYNECESSARYBUFF_OFFSET))(this, value);
		}

		::System::String* get_AeonCrossIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFDATA_GET_AEONCROSSICON_OFFSET))(this);
		}
	};
}
