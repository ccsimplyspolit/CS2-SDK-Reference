#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animlib/CNmPassthroughNode_CDefinition.hpp"

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
        // Size: 0x20
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNmSnapWeaponNode_CDefinition : public source2sdk::animlib::CNmPassthroughNode_CDefinition
        {
        public:
            std::int16_t m_nFlashedAmountNodeIdx; // 0x18            
            std::int16_t m_nWeaponCategoryNodeIdx; // 0x1a            
            std::int16_t m_nWeaponTypeNodeIdx; // 0x1c            
            uint8_t _pad001e[0x2];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNmSnapWeaponNode::CDefinition because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CNmSnapWeaponNode_CDefinition) == 0x20);
    };
};
