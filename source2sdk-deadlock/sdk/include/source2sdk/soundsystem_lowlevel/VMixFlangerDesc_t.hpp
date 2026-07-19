#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: soundsystem_lowlevel
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace soundsystem_lowlevel
    {
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x24
        // Has Trivial Constructor
        // Has Trivial Destructor
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct VMixFlangerDesc_t
        {
        public:
            bool m_bPhaseInvert; // 0x0            
            uint8_t _pad0001[0x3]; // 0x1
            float m_flGlideTime; // 0x4            
            float m_flDelay; // 0x8            
            float m_flOutputGain; // 0xc            
            float m_flFeedbackGain; // 0x10            
            float m_flFeedforwardGain; // 0x14            
            float m_flModRate; // 0x18            
            float m_flModDepth; // 0x1c            
            bool m_bApplyAntialiasing; // 0x20            
            uint8_t _pad0021[0x3];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixFlangerDesc_t, m_bPhaseInvert) == 0x0);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixFlangerDesc_t, m_flGlideTime) == 0x4);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixFlangerDesc_t, m_flDelay) == 0x8);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixFlangerDesc_t, m_flOutputGain) == 0xc);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixFlangerDesc_t, m_flFeedbackGain) == 0x10);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixFlangerDesc_t, m_flFeedforwardGain) == 0x14);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixFlangerDesc_t, m_flModRate) == 0x18);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixFlangerDesc_t, m_flModDepth) == 0x1c);
        static_assert(offsetof(source2sdk::soundsystem_lowlevel::VMixFlangerDesc_t, m_bApplyAntialiasing) == 0x20);
        
        static_assert(sizeof(source2sdk::soundsystem_lowlevel::VMixFlangerDesc_t) == 0x24);
    };
};
