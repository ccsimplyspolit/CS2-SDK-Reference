#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CCitadelBaseAbility.hpp"

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
        // Size: 0x13d0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bAirCast"
        #pragma pack(push, 1)
        class CCitadel_Ability_Tokamak_CrimsonCannon : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            uint8_t _pad0f70[0x20]; // 0xf70
            // m_TargetPreviews has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::ParticleIndex_t> m_TargetPreviews;
            char m_TargetPreviews[0x18]; // 0xf90            
            // metadata: MNetworkEnable
            bool m_bAirCast; // 0xfa8            
            uint8_t _pad0fa9[0x427];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Tokamak_CrimsonCannon because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Tokamak_CrimsonCannon) == 0x13d0);
    };
};
