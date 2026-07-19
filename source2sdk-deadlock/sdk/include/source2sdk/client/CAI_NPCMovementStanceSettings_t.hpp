#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CAI_MovementGaitSettings.hpp"
#include "source2sdk/client/CAI_OptionalMovementGaitSettings.hpp"

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
        // Size: 0x308
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct CAI_NPCMovementStanceSettings_t
        {
        public:
            // metadata: MPropertySuppressExpr "m_bEnabled == false"
            source2sdk::client::CAI_MovementGaitSettings m_slow; // 0x0            
            // metadata: MPropertySuppressExpr "m_bEnabled == false"
            source2sdk::client::CAI_OptionalMovementGaitSettings m_medium; // 0xc0            
            // metadata: MPropertySuppressExpr "m_bEnabled == false"
            source2sdk::client::CAI_OptionalMovementGaitSettings m_fast; // 0x180            
            // metadata: MPropertySuppressExpr "m_bEnabled == false"
            source2sdk::client::CAI_OptionalMovementGaitSettings m_veryFast; // 0x240            
            // metadata: MPropertyFlattenIntoParentRow
            bool m_bEnabled; // 0x300            
            uint8_t _pad0301[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAI_NPCMovementStanceSettings_t because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CAI_NPCMovementStanceSettings_t) == 0x308);
    };
};
