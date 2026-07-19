#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/EPlayOfTheGameReplayTrigger.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        // Size: 0x40
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MNetworkVarNames "GameTime_t m_tTriggerTime"
        // static metadata: MNetworkVarNames "EPlayOfTheGameReplayTrigger m_eType"
        // static metadata: MNetworkVarNames "CPlayerSlot m_nTarget"
        #pragma pack(push, 1)
        struct PlayOfTheGameTrigger_t
        {
        public:
            uint8_t _pad0000[0x30]; // 0x0
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_tTriggerTime; // 0x30            
            // metadata: MNetworkEnable
            source2sdk::client::EPlayOfTheGameReplayTrigger m_eType; // 0x34            
            uint8_t _pad0035[0x3]; // 0x35
            // metadata: MNetworkEnable
            CPlayerSlot m_nTarget; // 0x38            
            uint8_t _pad003c[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::PlayOfTheGameTrigger_t, m_tTriggerTime) == 0x30);
        static_assert(offsetof(source2sdk::client::PlayOfTheGameTrigger_t, m_eType) == 0x34);
        static_assert(offsetof(source2sdk::client::PlayOfTheGameTrigger_t, m_nTarget) == 0x38);
        
        static_assert(sizeof(source2sdk::client::PlayOfTheGameTrigger_t) == 0x40);
    };
};
