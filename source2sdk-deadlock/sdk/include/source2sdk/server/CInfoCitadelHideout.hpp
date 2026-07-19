#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CPointEntity.hpp"

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
        // Size: 0x4d0
        // Has VTable
        #pragma pack(push, 1)
        class CInfoCitadelHideout : public source2sdk::server::CPointEntity
        {
        public:
            source2sdk::entity2::CEntityIOOutput m_OnFastCooldownsEnabled; // 0x4a0            
            source2sdk::entity2::CEntityIOOutput m_OnFastCooldownsDisabled; // 0x4b8            
            
            // Datamap fields:
            // void InputToggleFastCooldowns; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CInfoCitadelHideout because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CInfoCitadelHideout) == 0x4d0);
    };
};
