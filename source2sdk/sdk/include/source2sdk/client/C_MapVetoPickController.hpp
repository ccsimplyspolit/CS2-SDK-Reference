#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseEntity.hpp"

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
        // Standard-layout class: false
        // Size: 0xf48
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_MapVetoPickController : public source2sdk::client::C_BaseEntity
        {
        public:
            uint8_t _pad0600[0x10]; // 0x600
            std::int32_t m_nDraftType; // 0x610            
            std::int32_t m_nTeamWinningCoinToss; // 0x614            
            std::int32_t m_nTeamWithFirstChoice[64]; // 0x618            
            std::int32_t m_nVoteMapIdsList[7]; // 0x718            
            std::int32_t m_nAccountIDs[64]; // 0x734            
            std::int32_t m_nMapId0[64]; // 0x834            
            std::int32_t m_nMapId1[64]; // 0x934            
            std::int32_t m_nMapId2[64]; // 0xa34            
            std::int32_t m_nMapId3[64]; // 0xb34            
            std::int32_t m_nMapId4[64]; // 0xc34            
            std::int32_t m_nMapId5[64]; // 0xd34            
            std::int32_t m_nStartingSide0[64]; // 0xe34            
            std::int32_t m_nCurrentPhase; // 0xf34            
            std::int32_t m_nPhaseStartTick; // 0xf38            
            std::int32_t m_nPhaseDurationTicks; // 0xf3c            
            std::int32_t m_nPostDataUpdateTick; // 0xf40            
            bool m_bDisabledHud; // 0xf44            
            uint8_t _pad0f45[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_MapVetoPickController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_MapVetoPickController) == 0xf48);
    };
};
