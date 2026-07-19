#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

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
        // Size: 0x18
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct RecommendedUpgradeHints_t
        {
        public:
            std::uint32_t unSellPriority; // 0x0            
            std::uint32_t unRequiredFlexSlots; // 0x4            
            // sImbueTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CSubclassName<4> sImbueTarget;
            char sImbueTarget[0x10]; // 0x8            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::RecommendedUpgradeHints_t, unSellPriority) == 0x0);
        static_assert(offsetof(source2sdk::client::RecommendedUpgradeHints_t, unRequiredFlexSlots) == 0x4);
        static_assert(offsetof(source2sdk::client::RecommendedUpgradeHints_t, sImbueTarget) == 0x8);
        
        static_assert(sizeof(source2sdk::client::RecommendedUpgradeHints_t) == 0x18);
    };
};
