#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
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
        // Size: 0xc8
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAI_CustomMovementGaitSettings : public source2sdk::client::CAI_OptionalMovementGaitSettings
        {
        public:
            // metadata: MPropertyFlattenIntoParentRow
            CGlobalSymbol m_sGaitId; // 0xc0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAI_CustomMovementGaitSettings because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CAI_CustomMovementGaitSettings) == 0xc8);
    };
};
