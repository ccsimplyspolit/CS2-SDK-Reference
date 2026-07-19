#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeIMaterial2.hpp"
#include "source2sdk/server/CBaseModelEntity.hpp"

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
        // Size: 0x790
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        #pragma pack(push, 1)
        class CEnvDecal : public source2sdk::server::CBaseModelEntity
        {
        public:
            // m_hDecalMaterial has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIMaterial2> m_hDecalMaterial;
            char m_hDecalMaterial[0x8]; // 0x770            
            float m_flWidth; // 0x778            
            float m_flHeight; // 0x77c            
            float m_flDepth; // 0x780            
            std::uint32_t m_nRenderOrder; // 0x784            
            bool m_bProjectOnWorld; // 0x788            
            bool m_bProjectOnCharacters; // 0x789            
            bool m_bProjectOnWater; // 0x78a            
            uint8_t _pad078b[0x1]; // 0x78b
            float m_flDepthSortBias; // 0x78c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CEnvDecal because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CEnvDecal) == 0x790);
    };
};
