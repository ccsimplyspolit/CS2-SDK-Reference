#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/NetVarConfigIndex.hpp"

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
        // Size: 0x58
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class MotionSelection
        {
        public:
            uint8_t _pad0000[0x24]; // 0x0
            source2sdk::animgraphlib::NetVarConfigIndex m_nConfigIndex; // 0x24            
            // m_flCycleZeroTime has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimNetVar<float> m_flCycleZeroTime;
            char m_flCycleZeroTime[0xc]; // 0x30            
            // m_flPlaybackSpeed has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimNetVar<float> m_flPlaybackSpeed;
            char m_flPlaybackSpeed[0xc]; // 0x3c            
            // m_flStartTime has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimNetVar<float> m_flStartTime;
            char m_flStartTime[0xc]; // 0x48            
            std::int32_t m_nSample; // 0x54            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::animgraphlib::MotionSelection, m_nConfigIndex) == 0x24);
        static_assert(offsetof(source2sdk::animgraphlib::MotionSelection, m_flCycleZeroTime) == 0x30);
        static_assert(offsetof(source2sdk::animgraphlib::MotionSelection, m_flPlaybackSpeed) == 0x3c);
        static_assert(offsetof(source2sdk::animgraphlib::MotionSelection, m_flStartTime) == 0x48);
        static_assert(offsetof(source2sdk::animgraphlib::MotionSelection, m_nSample) == 0x54);
        
        static_assert(sizeof(source2sdk::animgraphlib::MotionSelection) == 0x58);
    };
};
