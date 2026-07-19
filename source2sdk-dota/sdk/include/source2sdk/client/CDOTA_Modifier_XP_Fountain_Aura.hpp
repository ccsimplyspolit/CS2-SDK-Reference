#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1a78
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_XP_Fountain_Aura : public source2sdk::client::CDOTA_Buff
        {
        public:
            bool m_bActive; // 0x1a58            
            bool m_bIsGranting; // 0x1a59            
            bool m_bInitialized; // 0x1a5a            
            bool m_bSetFoW; // 0x1a5b            
            source2sdk::entity2::GameTime_t m_flNextXpActivationTime; // 0x1a5c            
            float countdown_time; // 0x1a60            
            float think_interval; // 0x1a64            
            float m_flRemainingCountDownTime; // 0x1a68            
            float radius; // 0x1a6c            
            float m_flPauseDuration; // 0x1a70            
            bool m_bCapturableByEnemy; // 0x1a74            
            uint8_t _pad1a75[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_XP_Fountain_Aura because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_XP_Fountain_Aura) == 0x1a78);
    };
};
