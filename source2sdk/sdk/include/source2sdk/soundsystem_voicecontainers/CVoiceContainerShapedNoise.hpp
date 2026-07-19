#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/soundsystem_voicecontainers/CVoiceContainerGenerator.hpp"

// /////////////////////////////////////////////////////////////
// Module: soundsystem_voicecontainers
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace soundsystem_voicecontainers
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x148
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyFriendlyName "Wind Generator Container"
        // static metadata: MPropertyDescription "This is a synth meant to generate whoosh noises."
        #pragma pack(push, 1)
        class CVoiceContainerShapedNoise : public source2sdk::soundsystem_voicecontainers::CVoiceContainerGenerator
        {
        public:
            bool m_bUseCurveForFrequency; // 0x70            
            uint8_t _pad0071[0x3]; // 0x71
            // metadata: MPropertySuppressExpr "m_bUseCurveForFrequency == 1"
            float m_flFrequency; // 0x74            
            // metadata: MPropertySuppressExpr "m_bUseCurveForFrequency == 0"
            // metadata: MPropertyFriendlyName "Frequency Sweep"
            CPiecewiseCurve m_frequencySweep; // 0x78            
            bool m_bUseCurveForResonance; // 0xb8            
            uint8_t _pad00b9[0x3]; // 0xb9
            // metadata: MPropertySuppressExpr "m_bUseCurveForResonance == 1"
            float m_flResonance; // 0xbc            
            // metadata: MPropertySuppressExpr "m_bUseCurveForResonance == 0"
            // metadata: MPropertyFriendlyName "Resonance Sweep"
            CPiecewiseCurve m_resonanceSweep; // 0xc0            
            bool m_bUseCurveForAmplitude; // 0x100            
            uint8_t _pad0101[0x3]; // 0x101
            // metadata: MPropertySuppressExpr "m_bUseCurveForAmplitude == 1"
            float m_flGainInDecibels; // 0x104            
            // metadata: MPropertySuppressExpr "m_bUseCurveForAmplitude == 0"
            // metadata: MPropertyFriendlyName "Gain Sweep (in Decibels)"
            CPiecewiseCurve m_gainSweep; // 0x108            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CVoiceContainerShapedNoise because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::soundsystem_voicecontainers::CVoiceContainerShapedNoise) == 0x148);
    };
};
