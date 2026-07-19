#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
namespace source2sdk
{
    namespace server
    {
        struct CCSPlayerController;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CCSPlayerPawn;
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
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x100
        // Has VTable
        // Is Abstract
        #pragma pack(push, 1)
        class CBot
        {
        public:
            uint8_t _pad0000[0x10]; // 0x0
            source2sdk::server::CCSPlayerController* m_pController; // 0x10            
            source2sdk::server::CCSPlayerPawn* m_pPlayer; // 0x18            
            bool m_bHasSpawned; // 0x20            
            uint8_t _pad0021[0x3]; // 0x21
            std::uint32_t m_id; // 0x24            
            uint8_t _pad0028[0x98]; // 0x28
            bool m_isRunning; // 0xc0            
            bool m_isCrouching; // 0xc1            
            uint8_t _pad00c2[0x2]; // 0xc2
            float m_forwardSpeed; // 0xc4            
            float m_leftSpeed; // 0xc8            
            float m_verticalSpeed; // 0xcc            
            std::uint64_t m_buttonFlags; // 0xd0            
            float m_jumpTimestamp; // 0xd8            
            Vector m_viewForward; // 0xdc            
            uint8_t _pad00e8[0x10]; // 0xe8
            std::int32_t m_postureStackIndex; // 0xf8            
            uint8_t _pad00fc[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CBot, m_pController) == 0x10);
        static_assert(offsetof(source2sdk::server::CBot, m_pPlayer) == 0x18);
        static_assert(offsetof(source2sdk::server::CBot, m_bHasSpawned) == 0x20);
        static_assert(offsetof(source2sdk::server::CBot, m_id) == 0x24);
        static_assert(offsetof(source2sdk::server::CBot, m_isRunning) == 0xc0);
        static_assert(offsetof(source2sdk::server::CBot, m_isCrouching) == 0xc1);
        static_assert(offsetof(source2sdk::server::CBot, m_forwardSpeed) == 0xc4);
        static_assert(offsetof(source2sdk::server::CBot, m_leftSpeed) == 0xc8);
        static_assert(offsetof(source2sdk::server::CBot, m_verticalSpeed) == 0xcc);
        static_assert(offsetof(source2sdk::server::CBot, m_buttonFlags) == 0xd0);
        static_assert(offsetof(source2sdk::server::CBot, m_jumpTimestamp) == 0xd8);
        static_assert(offsetof(source2sdk::server::CBot, m_viewForward) == 0xdc);
        static_assert(offsetof(source2sdk::server::CBot, m_postureStackIndex) == 0xf8);
        
        static_assert(sizeof(source2sdk::server::CBot) == 0x100);
    };
};
