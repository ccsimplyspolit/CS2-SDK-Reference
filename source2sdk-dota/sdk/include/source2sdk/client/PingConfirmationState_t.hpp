#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/PingConfirmationIconType.hpp"

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
        // Size: 0xb0
        // Has VTable
        #pragma pack(push, 1)
        struct PingConfirmationState_t
        {
        public:
            uint8_t _pad0000[0x30]; // 0x0
            std::int32_t m_nInitiatingPlayerID; // 0x30            
            std::int32_t m_PingWheelMessageID; // 0x34            
            float m_flActiveUntilTime; // 0x38            
            Vector2D m_vLocation; // 0x3c            
            std::int32_t m_nPingedEntityEntIndex; // 0x44            
            std::int32_t m_nID; // 0x48            
            source2sdk::client::PingConfirmationIconType m_IconType; // 0x4c            
            std::int32_t m_nAgreeState[24]; // 0x50            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::PingConfirmationState_t, m_nInitiatingPlayerID) == 0x30);
        static_assert(offsetof(source2sdk::client::PingConfirmationState_t, m_PingWheelMessageID) == 0x34);
        static_assert(offsetof(source2sdk::client::PingConfirmationState_t, m_flActiveUntilTime) == 0x38);
        static_assert(offsetof(source2sdk::client::PingConfirmationState_t, m_vLocation) == 0x3c);
        static_assert(offsetof(source2sdk::client::PingConfirmationState_t, m_nPingedEntityEntIndex) == 0x44);
        static_assert(offsetof(source2sdk::client::PingConfirmationState_t, m_nID) == 0x48);
        static_assert(offsetof(source2sdk::client::PingConfirmationState_t, m_IconType) == 0x4c);
        static_assert(offsetof(source2sdk::client::PingConfirmationState_t, m_nAgreeState) == 0x50);
        
        static_assert(sizeof(source2sdk::client::PingConfirmationState_t) == 0xb0);
    };
};
