#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTA_Item.hpp"
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
        // Size: 0x768
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Item_EmptyBottle : public source2sdk::client::C_DOTA_Item
        {
        public:
            std::int32_t m_iStoredRuneType; // 0x758            
            source2sdk::entity2::GameTime_t m_fStoredRuneTime; // 0x75c            
            float rune_expire_time; // 0x760            
            uint8_t _pad0764[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Item_EmptyBottle because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Item_EmptyBottle) == 0x768);
    };
};
