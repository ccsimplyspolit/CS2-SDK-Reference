#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x148
        // Has VTable
        // MNetworkNoBase
        #pragma pack(push, 1)
        class CSpeechBubbleInfo
        {
        public:
            uint8_t _pad0000[0x30]; // 0x0
            char m_LocalizationStr[256]; // 0x30            
            // m_hNPC has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hNPC;
            char m_hNPC[0x4]; // 0x130            
            source2sdk::entity2::GameTime_t m_flStartTime; // 0x134            
            float m_flDuration; // 0x138            
            std::uint32_t m_unOffsetX; // 0x13c            
            std::uint32_t m_unOffsetY; // 0x140            
            std::uint16_t m_unCount; // 0x144            
            uint8_t _pad0146[0x2];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CSpeechBubbleInfo, m_LocalizationStr) == 0x30);
        static_assert(offsetof(source2sdk::server::CSpeechBubbleInfo, m_hNPC) == 0x130);
        static_assert(offsetof(source2sdk::server::CSpeechBubbleInfo, m_flStartTime) == 0x134);
        static_assert(offsetof(source2sdk::server::CSpeechBubbleInfo, m_flDuration) == 0x138);
        static_assert(offsetof(source2sdk::server::CSpeechBubbleInfo, m_unOffsetX) == 0x13c);
        static_assert(offsetof(source2sdk::server::CSpeechBubbleInfo, m_unOffsetY) == 0x140);
        static_assert(offsetof(source2sdk::server::CSpeechBubbleInfo, m_unCount) == 0x144);
        
        static_assert(sizeof(source2sdk::server::CSpeechBubbleInfo) == 0x148);
    };
};
