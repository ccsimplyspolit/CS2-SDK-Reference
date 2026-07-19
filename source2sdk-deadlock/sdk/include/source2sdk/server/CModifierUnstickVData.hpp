#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadel_Modifier_StunnedVData.hpp"

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
        // Size: 0x850
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CModifierUnstickVData : public source2sdk::server::CCitadel_Modifier_StunnedVData
        {
        public:
            // metadata: MPropertyGroupName "Sounds"
            CSoundEventName m_sSuccessSound; // 0x830            
            // metadata: MPropertyGroupName "Sounds"
            CSoundEventName m_sFailureSound; // 0x840            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CModifierUnstickVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CModifierUnstickVData) == 0x850);
    };
};
