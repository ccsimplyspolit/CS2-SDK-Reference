#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animlib/CNmPoseNode_CDefinition.hpp"

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animlib
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xc8
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNmBlend2DNode_CDefinition : public source2sdk::animlib::CNmPoseNode_CDefinition
        {
        public:
            // m_sourceNodeIndices has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlLeanVectorFixedGrowable<std::int16_t,5> m_sourceNodeIndices;
            char m_sourceNodeIndices[0x18]; // 0x10            
            // m_values has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlLeanVectorFixedGrowable<Vector2D,10> m_values;
            char m_values[0x58]; // 0x28            
            // m_indices has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlLeanVectorFixedGrowable<std::uint8_t,30> m_indices;
            char m_indices[0x28]; // 0x80            
            // m_hullIndices has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlLeanVectorFixedGrowable<std::uint8_t,10> m_hullIndices;
            char m_hullIndices[0x18]; // 0xa8            
            std::int16_t m_nInputParameterNodeIdx0; // 0xc0            
            std::int16_t m_nInputParameterNodeIdx1; // 0xc2            
            bool m_bAllowLooping; // 0xc4            
            uint8_t _pad00c5[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNmBlend2DNode::CDefinition because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::animlib::CNmBlend2DNode_CDefinition) == 0xc8);
    };
};
