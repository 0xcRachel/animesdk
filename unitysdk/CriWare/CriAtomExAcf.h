#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomExAcf_AcfDspBusInfo.h"
#include "unitysdk/CriWare/CriAtomExAcf_AcfDspBusLinkInfo.h"
#include "unitysdk/CriWare/CriAtomExAcf_AcfDspSettingInfo.h"
#include "unitysdk/CriWare/CriAtomExAcf_AcfDspSettingSnapshotInfo.h"
#include "unitysdk/CriWare/CriAtomExAcf_AcfInfo.h"
#include "unitysdk/CriWare/CriAtomExAcf_AisacGraphInfo.h"
#include "unitysdk/CriWare/CriAtomExAcf_AisacGraphType.h"
#include "unitysdk/CriWare/CriAtomExAcf_CategoryInfo.h"
#include "unitysdk/CriWare/CriAtomExAcf_GlobalAisacInfo.h"
#include "unitysdk/CriWare/CriAtomExAcf_SelectorInfo.h"
#include "unitysdk/CriWare/CriAtomExAcf_SelectorLabelInfo.h"
#include "unitysdk/CriWare/CriAtomEx_AisacControlInfo.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CRIWARE_CRIATOMEXACF_CRIATOMEXACF_FINDBUSNAME_OFFSET UNITYSDK_OFFSET(0x11298D40)
#define CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETACFINFOFROMACFDATA_OFFSET UNITYSDK_OFFSET(0x11299260)
#define CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETACFINFO_OFFSET UNITYSDK_OFFSET(0x11297AC0)
#define CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETAISACCONTROLIDBYNAME_OFFSET UNITYSDK_OFFSET(0x11298E10)
#define CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETAISACCONTROLINFO_OFFSET UNITYSDK_OFFSET(0x11294120)
#define CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETAISACCONTROLNAMEBYID_OFFSET UNITYSDK_OFFSET(0x11298EB0)
#define CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETCATEGORYINFOBYID_OFFSET UNITYSDK_OFFSET(0x11296900)
#define CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETCATEGORYINFOBYNAME_OFFSET UNITYSDK_OFFSET(0x11296630)
#define CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETCATEGORYINFO_OFFSET UNITYSDK_OFFSET(0x11296280)
#define CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETDSPBUSINFORMATION_OFFSET UNITYSDK_OFFSET(0x112955C0)
#define CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETDSPBUSLINKINFORMATION_OFFSET UNITYSDK_OFFSET(0x11295C40)
#define CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETDSPFXNAME_OFFSET UNITYSDK_OFFSET(0x11298FF0)
#define CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETDSPFXPARAMETERS_OFFSET UNITYSDK_OFFSET(0x112990B0)
#define CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETDSPFXTYPE_OFFSET UNITYSDK_OFFSET(0x11298F70)
#define CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETDSPSETTINGINFORMATION_OFFSET UNITYSDK_OFFSET(0x11294890)
#define CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETDSPSETTINGNAMEBYINDEXFROMACFDATA_OFFSET UNITYSDK_OFFSET(0x112945B0)
#define CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETDSPSETTINGNAMEBYINDEX_OFFSET UNITYSDK_OFFSET(0x11294480)
#define CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETDSPSETTINGSNAPSHOTINFORMATION_OFFSET UNITYSDK_OFFSET(0x11294F20)
#define CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETGLOBALAISACGRAPHINFO_OFFSET UNITYSDK_OFFSET(0x11297510)
#define CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETGLOBALAISACINFOBYNAME_OFFSET UNITYSDK_OFFSET(0x11297190)
#define CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETGLOBALAISACINFO_OFFSET UNITYSDK_OFFSET(0x11296CC0)
#define CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETGLOBALAISACVALUE_OFFSET UNITYSDK_OFFSET(0x112977F0)
#define CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETMAXBUSESOFDSPBUSSETTINGSFROMACFDATA_OFFSET UNITYSDK_OFFSET(0x11299380)
#define CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETMAXBUSESOFDSPBUSSETTINGS_OFFSET UNITYSDK_OFFSET(0x11298BF0)
#define CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETNUMAISACCONTROLS_OFFSET UNITYSDK_OFFSET(0x11293E80)
#define CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETNUMBUSESFROMACFDATA_OFFSET UNITYSDK_OFFSET(0x112992F0)
#define CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETNUMBUSES_OFFSET UNITYSDK_OFFSET(0x11298AF0)
#define CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETNUMCATEGORIESFROMACFDATA_OFFSET UNITYSDK_OFFSET(0x11299140)
#define CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETNUMCATEGORIESPERPLAYBACKFROMACFDATA_OFFSET UNITYSDK_OFFSET(0x112991D0)
#define CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETNUMCATEGORIESPERPLAYBACK_OFFSET UNITYSDK_OFFSET(0x11295FD0)
#define CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETNUMCATEGORIES_OFFSET UNITYSDK_OFFSET(0x11295ED0)
#define CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETNUMDSPSETTINGSFROMACFDATA_OFFSET UNITYSDK_OFFSET(0x11294340)
#define CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETNUMDSPSETTINGS_OFFSET UNITYSDK_OFFSET(0x11294230)
#define CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETNUMGLOBALAISACS_OFFSET UNITYSDK_OFFSET(0x11296A10)
#define CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETNUMSELECTORS_OFFSET UNITYSDK_OFFSET(0x11297E60)
#define CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETSELECTORINFOBYINDEX_OFFSET UNITYSDK_OFFSET(0x112981B0)
#define CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETSELECTORINFOBYNAME_OFFSET UNITYSDK_OFFSET(0x112985A0)
#define CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETSELECTORLABELINFO_OFFSET UNITYSDK_OFFSET(0x11298960)
#define CRIWARE_CRIATOMEXACF_FINDBUSNAME_OFFSET UNITYSDK_OFFSET(0x11298C70)
#define CRIWARE_CRIATOMEXACF_GETACFINFO_OFFSET UNITYSDK_OFFSET(0x11297890)
#define CRIWARE_CRIATOMEXACF_GETAISACCONTROLINFO_OFFSET UNITYSDK_OFFSET(0x11293F00)
#define CRIWARE_CRIATOMEXACF_GETCATEGORYINFOBYID_OFFSET UNITYSDK_OFFSET(0x112966D0)
#define CRIWARE_CRIATOMEXACF_GETCATEGORYINFOBYINDEX_OFFSET UNITYSDK_OFFSET(0x11296050)
#define CRIWARE_CRIATOMEXACF_GETCATEGORYINFOBYNAME_OFFSET UNITYSDK_OFFSET(0x112963E0)
#define CRIWARE_CRIATOMEXACF_GETDSPBUSINFORMATION_OFFSET UNITYSDK_OFFSET(0x11295370)
#define CRIWARE_CRIATOMEXACF_GETDSPBUSLINKINFORMATION_OFFSET UNITYSDK_OFFSET(0x11295A20)
#define CRIWARE_CRIATOMEXACF_GETDSPSETTINGINFORMATION_OFFSET UNITYSDK_OFFSET(0x11294640)
#define CRIWARE_CRIATOMEXACF_GETDSPSETTINGNAMEBYINDEX_1_OFFSET UNITYSDK_OFFSET(0x11294500)
#define CRIWARE_CRIATOMEXACF_GETDSPSETTINGNAMEBYINDEX_OFFSET UNITYSDK_OFFSET(0x112943D0)
#define CRIWARE_CRIATOMEXACF_GETDSPSETTINGSNAPSHOTINFORMATION_OFFSET UNITYSDK_OFFSET(0x11294CE0)
#define CRIWARE_CRIATOMEXACF_GETGLOBALAISACGRAPHINFO_OFFSET UNITYSDK_OFFSET(0x11297230)
#define CRIWARE_CRIATOMEXACF_GETGLOBALAISACINFOBYINDEX_OFFSET UNITYSDK_OFFSET(0x11296A90)
#define CRIWARE_CRIATOMEXACF_GETGLOBALAISACINFOBYNAME_OFFSET UNITYSDK_OFFSET(0x11296F40)
#define CRIWARE_CRIATOMEXACF_GETGLOBALAISACVALUE_OFFSET UNITYSDK_OFFSET(0x11297690)
#define CRIWARE_CRIATOMEXACF_GETMAXBUSESOFDSPBUSSETTINGS_OFFSET UNITYSDK_OFFSET(0x11298B70)
#define CRIWARE_CRIATOMEXACF_GETNUMAISACCONTROLS_OFFSET UNITYSDK_OFFSET(0x11293E00)
#define CRIWARE_CRIATOMEXACF_GETNUMBUSES_OFFSET UNITYSDK_OFFSET(0x11298A70)
#define CRIWARE_CRIATOMEXACF_GETNUMCATEGORIESPERPLAYBACK_OFFSET UNITYSDK_OFFSET(0x11295F50)
#define CRIWARE_CRIATOMEXACF_GETNUMCATEGORIES_OFFSET UNITYSDK_OFFSET(0x11295E50)
#define CRIWARE_CRIATOMEXACF_GETNUMDSPSETTINGS_1_OFFSET UNITYSDK_OFFSET(0x112942B0)
#define CRIWARE_CRIATOMEXACF_GETNUMDSPSETTINGS_OFFSET UNITYSDK_OFFSET(0x112941B0)
#define CRIWARE_CRIATOMEXACF_GETNUMGLOBALAISACS_OFFSET UNITYSDK_OFFSET(0x11296990)
#define CRIWARE_CRIATOMEXACF_GETNUMSELECTORS_OFFSET UNITYSDK_OFFSET(0x11297DE0)
#define CRIWARE_CRIATOMEXACF_GETSELECTORINFOBYINDEX_OFFSET UNITYSDK_OFFSET(0x11297EE0)
#define CRIWARE_CRIATOMEXACF_GETSELECTORINFOBYNAME_OFFSET UNITYSDK_OFFSET(0x112982C0)
#define CRIWARE_CRIATOMEXACF_GETSELECTORLABELINFO_OFFSET UNITYSDK_OFFSET(0x11298640)
#define CRIWARE_CRIATOMEXACF__CTOR_OFFSET UNITYSDK_OFFSET(0x11299410)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExAcf_TypeDefinitionIndex = 30173;

	class CriAtomExAcf : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF__CTOR_OFFSET))(this);
		}

		static ::System::Int32 GetNumAisacControls()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_GETNUMAISACCONTROLS_OFFSET))();
		}

		static ::System::Boolean GetAisacControlInfo(::System::UInt16 index, ::CriWare::CriAtomEx_AisacControlInfo& info)
		{
			return ((::System::Boolean(*)(::System::UInt16, ::CriWare::CriAtomEx_AisacControlInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_GETAISACCONTROLINFO_OFFSET))(index, info);
		}

		static ::System::Int32 GetNumDspSettings()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_GETNUMDSPSETTINGS_OFFSET))();
		}

		static ::System::Int32 GetNumDspSettings_1(::System::IntPtr acfData, ::System::Int32 size)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_GETNUMDSPSETTINGS_1_OFFSET))(acfData, size);
		}

		static ::System::String* GetDspSettingNameByIndex(::System::UInt16 index)
		{
			return ((::System::String*(*)(::System::UInt16))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_GETDSPSETTINGNAMEBYINDEX_OFFSET))(index);
		}

		static ::System::String* GetDspSettingNameByIndex_1(::System::IntPtr acfData, ::System::Int32 size, ::System::UInt16 index)
		{
			return ((::System::String*(*)(::System::IntPtr, ::System::Int32, ::System::UInt16))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_GETDSPSETTINGNAMEBYINDEX_1_OFFSET))(acfData, size, index);
		}

		static ::System::Boolean GetDspSettingInformation(::System::String* name, ::CriWare::CriAtomExAcf_AcfDspSettingInfo& info)
		{
			return ((::System::Boolean(*)(::System::String*, ::CriWare::CriAtomExAcf_AcfDspSettingInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_GETDSPSETTINGINFORMATION_OFFSET))(name, info);
		}

		static ::System::Boolean GetDspSettingSnapshotInformation(::System::UInt16 index, ::CriWare::CriAtomExAcf_AcfDspSettingSnapshotInfo& info)
		{
			return ((::System::Boolean(*)(::System::UInt16, ::CriWare::CriAtomExAcf_AcfDspSettingSnapshotInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_GETDSPSETTINGSNAPSHOTINFORMATION_OFFSET))(index, info);
		}

		static ::System::Boolean GetDspBusInformation(::System::UInt16 index, ::CriWare::CriAtomExAcf_AcfDspBusInfo& info)
		{
			return ((::System::Boolean(*)(::System::UInt16, ::CriWare::CriAtomExAcf_AcfDspBusInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_GETDSPBUSINFORMATION_OFFSET))(index, info);
		}

		static ::System::Boolean GetDspBusLinkInformation(::System::UInt16 index, ::CriWare::CriAtomExAcf_AcfDspBusLinkInfo& info)
		{
			return ((::System::Boolean(*)(::System::UInt16, ::CriWare::CriAtomExAcf_AcfDspBusLinkInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_GETDSPBUSLINKINFORMATION_OFFSET))(index, info);
		}

		static ::System::Int32 GetNumCategories()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_GETNUMCATEGORIES_OFFSET))();
		}

		static ::System::Int32 GetNumCategoriesPerPlayback()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_GETNUMCATEGORIESPERPLAYBACK_OFFSET))();
		}

		static ::System::Boolean GetCategoryInfoByIndex(::System::UInt16 index, ::CriWare::CriAtomExAcf_CategoryInfo& info)
		{
			return ((::System::Boolean(*)(::System::UInt16, ::CriWare::CriAtomExAcf_CategoryInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_GETCATEGORYINFOBYINDEX_OFFSET))(index, info);
		}

		static ::System::Boolean GetCategoryInfoByName(::System::String* name, ::CriWare::CriAtomExAcf_CategoryInfo& info)
		{
			return ((::System::Boolean(*)(::System::String*, ::CriWare::CriAtomExAcf_CategoryInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_GETCATEGORYINFOBYNAME_OFFSET))(name, info);
		}

		static ::System::Boolean GetCategoryInfoById(::System::UInt32 id, ::CriWare::CriAtomExAcf_CategoryInfo& info)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::CriWare::CriAtomExAcf_CategoryInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_GETCATEGORYINFOBYID_OFFSET))(id, info);
		}

		static ::System::Int32 GetNumGlobalAisacs()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_GETNUMGLOBALAISACS_OFFSET))();
		}

		static ::System::Boolean GetGlobalAisacInfoByIndex(::System::UInt16 index, ::CriWare::CriAtomExAcf_GlobalAisacInfo& info)
		{
			return ((::System::Boolean(*)(::System::UInt16, ::CriWare::CriAtomExAcf_GlobalAisacInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_GETGLOBALAISACINFOBYINDEX_OFFSET))(index, info);
		}

		static ::System::Boolean GetGlobalAisacInfoByName(::System::String* name, ::CriWare::CriAtomExAcf_GlobalAisacInfo& info)
		{
			return ((::System::Boolean(*)(::System::String*, ::CriWare::CriAtomExAcf_GlobalAisacInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_GETGLOBALAISACINFOBYNAME_OFFSET))(name, info);
		}

		static ::System::Boolean GetGlobalAisacGraphInfo(::CriWare::CriAtomExAcf_GlobalAisacInfo aisacInfo, ::System::UInt16 graphIndex, ::CriWare::CriAtomExAcf_AisacGraphInfo& graphInfo)
		{
			return ((::System::Boolean(*)(::CriWare::CriAtomExAcf_GlobalAisacInfo, ::System::UInt16, ::CriWare::CriAtomExAcf_AisacGraphInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_GETGLOBALAISACGRAPHINFO_OFFSET))(aisacInfo, graphIndex, graphInfo);
		}

		static ::System::Boolean GetGlobalAisacValue(::CriWare::CriAtomExAcf_GlobalAisacInfo aisacInfo, ::System::Single control, ::CriWare::CriAtomExAcf_AisacGraphType type, ::System::Single& value)
		{
			return ((::System::Boolean(*)(::CriWare::CriAtomExAcf_GlobalAisacInfo, ::System::Single, ::CriWare::CriAtomExAcf_AisacGraphType, ::System::Single&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_GETGLOBALAISACVALUE_OFFSET))(aisacInfo, control, type, value);
		}

		static ::System::Boolean GetAcfInfo(::CriWare::CriAtomExAcf_AcfInfo& acfInfo)
		{
			return ((::System::Boolean(*)(::CriWare::CriAtomExAcf_AcfInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_GETACFINFO_OFFSET))(acfInfo);
		}

		static ::System::Int32 GetNumSelectors()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_GETNUMSELECTORS_OFFSET))();
		}

		static ::System::Boolean GetSelectorInfoByIndex(::System::UInt16 index, ::CriWare::CriAtomExAcf_SelectorInfo& info)
		{
			return ((::System::Boolean(*)(::System::UInt16, ::CriWare::CriAtomExAcf_SelectorInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_GETSELECTORINFOBYINDEX_OFFSET))(index, info);
		}

		static ::System::Boolean GetSelectorInfoByName(::System::String* name, ::CriWare::CriAtomExAcf_SelectorInfo& info)
		{
			return ((::System::Boolean(*)(::System::String*, ::CriWare::CriAtomExAcf_SelectorInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_GETSELECTORINFOBYNAME_OFFSET))(name, info);
		}

		static ::System::Boolean GetSelectorLabelInfo(::CriWare::CriAtomExAcf_SelectorInfo selectorInfo, ::System::UInt16 labelIndex, ::CriWare::CriAtomExAcf_SelectorLabelInfo& info)
		{
			return ((::System::Boolean(*)(::CriWare::CriAtomExAcf_SelectorInfo, ::System::UInt16, ::CriWare::CriAtomExAcf_SelectorLabelInfo&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_GETSELECTORLABELINFO_OFFSET))(selectorInfo, labelIndex, info);
		}

		static ::System::Int32 GetNumBuses()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_GETNUMBUSES_OFFSET))();
		}

		static ::System::Int32 GetMaxBusesOfDspBusSettings()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_GETMAXBUSESOFDSPBUSSETTINGS_OFFSET))();
		}

		static ::System::String* FindBusName(::System::String* busName)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_FINDBUSNAME_OFFSET))(busName);
		}

		static ::System::Int32 criAtomExAcf_GetNumAisacControls()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETNUMAISACCONTROLS_OFFSET))();
		}

		static ::System::Boolean criAtomExAcf_GetAisacControlInfo(::System::UInt16 index, ::System::IntPtr info)
		{
			return ((::System::Boolean(*)(::System::UInt16, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETAISACCONTROLINFO_OFFSET))(index, info);
		}

		static ::System::UInt32 criAtomExAcf_GetAisacControlIdByName(::System::String* name)
		{
			return ((::System::UInt32(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETAISACCONTROLIDBYNAME_OFFSET))(name);
		}

		static ::System::String* criAtomExAcf_GetAisacControlNameById(::System::UInt32 id)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETAISACCONTROLNAMEBYID_OFFSET))(id);
		}

		static ::System::Int32 criAtomExAcf_GetNumDspSettings()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETNUMDSPSETTINGS_OFFSET))();
		}

		static ::System::Int32 criAtomExAcf_GetNumDspSettingsFromAcfData(::System::IntPtr acf_data, ::System::Int32 acf_data_size)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETNUMDSPSETTINGSFROMACFDATA_OFFSET))(acf_data, acf_data_size);
		}

		static ::System::IntPtr criAtomExAcf_GetDspSettingNameByIndex(::System::UInt16 index)
		{
			return ((::System::IntPtr(*)(::System::UInt16))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETDSPSETTINGNAMEBYINDEX_OFFSET))(index);
		}

		static ::System::IntPtr criAtomExAcf_GetDspSettingNameByIndexFromAcfData(::System::IntPtr acf_data, ::System::Int32 acf_data_size, ::System::UInt16 index)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::Int32, ::System::UInt16))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETDSPSETTINGNAMEBYINDEXFROMACFDATA_OFFSET))(acf_data, acf_data_size, index);
		}

		static ::System::Boolean criAtomExAcf_GetDspSettingInformation(::System::String* name, ::System::IntPtr info)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETDSPSETTINGINFORMATION_OFFSET))(name, info);
		}

		static ::System::Boolean criAtomExAcf_GetDspSettingSnapshotInformation(::System::UInt16 index, ::System::IntPtr info)
		{
			return ((::System::Boolean(*)(::System::UInt16, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETDSPSETTINGSNAPSHOTINFORMATION_OFFSET))(index, info);
		}

		static ::System::Boolean criAtomExAcf_GetDspBusInformation(::System::UInt16 index, ::System::IntPtr info)
		{
			return ((::System::Boolean(*)(::System::UInt16, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETDSPBUSINFORMATION_OFFSET))(index, info);
		}

		static ::System::Int32 criAtomExAcf_GetDspFxType(::System::UInt16 index)
		{
			return ((::System::Int32(*)(::System::UInt16))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETDSPFXTYPE_OFFSET))(index);
		}

		static ::System::String* criAtomExAcf_GetDspFxName(::System::UInt16 index)
		{
			return ((::System::String*(*)(::System::UInt16))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETDSPFXNAME_OFFSET))(index);
		}

		static ::System::Boolean criAtomExAcf_GetDspFxParameters(::System::UInt16 index, ::System::IntPtr parameters, ::System::Int32 size)
		{
			return ((::System::Boolean(*)(::System::UInt16, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETDSPFXPARAMETERS_OFFSET))(index, parameters, size);
		}

		static ::System::Boolean criAtomExAcf_GetDspBusLinkInformation(::System::UInt16 index, ::System::IntPtr info)
		{
			return ((::System::Boolean(*)(::System::UInt16, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETDSPBUSLINKINFORMATION_OFFSET))(index, info);
		}

		static ::System::Int32 criAtomExAcf_GetNumCategoriesFromAcfData(::System::IntPtr acf_data, ::System::Int32 acf_data_size)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETNUMCATEGORIESFROMACFDATA_OFFSET))(acf_data, acf_data_size);
		}

		static ::System::Int32 criAtomExAcf_GetNumCategories()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETNUMCATEGORIES_OFFSET))();
		}

		static ::System::Int32 criAtomExAcf_GetNumCategoriesPerPlaybackFromAcfData(::System::IntPtr acf_data, ::System::Int32 acf_data_size)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETNUMCATEGORIESPERPLAYBACKFROMACFDATA_OFFSET))(acf_data, acf_data_size);
		}

		static ::System::Int32 criAtomExAcf_GetNumCategoriesPerPlayback()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETNUMCATEGORIESPERPLAYBACK_OFFSET))();
		}

		static ::System::Boolean criAtomExAcf_GetCategoryInfo(::System::UInt16 index, ::System::IntPtr info)
		{
			return ((::System::Boolean(*)(::System::UInt16, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETCATEGORYINFO_OFFSET))(index, info);
		}

		static ::System::Boolean criAtomExAcf_GetCategoryInfoByName(::System::String* name, ::System::IntPtr info)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETCATEGORYINFOBYNAME_OFFSET))(name, info);
		}

		static ::System::Boolean criAtomExAcf_GetCategoryInfoById(::System::UInt32 id, ::System::IntPtr info)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETCATEGORYINFOBYID_OFFSET))(id, info);
		}

		static ::System::Int32 criAtomExAcf_GetNumGlobalAisacs()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETNUMGLOBALAISACS_OFFSET))();
		}

		static ::System::Boolean criAtomExAcf_GetGlobalAisacInfo(::System::UInt16 index, ::System::IntPtr info)
		{
			return ((::System::Boolean(*)(::System::UInt16, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETGLOBALAISACINFO_OFFSET))(index, info);
		}

		static ::System::Boolean criAtomExAcf_GetGlobalAisacInfoByName(::System::String* name, ::System::IntPtr info)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETGLOBALAISACINFOBYNAME_OFFSET))(name, info);
		}

		static ::System::Boolean criAtomExAcf_GetGlobalAisacGraphInfo(::System::IntPtr aisac_info, ::System::UInt16 graph_index, ::System::IntPtr graph_info)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::UInt16, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETGLOBALAISACGRAPHINFO_OFFSET))(aisac_info, graph_index, graph_info);
		}

		static ::System::Boolean criAtomExAcf_GetGlobalAisacValue(::System::IntPtr aisac_info, ::System::Single control, ::CriWare::CriAtomExAcf_AisacGraphType type, ::System::Single& value)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Single, ::CriWare::CriAtomExAcf_AisacGraphType, ::System::Single&))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETGLOBALAISACVALUE_OFFSET))(aisac_info, control, type, value);
		}

		static ::System::Boolean criAtomExAcf_GetAcfInfo(::System::IntPtr acf_info)
		{
			return ((::System::Boolean(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETACFINFO_OFFSET))(acf_info);
		}

		static ::System::Boolean criAtomExAcf_GetAcfInfoFromAcfData(::System::IntPtr acf_data, ::System::Int32 acf_data_size, ::System::IntPtr acf_info)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::Int32, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETACFINFOFROMACFDATA_OFFSET))(acf_data, acf_data_size, acf_info);
		}

		static ::System::Int32 criAtomExAcf_GetNumSelectors()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETNUMSELECTORS_OFFSET))();
		}

		static ::System::Boolean criAtomExAcf_GetSelectorInfoByIndex(::System::UInt16 index, ::System::IntPtr info)
		{
			return ((::System::Boolean(*)(::System::UInt16, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETSELECTORINFOBYINDEX_OFFSET))(index, info);
		}

		static ::System::Boolean criAtomExAcf_GetSelectorInfoByName(::System::String* name, ::System::IntPtr info)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETSELECTORINFOBYNAME_OFFSET))(name, info);
		}

		static ::System::Boolean criAtomExAcf_GetSelectorLabelInfo(::System::IntPtr selector_info, ::System::UInt16 label_index, ::System::IntPtr info)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::UInt16, ::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETSELECTORLABELINFO_OFFSET))(selector_info, label_index, info);
		}

		static ::System::Int32 criAtomExAcf_GetNumBusesFromAcfData(::System::IntPtr acf_data, ::System::Int32 acf_data_size)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETNUMBUSESFROMACFDATA_OFFSET))(acf_data, acf_data_size);
		}

		static ::System::Int32 criAtomExAcf_GetNumBuses()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETNUMBUSES_OFFSET))();
		}

		static ::System::Int32 criAtomExAcf_GetMaxBusesOfDspBusSettingsFromAcfData(::System::IntPtr acf_data, ::System::Int32 acf_data_size)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETMAXBUSESOFDSPBUSSETTINGSFROMACFDATA_OFFSET))(acf_data, acf_data_size);
		}

		static ::System::Int32 criAtomExAcf_GetMaxBusesOfDspBusSettings()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_CRIATOMEXACF_GETMAXBUSESOFDSPBUSSETTINGS_OFFSET))();
		}

		static ::System::String* criAtomExAcf_FindBusName(::System::String* bus_name)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXACF_CRIATOMEXACF_FINDBUSNAME_OFFSET))(bus_name);
		}
	};
}
