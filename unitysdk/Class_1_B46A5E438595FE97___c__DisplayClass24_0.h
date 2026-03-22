#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_B46A5E438595FE97___C__DISPLAYCLASS24_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15F41E50)
#define CLASS_1_B46A5E438595FE97___C__DISPLAYCLASS24_0__FINDPATHFINDLOCKTARGETFORREACHABLEPICKUPITEMINCYLINDER_B__0_OFFSET UNITYSDK_OFFSET(0x15F42A40)

inline static constexpr unsigned int Class_1_B46A5E438595FE97___c__DisplayClass24_0_TypeDefinitionIndex = 28052;

class Class_1_B46A5E438595FE97___c__DisplayClass24_0 : public ::System::Object
{
public:
	::System::Int32 searchStartZ; // 0x10
	::System::Int32 searchEndX; // 0x14
	::System::Int32 searchStartX; // 0x18
	::System::Int32 searchEndZ; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B46A5E438595FE97___C__DISPLAYCLASS24_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _FindPathFindLockTargetForReachablePickupItemInCylinder_b__0(::System::Int32 x, ::System::Int32 z)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B46A5E438595FE97___C__DISPLAYCLASS24_0__FINDPATHFINDLOCKTARGETFORREACHABLEPICKUPITEMINCYLINDER_B__0_OFFSET))(this, x, z);
	}
};
