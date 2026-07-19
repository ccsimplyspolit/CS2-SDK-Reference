#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/HeroID_t.hpp"

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
        // Standard-layout class: true
        // Size: 0x38
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        class CDOTAOverworldCharacterBase
        {
        public:
            CPanoramaImageName m_sImage; // 0x0            
            CUtlString m_sClassName; // 0x10            
            Vector2D m_vSize; // 0x18            
            Vector2D m_vOffset; // 0x20            
            std::uint16_t m_unFrameWidth; // 0x28            
            std::uint16_t m_unFrameTime; // 0x2a            
            bool m_bUse3dPreview; // 0x2c            
            uint8_t _pad002d[0x3]; // 0x2d
            source2sdk::client::HeroID_t m_nPreviewHeroID; // 0x30            
            uint8_t _pad0034[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDOTAOverworldCharacterBase, m_sImage) == 0x0);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldCharacterBase, m_sClassName) == 0x10);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldCharacterBase, m_vSize) == 0x18);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldCharacterBase, m_vOffset) == 0x20);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldCharacterBase, m_unFrameWidth) == 0x28);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldCharacterBase, m_unFrameTime) == 0x2a);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldCharacterBase, m_bUse3dPreview) == 0x2c);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldCharacterBase, m_nPreviewHeroID) == 0x30);
        
        static_assert(sizeof(source2sdk::client::CDOTAOverworldCharacterBase) == 0x38);
    };
};
