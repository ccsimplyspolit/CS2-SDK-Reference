#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTick_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x38
        // Has VTable
        // Has Trivial Destructor
        #pragma pack(push, 1)
        class CCSPlayerModernJump
        {
        public:
            uint8_t _pad0000[0x10]; // 0x0
            source2sdk::entity2::GameTick_t m_nLastActualJumpPressTick; // 0x10            
            float m_flLastActualJumpPressFrac; // 0x14            
            source2sdk::entity2::GameTick_t m_nLastUsableJumpPressTick; // 0x18            
            float m_flLastUsableJumpPressFrac; // 0x1c            
            source2sdk::entity2::GameTick_t m_nLastLandedTick; // 0x20            
            float m_flLastLandedFrac; // 0x24            
            float m_flLastLandedVelocityX; // 0x28            
            float m_flLastLandedVelocityY; // 0x2c            
            float m_flLastLandedVelocityZ; // 0x30            
            uint8_t _pad0034[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CCSPlayerModernJump, m_nLastActualJumpPressTick) == 0x10);
        static_assert(offsetof(source2sdk::client::CCSPlayerModernJump, m_flLastActualJumpPressFrac) == 0x14);
        static_assert(offsetof(source2sdk::client::CCSPlayerModernJump, m_nLastUsableJumpPressTick) == 0x18);
        static_assert(offsetof(source2sdk::client::CCSPlayerModernJump, m_flLastUsableJumpPressFrac) == 0x1c);
        static_assert(offsetof(source2sdk::client::CCSPlayerModernJump, m_nLastLandedTick) == 0x20);
        static_assert(offsetof(source2sdk::client::CCSPlayerModernJump, m_flLastLandedFrac) == 0x24);
        static_assert(offsetof(source2sdk::client::CCSPlayerModernJump, m_flLastLandedVelocityX) == 0x28);
        static_assert(offsetof(source2sdk::client::CCSPlayerModernJump, m_flLastLandedVelocityY) == 0x2c);
        static_assert(offsetof(source2sdk::client::CCSPlayerModernJump, m_flLastLandedVelocityZ) == 0x30);
        
        static_assert(sizeof(source2sdk::client::CCSPlayerModernJump) == 0x38);
    };
};
