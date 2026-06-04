#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_331;
class Class_1_B1BC6A4125A00322;
class Class_2_6A75EA4A76790B33;
namespace RPG { template <typename T> class PoolList_1; }

#define CLASS_2_6A75EA4A76790B33___C__DISPLAYCLASS59_0__CTOR_OFFSET UNITYSDK_OFFSET(0x158A2570)
#define CLASS_2_6A75EA4A76790B33___C__DISPLAYCLASS59_0__PRELOADPROPERTYRESOURCES1_B__0_OFFSET UNITYSDK_OFFSET(0x158A5F90)
#define CLASS_2_6A75EA4A76790B33___C__DISPLAYCLASS59_0__PRELOADPROPERTYRESOURCES1_B__1_OFFSET UNITYSDK_OFFSET(0x158A6270)
#define CLASS_2_6A75EA4A76790B33___C__DISPLAYCLASS59_0__PRELOADPROPERTYRESOURCES1_B__2_OFFSET UNITYSDK_OFFSET(0x158A63B0)

inline static constexpr unsigned int Class_2_6A75EA4A76790B33___c__DisplayClass59_0_TypeDefinitionIndex = 46613;

class Class_2_6A75EA4A76790B33___c__DisplayClass59_0 : public ::System::Object
{
public:
	::Class_2_6A75EA4A76790B33* __4__this; // 0x10
	::Class_0_16E4307DCC419505_331* allHandle; // 0x18
	::Class_1_B1BC6A4125A00322* asyncResLoadingHandle; // 0x20
	::RPG::PoolList_1<::Class_0_16E4307DCC419505_331*>* preloadedHandles; // 0x28
	::System::Int32 h; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33___C__DISPLAYCLASS59_0__CTOR_OFFSET))(this);
	}

	::System::Void _PreloadPropertyResources1_b__0(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33___C__DISPLAYCLASS59_0__PRELOADPROPERTYRESOURCES1_B__0_OFFSET))(this, a1);
	}

	::System::Void _PreloadPropertyResources1_b__1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33___C__DISPLAYCLASS59_0__PRELOADPROPERTYRESOURCES1_B__1_OFFSET))(this);
	}

	::System::Void _PreloadPropertyResources1_b__2(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6A75EA4A76790B33___C__DISPLAYCLASS59_0__PRELOADPROPERTYRESOURCES1_B__2_OFFSET))(this, a1);
	}
};
