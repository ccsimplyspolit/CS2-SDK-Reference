#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/HeroID_t.hpp"

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
        // Size: 0x58
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "float m_flCaptureProgressFrac"
        // static metadata: MNetworkVarNames "int m_nCapturerCount"
        // static metadata: MNetworkVarNames "bool m_bIsBlocked"
        // static metadata: MNetworkVarNames "HeroID_t m_vecParticipants"
        #pragma pack(push, 1)
        struct TeamKothState_t
        {
        public:
            uint8_t _pad0000[0x30]; // 0x0
            // metadata: MNetworkEnable
            float m_flCaptureProgressFrac; // 0x30            
            // metadata: MNetworkEnable
            std::int32_t m_nCapturerCount; // 0x34            
            // metadata: MNetworkEnable
            bool m_bIsBlocked; // 0x38            
            uint8_t _pad0039[0x7]; // 0x39
            // metadata: MNetworkEnable
            // m_vecParticipants has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<source2sdk::client::HeroID_t> m_vecParticipants;
            char m_vecParticipants[0x18]; // 0x40            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::TeamKothState_t, m_flCaptureProgressFrac) == 0x30);
        static_assert(offsetof(source2sdk::server::TeamKothState_t, m_nCapturerCount) == 0x34);
        static_assert(offsetof(source2sdk::server::TeamKothState_t, m_bIsBlocked) == 0x38);
        static_assert(offsetof(source2sdk::server::TeamKothState_t, m_vecParticipants) == 0x40);
        
        static_assert(sizeof(source2sdk::server::TeamKothState_t) == 0x58);
    };
};
