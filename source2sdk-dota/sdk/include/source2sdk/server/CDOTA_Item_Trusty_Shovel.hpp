#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CDOTA_Item.hpp"

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
        // Size: 0x670
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Item_Trusty_Shovel : public source2sdk::server::CDOTA_Item
        {
        public:
            VectorWS m_vChannelPos; // 0x658            
            bool m_bIsUnderwater; // 0x664            
            uint8_t _pad0665[0x3]; // 0x665
            source2sdk::client::ParticleIndex_t m_nPhaseStartFXIndex; // 0x668            
            uint8_t _pad066c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Item_Trusty_Shovel because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Item_Trusty_Shovel) == 0x670);
    };
};
