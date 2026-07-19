#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

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
        // Size: 0xf8
        #pragma pack(push, 1)
        struct CSAdditionalPerRoundStats_t
        {
        public:
            std::int32_t m_numChickensKilled; // 0x0            
            std::int32_t m_killsWhileBlind; // 0x4            
            std::int32_t m_bombCarrierkills; // 0x8            
            float m_flBurnDamageInflicted; // 0xc            
            float m_flBlastDamageInflicted; // 0x10            
            std::int32_t m_iDinks; // 0x14            
            bool m_bFreshStartThisRound; // 0x18            
            bool m_bBombPlantedAndAlive; // 0x19            
            uint8_t _pad001a[0x2]; // 0x1a
            std::int32_t m_nDefuseStarts; // 0x1c            
            std::int32_t m_nHostagePickUps; // 0x20            
            std::int32_t m_numTeammatesFlashed; // 0x24            
            CUtlString m_strAnnotationsWorkshopId; // 0x28            
            uint8_t _pad0030[0xc8];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CSAdditionalPerRoundStats_t, m_numChickensKilled) == 0x0);
        static_assert(offsetof(source2sdk::server::CSAdditionalPerRoundStats_t, m_killsWhileBlind) == 0x4);
        static_assert(offsetof(source2sdk::server::CSAdditionalPerRoundStats_t, m_bombCarrierkills) == 0x8);
        static_assert(offsetof(source2sdk::server::CSAdditionalPerRoundStats_t, m_flBurnDamageInflicted) == 0xc);
        static_assert(offsetof(source2sdk::server::CSAdditionalPerRoundStats_t, m_flBlastDamageInflicted) == 0x10);
        static_assert(offsetof(source2sdk::server::CSAdditionalPerRoundStats_t, m_iDinks) == 0x14);
        static_assert(offsetof(source2sdk::server::CSAdditionalPerRoundStats_t, m_bFreshStartThisRound) == 0x18);
        static_assert(offsetof(source2sdk::server::CSAdditionalPerRoundStats_t, m_bBombPlantedAndAlive) == 0x19);
        static_assert(offsetof(source2sdk::server::CSAdditionalPerRoundStats_t, m_nDefuseStarts) == 0x1c);
        static_assert(offsetof(source2sdk::server::CSAdditionalPerRoundStats_t, m_nHostagePickUps) == 0x20);
        static_assert(offsetof(source2sdk::server::CSAdditionalPerRoundStats_t, m_numTeammatesFlashed) == 0x24);
        static_assert(offsetof(source2sdk::server::CSAdditionalPerRoundStats_t, m_strAnnotationsWorkshopId) == 0x28);
        
        static_assert(sizeof(source2sdk::server::CSAdditionalPerRoundStats_t) == 0xf8);
    };
};
