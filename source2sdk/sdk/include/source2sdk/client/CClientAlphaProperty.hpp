#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/IClientAlphaProperty.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x30
        // Has VTable
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CClientAlphaProperty : public source2sdk::client::IClientAlphaProperty
        {
        public:
            uint8_t _pad0008[0x8]; // 0x8
            std::uint16_t m_nDistFadeStart; // 0x10            
            std::uint16_t m_nDistFadeEnd; // 0x12            
            // start of bitfield block
            // bitfield m_nDesyncOffset : 14 bit(s)
            // bitfield m_bAlphaOverride : 1 bit(s)
            // bitfield m_bShadowAlphaOverride : 1 bit(s)
            // bitfield m_nRenderMode : 3 bit(s)
            // bitfield m_nRenderFX : 5 bit(s)
            uint8_t _bitfield0014[0x3];
            // end of bitfield block// 24 bits
            std::uint8_t m_nAlpha; // 0x17            
            float m_flFadeScale; // 0x18            
            source2sdk::entity2::GameTime_t m_flRenderFxStartTime; // 0x1c            
            float m_flRenderFxDuration; // 0x20            
            uint8_t _pad0024[0xc];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CClientAlphaProperty because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CClientAlphaProperty) == 0x30);
    };
};
