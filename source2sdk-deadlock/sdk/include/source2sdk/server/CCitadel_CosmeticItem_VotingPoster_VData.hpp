#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CitadelVotingPosterHeroData_t.hpp"
#include "source2sdk/server/CitadelItemVData.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x18d8
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_CosmeticItem_VotingPoster_VData : public source2sdk::server::CitadelItemVData
        {
        public:
            // m_vecVotingPosters has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CitadelVotingPosterHeroData_t> m_vecVotingPosters;
            char m_vecVotingPosters[0x18]; // 0x18b8            
            std::int32_t m_nDecalLimit; // 0x18d0            
            uint8_t _pad18d4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_CosmeticItem_VotingPoster_VData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_CosmeticItem_VotingPoster_VData) == 0x18d8);
    };
};
