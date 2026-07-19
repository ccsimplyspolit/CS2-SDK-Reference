#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/soundsystem_voicecontainers/CVSound.hpp"
namespace source2sdk
{
    namespace soundsystem_voicecontainers
    {
        struct CVoiceContainerAnalysisBase;
    };
};

// /////////////////////////////////////////////////////////////
// Module: soundsystem_voicecontainers
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace soundsystem_voicecontainers
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x70
        // Has VTable
        // Is Abstract
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        // static metadata: MVDataNodeType "1"
        // static metadata: MPropertyPolymorphicClass
        // static metadata: MVDataFileExtension
        // static metadata: MVDataSingleton
        // static metadata: MPropertyFriendlyName "VSND Container"
        // static metadata: MPropertyDescription "Voice Container Base"
        #pragma pack(push, 1)
        class CVoiceContainerBase
        {
        public:
            uint8_t _pad0000[0x28]; // 0x0
            // metadata: MPropertySuppressField
            source2sdk::soundsystem_voicecontainers::CVSound m_vSound; // 0x28            
            // metadata: MPropertySuppressExpr "true"
            source2sdk::soundsystem_voicecontainers::CVoiceContainerAnalysisBase* m_pEnvelopeAnalyzer; // 0x68            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::soundsystem_voicecontainers::CVoiceContainerBase, m_vSound) == 0x28);
        static_assert(offsetof(source2sdk::soundsystem_voicecontainers::CVoiceContainerBase, m_pEnvelopeAnalyzer) == 0x68);
        
        static_assert(sizeof(source2sdk::soundsystem_voicecontainers::CVoiceContainerBase) == 0x70);
    };
};
