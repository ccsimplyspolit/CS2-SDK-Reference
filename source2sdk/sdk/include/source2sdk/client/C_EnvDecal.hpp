#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseModelEntity.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIMaterial2.hpp"

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
        // Size: 0xfe8
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        #pragma pack(push, 1)
        class C_EnvDecal : public source2sdk::client::C_BaseModelEntity
        {
        public:
            // m_hDecalMaterial has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIMaterial2> m_hDecalMaterial;
            char m_hDecalMaterial[0x8]; // 0xfb0            
            float m_flWidth; // 0xfb8            
            float m_flHeight; // 0xfbc            
            float m_flDepth; // 0xfc0            
            std::uint32_t m_nRenderOrder; // 0xfc4            
            bool m_bProjectOnWorld; // 0xfc8            
            bool m_bProjectOnCharacters; // 0xfc9            
            bool m_bProjectOnWater; // 0xfca            
            uint8_t _pad0fcb[0x1]; // 0xfcb
            float m_flDepthSortBias; // 0xfcc            
            uint8_t _pad0fd0[0x18];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_EnvDecal because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_EnvDecal) == 0xfe8);
    };
};
