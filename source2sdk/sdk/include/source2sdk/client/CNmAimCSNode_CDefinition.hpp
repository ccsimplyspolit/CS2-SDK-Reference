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
        // Size: 0x38
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNmAimCSNode_CDefinition : public source2sdk::animlib::CNmPassthroughNode_CDefinition
        {
        public:
            std::int16_t m_nVerticalAngleNodeIdx; // 0x18            
            std::int16_t m_nHorizontalAngleNodeIdx; // 0x1a            
            std::int16_t m_nWeaponCategoryNodeIdx; // 0x1c            
            std::int16_t m_nWeaponTypeNodeIdx; // 0x1e            
            std::int16_t m_nWeaponActionNodeIdx; // 0x20            
            std::int16_t m_nWeaponDropNodeIdx; // 0x22            
            std::int16_t m_nIsDefusingNodeIdx; // 0x24            
            std::int16_t m_nCrouchWeightNodeIdx; // 0x26            
            float m_flHandIKBlendInTimeSeconds; // 0x28            
            float m_flActionBlendTimeSeconds; // 0x2c            
            float m_flPlantingBlendTimeSeconds; // 0x30            
            uint8_t _pad0034[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNmAimCSNode::CDefinition because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CNmAimCSNode_CDefinition) == 0x38);
    };
};
