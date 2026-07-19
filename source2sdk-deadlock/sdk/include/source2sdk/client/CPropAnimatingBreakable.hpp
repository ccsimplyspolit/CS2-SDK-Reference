#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBaseAnimGraph.hpp"
#include "source2sdk/client/CBreakableStageHelper.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xd08
        // Has VTable
        // 
        // static metadata: MNetworkIncludeByName "m_iMaxHealth"
        // static metadata: MNetworkIncludeByName "m_iHealth"
        #pragma pack(push, 1)
        class CPropAnimatingBreakable : public source2sdk::client::CBaseAnimGraph
        {
        public:
            source2sdk::client::CBreakableStageHelper m_stages; // 0xca8            
            source2sdk::entity2::CEntityIOOutput m_OnTakeDamage; // 0xcc0            
            source2sdk::entity2::CEntityIOOutput m_OnFinalBreak; // 0xcd8            
            source2sdk::entity2::CEntityIOOutput m_OnStageAdvanced; // 0xcf0            
            
            // Datamap fields:
            // void InputNextBreakStage; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPropAnimatingBreakable because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CPropAnimatingBreakable) == 0xd08);
    };
};
