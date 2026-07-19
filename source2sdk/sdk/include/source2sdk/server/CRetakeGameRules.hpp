#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
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
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x1f0
        // Has VTable
        #pragma pack(push, 1)
        class CRetakeGameRules
        {
        public:
            uint8_t _pad0000[0x138]; // 0x0
            std::int32_t m_nMatchSeed; // 0x138            
            bool m_bBlockersPresent; // 0x13c            
            bool m_bRoundInProgress; // 0x13d            
            uint8_t _pad013e[0x2]; // 0x13e
            std::int32_t m_iFirstSecondHalfRound; // 0x140            
            std::int32_t m_iBombSite; // 0x144            
            // m_hBombPlanter has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CCSPlayerPawn> m_hBombPlanter;
            char m_hBombPlanter[0x4]; // 0x148            
            uint8_t _pad014c[0xa4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CRetakeGameRules, m_nMatchSeed) == 0x138);
        static_assert(offsetof(source2sdk::server::CRetakeGameRules, m_bBlockersPresent) == 0x13c);
        static_assert(offsetof(source2sdk::server::CRetakeGameRules, m_bRoundInProgress) == 0x13d);
        static_assert(offsetof(source2sdk::server::CRetakeGameRules, m_iFirstSecondHalfRound) == 0x140);
        static_assert(offsetof(source2sdk::server::CRetakeGameRules, m_iBombSite) == 0x144);
        static_assert(offsetof(source2sdk::server::CRetakeGameRules, m_hBombPlanter) == 0x148);
        
        static_assert(sizeof(source2sdk::server::CRetakeGameRules) == 0x1f0);
    };
};
