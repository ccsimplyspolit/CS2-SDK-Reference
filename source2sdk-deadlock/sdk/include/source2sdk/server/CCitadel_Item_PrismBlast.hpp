#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelAbilityBeam_t.hpp"
#include "source2sdk/server/CCitadel_Item_Bubble.hpp"

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
        // Size: 0x6160
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CCitadelAbilityBeam_t m_beam00"
        // static metadata: MNetworkVarNames "CCitadelAbilityBeam_t m_beam01"
        // static metadata: MNetworkVarNames "CCitadelAbilityBeam_t m_beam02"
        // static metadata: MNetworkVarNames "CCitadelAbilityBeam_t m_beam03"
        // static metadata: MNetworkVarNames "CCitadelAbilityBeam_t m_beam04"
        #pragma pack(push, 1)
        class CCitadel_Item_PrismBlast : public source2sdk::server::CCitadel_Item_Bubble
        {
        public:
            uint8_t _pad1100[0x1a0]; // 0x1100
            // metadata: MNetworkEnable
            source2sdk::server::CCitadelAbilityBeam_t m_beam00; // 0x12a0            
            // metadata: MNetworkEnable
            source2sdk::server::CCitadelAbilityBeam_t m_beam01; // 0x2260            
            // metadata: MNetworkEnable
            source2sdk::server::CCitadelAbilityBeam_t m_beam02; // 0x3220            
            // metadata: MNetworkEnable
            source2sdk::server::CCitadelAbilityBeam_t m_beam03; // 0x41e0            
            // metadata: MNetworkEnable
            source2sdk::server::CCitadelAbilityBeam_t m_beam04; // 0x51a0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Item_PrismBlast because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Item_PrismBlast) == 0x6160);
    };
};
