#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelAbilityBeam_t.hpp"
#include "source2sdk/client/CCitadel_Item_Bubble.hpp"

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
        // Size: 0x6910
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CCitadelAbilityBeam_t m_beam00"
        // static metadata: MNetworkVarNames "CCitadelAbilityBeam_t m_beam01"
        // static metadata: MNetworkVarNames "CCitadelAbilityBeam_t m_beam02"
        // static metadata: MNetworkVarNames "CCitadelAbilityBeam_t m_beam03"
        // static metadata: MNetworkVarNames "CCitadelAbilityBeam_t m_beam04"
        #pragma pack(push, 1)
        class CCitadel_Item_PrismBlast : public source2sdk::client::CCitadel_Item_Bubble
        {
        public:
            uint8_t _pad1360[0x1a0]; // 0x1360
            // metadata: MNetworkEnable
            source2sdk::client::CCitadelAbilityBeam_t m_beam00; // 0x1500            
            // metadata: MNetworkEnable
            source2sdk::client::CCitadelAbilityBeam_t m_beam01; // 0x25d0            
            // metadata: MNetworkEnable
            source2sdk::client::CCitadelAbilityBeam_t m_beam02; // 0x36a0            
            // metadata: MNetworkEnable
            source2sdk::client::CCitadelAbilityBeam_t m_beam03; // 0x4770            
            // metadata: MNetworkEnable
            source2sdk::client::CCitadelAbilityBeam_t m_beam04; // 0x5840            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Item_PrismBlast because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Item_PrismBlast) == 0x6910);
    };
};
