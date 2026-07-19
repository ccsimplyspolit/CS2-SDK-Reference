#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CrosshairSpreadIndicatingElement.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x44
        // Has Trivial Destructor
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct CustomCrosshairSettings_t
        {
        public:
            std::int32_t m_nPipWidth; // 0x0            
            std::int32_t m_nPipHeight; // 0x4            
            std::int32_t m_nPipOutlineWidth; // 0x8            
            std::int32_t m_nPipOutlineGap; // 0xc            
            float m_flPipOpacity; // 0x10            
            float m_flPipOutlineOpacity; // 0x14            
            Color m_PipColor; // 0x18            
            Color m_PipOutlineColor; // 0x1c            
            std::int32_t m_nDotRadius; // 0x20            
            std::int32_t m_nDotOutlineWidth; // 0x24            
            std::int32_t m_nDotOutlineGap; // 0x28            
            float m_flDotOpacity; // 0x2c            
            float m_flDotOutlineOpacity; // 0x30            
            Color m_DotColor; // 0x34            
            Color m_DotOutlineColor; // 0x38            
            source2sdk::client::CrosshairSpreadIndicatingElement m_SpreadIndicatingElement; // 0x3c            
            float m_flBaseSpread; // 0x40            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CustomCrosshairSettings_t, m_nPipWidth) == 0x0);
        static_assert(offsetof(source2sdk::client::CustomCrosshairSettings_t, m_nPipHeight) == 0x4);
        static_assert(offsetof(source2sdk::client::CustomCrosshairSettings_t, m_nPipOutlineWidth) == 0x8);
        static_assert(offsetof(source2sdk::client::CustomCrosshairSettings_t, m_nPipOutlineGap) == 0xc);
        static_assert(offsetof(source2sdk::client::CustomCrosshairSettings_t, m_flPipOpacity) == 0x10);
        static_assert(offsetof(source2sdk::client::CustomCrosshairSettings_t, m_flPipOutlineOpacity) == 0x14);
        static_assert(offsetof(source2sdk::client::CustomCrosshairSettings_t, m_PipColor) == 0x18);
        static_assert(offsetof(source2sdk::client::CustomCrosshairSettings_t, m_PipOutlineColor) == 0x1c);
        static_assert(offsetof(source2sdk::client::CustomCrosshairSettings_t, m_nDotRadius) == 0x20);
        static_assert(offsetof(source2sdk::client::CustomCrosshairSettings_t, m_nDotOutlineWidth) == 0x24);
        static_assert(offsetof(source2sdk::client::CustomCrosshairSettings_t, m_nDotOutlineGap) == 0x28);
        static_assert(offsetof(source2sdk::client::CustomCrosshairSettings_t, m_flDotOpacity) == 0x2c);
        static_assert(offsetof(source2sdk::client::CustomCrosshairSettings_t, m_flDotOutlineOpacity) == 0x30);
        static_assert(offsetof(source2sdk::client::CustomCrosshairSettings_t, m_DotColor) == 0x34);
        static_assert(offsetof(source2sdk::client::CustomCrosshairSettings_t, m_DotOutlineColor) == 0x38);
        static_assert(offsetof(source2sdk::client::CustomCrosshairSettings_t, m_SpreadIndicatingElement) == 0x3c);
        static_assert(offsetof(source2sdk::client::CustomCrosshairSettings_t, m_flBaseSpread) == 0x40);
        
        static_assert(sizeof(source2sdk::client::CustomCrosshairSettings_t) == 0x44);
    };
};
