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
        // Size: 0x638
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_VoteController : public source2sdk::client::C_BaseEntity
        {
        public:
            uint8_t _pad0600[0x10]; // 0x600
            std::int32_t m_iActiveIssueIndex; // 0x610            
            std::int32_t m_iOnlyTeamToVote; // 0x614            
            std::int32_t m_nVoteOptionCount[5]; // 0x618            
            std::int32_t m_nPotentialVotes; // 0x62c            
            bool m_bVotesDirty; // 0x630            
            bool m_bTypeDirty; // 0x631            
            bool m_bIsYesNoVote; // 0x632            
            uint8_t _pad0633[0x5];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_VoteController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_VoteController) == 0x638);
    };
};
