#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTABaseAbility.hpp"

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
        // Size: 0x5a0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_ShadowShaman_Serpentine : public source2sdk::server::CDOTABaseAbility
        {
        public:
            std::int32_t length; // 0x580            
            std::int32_t count; // 0x584            
            VectorWS m_vStartPosition; // 0x588            
            VectorWS m_vEndPosition; // 0x594            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_ShadowShaman_Serpentine because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_ShadowShaman_Serpentine) == 0x5a0);
    };
};
