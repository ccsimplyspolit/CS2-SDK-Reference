#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/pulse_runtime_lib/CPulse_OutflowConnection.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCChoreoSceneResource.hpp"
#include "source2sdk/server/CPulseCell_Outflow_PlaySceneBase.hpp"
#include "source2sdk/server/CPulseCell_Outflow_PlayVCD_VCDRequirementInfo_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1a0
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CPulseCell_Outflow_PlayVCD : public source2sdk::server::CPulseCell_Outflow_PlaySceneBase
        {
        public:
            // m_hChoreoScene has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCChoreoSceneResource> m_hChoreoScene;
            char m_hChoreoScene[0x8]; // 0xf0            
            source2sdk::pulse_runtime_lib::CPulse_OutflowConnection m_OnPaused; // 0xf8            
            source2sdk::pulse_runtime_lib::CPulse_OutflowConnection m_OnResumed; // 0x140            
            // m_OutRequirements has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::CPulseCell_Outflow_PlayVCD_VCDRequirementInfo_t> m_OutRequirements;
            char m_OutRequirements[0x18]; // 0x188            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPulseCell_Outflow_PlayVCD because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPulseCell_Outflow_PlayVCD) == 0x1a0);
    };
};
