#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/soundsystem_lowlevel/VMixSubgraphSwitchInterpolationType_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: soundsystem_lowlevel
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace soundsystem_lowlevel
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x38
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct VMixSubgraphSwitchDesc_t
        {
        public:
            CUtlString m_name; // 0x0            
            CUtlString m_effectName; // 0x8            
            // m_subgraphs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlString> m_subgraphs;
            char m_subgraphs[0x18]; // 0x10            
            source2sdk::soundsystem_lowlevel::VMixSubgraphSwitchInterpolationType_t m_interpolationMode; // 0x28            
            bool m_bOnlyTailsOnFadeOut; // 0x2c            
            uint8_t _pad002d[0x3]; // 0x2d
            float m_flInterpolationTime; // 0x30            
            uint8_t _pad0034[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixSubgraphSwitchDesc_t, m_name) == 0x0);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixSubgraphSwitchDesc_t, m_effectName) == 0x8);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixSubgraphSwitchDesc_t, m_subgraphs) == 0x10);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixSubgraphSwitchDesc_t, m_interpolationMode) == 0x28);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixSubgraphSwitchDesc_t, m_bOnlyTailsOnFadeOut) == 0x2c);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixSubgraphSwitchDesc_t, m_flInterpolationTime) == 0x30);
        
        static_assert(sizeof(source2sdk::soundsystem_lowlevel::VMixSubgraphSwitchDesc_t) == 0x38);
    };
};
