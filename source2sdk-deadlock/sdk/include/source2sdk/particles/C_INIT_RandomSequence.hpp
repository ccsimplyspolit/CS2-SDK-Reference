#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
#include "source2sdk/particles/SequenceWeightedList_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace particles
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x210
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_INIT_RandomSequence : public source2sdk::particles::CParticleFunctionInitializer
        {
        public:
            // metadata: MPropertyFriendlyName "sequence min"
            // metadata: MPropertyAttributeEditor "SequencePicker( 1 )"
            std::int32_t m_nSequenceMin; // 0x1e0            
            // metadata: MPropertyFriendlyName "sequence max"
            // metadata: MPropertyAttributeEditor "SequencePicker( 1 )"
            std::int32_t m_nSequenceMax; // 0x1e4            
            // metadata: MPropertyFriendlyName "shuffle"
            bool m_bShuffle; // 0x1e8            
            // metadata: MPropertyFriendlyName "linear"
            bool m_bLinear; // 0x1e9            
            uint8_t _pad01ea[0x6]; // 0x1ea
            // metadata: MPropertyFriendlyName "weighted list"
            // m_WeightedList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::particles::SequenceWeightedList_t> m_WeightedList;
            char m_WeightedList[0x18]; // 0x1f0            
            uint8_t _pad0208[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_INIT_RandomSequence because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_INIT_RandomSequence) == 0x210);
    };
};
