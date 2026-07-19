#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelModifierVData.hpp"

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
        // Size: 0x758
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Modifier_RootVData : public source2sdk::server::CCitadelModifierVData
        {
        public:
            bool m_bStopMovementXY; // 0x750            
            bool m_bStopMovementPosZ; // 0x751            
            uint8_t _pad0752[0x6];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_RootVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_RootVData) == 0x758);
    };
};
