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
        // Size: 0xac0
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
            char m_hDecalMaterial[0x8]; // 0xa88            
            float m_flWidth; // 0xa90            
            float m_flHeight; // 0xa94            
            float m_flDepth; // 0xa98            
            std::uint32_t m_nRenderOrder; // 0xa9c            
            bool m_bProjectOnWorld; // 0xaa0            
            bool m_bProjectOnCharacters; // 0xaa1            
            bool m_bProjectOnWater; // 0xaa2            
            uint8_t _pad0aa3[0x1]; // 0xaa3
            float m_flDepthSortBias; // 0xaa4            
            uint8_t _pad0aa8[0x18];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_EnvDecal because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_EnvDecal) == 0xac0);
    };
};
