#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace animgraphlib
    {
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x30
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CBlendNodeInstanceData
        {
        public:
            float m_dampedValue; // 0x0            
            float m_flCycle; // 0x4            
            float m_flCycleZeroTime; // 0x8            
            float m_flPlaybackRate; // 0xc            
            // m_flBlendValue has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimNetVar<float> m_flBlendValue;
            char m_flBlendValue[0xc]; // 0x10            
            float m_flDuration; // 0x1c            
            // m_resetCount has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimNetVar<std::uint8_t> m_resetCount;
            char m_resetCount[0xc]; // 0x20            
            uint8_t _pad002c[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::CBlendNodeInstanceData, m_dampedValue) == 0x0);
        static_assert(offsetof(source2sdk::animgraphlib::CBlendNodeInstanceData, m_flCycle) == 0x4);
        static_assert(offsetof(source2sdk::animgraphlib::CBlendNodeInstanceData, m_flCycleZeroTime) == 0x8);
        static_assert(offsetof(source2sdk::animgraphlib::CBlendNodeInstanceData, m_flPlaybackRate) == 0xc);
        static_assert(offsetof(source2sdk::animgraphlib::CBlendNodeInstanceData, m_flBlendValue) == 0x10);
        static_assert(offsetof(source2sdk::animgraphlib::CBlendNodeInstanceData, m_flDuration) == 0x1c);
        static_assert(offsetof(source2sdk::animgraphlib::CBlendNodeInstanceData, m_resetCount) == 0x20);
        
        static_assert(sizeof(source2sdk::animgraphlib::CBlendNodeInstanceData) == 0x30);
    };
};
