#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_9F894095DD9D92C8_MODULECUSTOMDATA_GET_CUSTOMUVTILLING_OFFSET UNITYSDK_OFFSET(0x145C750)

inline static constexpr unsigned int Class_1_9F894095DD9D92C8_ModuleCustomData_TypeDefinitionIndex = 38637;

struct alignas(4) Class_1_9F894095DD9D92C8_ModuleCustomData
{
	::System::Boolean IfEnableDeform; // 0x10
	::System::Boolean IfEnableStretch; // 0x11
	::System::Boolean IfFixU; // 0x12
	::System::Boolean IfFixV; // 0x13
	::System::Boolean IfForceUpNormal; // 0x14
	::System::Boolean IfUseCustomScale; // 0x15
	::UnityEngine::Vector3 CustomScale; // 0x18
	::System::Boolean IfUseCustomTransform; // 0x24
	::UnityEngine::Vector3 CustomTransform; // 0x28
	::System::Boolean IfUseCustomColor; // 0x34
	::UnityEngine::Color CustomColor; // 0x38
	::System::Int32 CustomAtlasID; // 0x48
	::System::Single VertexOffsetXZ1; // 0x4C
	::System::Single VertexOffsetXZ2; // 0x50
	::System::Single VertexOffsetYZ1; // 0x54
	::System::Single VertexOffsetYZ2; // 0x58
	::System::Single VertexOffsetXY1; // 0x5C
	::System::Single VertexOffsetYX1; // 0x60
	::System::Single VertexOffsetZY2; // 0x64
	::System::Single UVOffset; // 0x68

	/*
	::UnityEngine::Vector2 get_CustomUVTilling()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F894095DD9D92C8_MODULECUSTOMDATA_GET_CUSTOMUVTILLING_OFFSET))(this);
	}
	*/
};
