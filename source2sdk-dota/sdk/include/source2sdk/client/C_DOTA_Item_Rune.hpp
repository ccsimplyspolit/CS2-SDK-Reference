#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBaseAnimatingActivity.hpp"
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
        // Standard-layout class: false
        // Size: 0xd90
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Item_Rune : public source2sdk::client::CBaseAnimatingActivity
        {
        public:
            uint8_t _pad0ac0[0x18]; // 0xac0
            std::int32_t m_iRuneType; // 0xad8            
            source2sdk::entity2::GameTime_t m_flRuneTime; // 0xadc            
            std::int32_t m_nMapLocationTeam; // 0xae0            
            char m_szLocation[512]; // 0xae4            
            std::int32_t m_iOldRuneType; // 0xce4            
            bool m_bShowingTooltip; // 0xce8            
            uint8_t _pad0ce9[0xa7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Item_Rune because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Item_Rune) == 0xd90);
    };
};
